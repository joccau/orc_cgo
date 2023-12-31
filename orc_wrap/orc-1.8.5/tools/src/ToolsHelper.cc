/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "ToolsHelper.hh"

#include <getopt.h>

void printOptions(std::ostream& out) {
  out << "Options:\n"
      << "\t-h --help\n"
      << "\t-c --columns\t\tComma separated list of top-level column fields\n"
      << "\t-t --columnTypeIds\tComma separated list of column type ids\n"
      << "\t-n --columnNames\tComma separated list of column names\n"
      << "\t-b --batch\t\tBatch size for reading\n";
}

bool parseOptions(int* argc, char** argv[], uint64_t* batchSize, orc::RowReaderOptions* rowReaderOpts) {
  static struct option longOptions[] = {
    {"help", no_argument, ORC_NULLPTR, 'h'},
    {"batch", required_argument, ORC_NULLPTR, 'b'},
    {"columns", required_argument, ORC_NULLPTR, 'c'},
    {"columnTypeIds", required_argument, ORC_NULLPTR, 't'},
    {"columnNames", required_argument, ORC_NULLPTR, 'n'},
    {ORC_NULLPTR, 0, ORC_NULLPTR, 0}
  };
  std::list<uint64_t> cols;
  std::list<std::string> colNames;
  int opt;
  char *tail;
  do {
    opt = getopt_long(*argc, *argv, "hb:c:t:n:", longOptions, ORC_NULLPTR);
    switch (opt) {
      case '?':
      case 'h':
        return false;
      case 'b':
        *batchSize = strtoul(optarg, &tail, 10);
        if (*tail != '\0') {
          fprintf(stderr, "The --batch parameter requires an integer option.\n");
          return false;
        }
        break;
      case 't':
      case 'c':
      case 'n': {
        bool empty = true;
        char *col = std::strtok(optarg, ",");
        while (col) {
          if (opt == 'n') {
            colNames.emplace_back(col);
          } else {
            cols.emplace_back(static_cast<uint64_t>(std::atoi(col)));
          }
          empty = false;
          col = std::strtok(ORC_NULLPTR, ",");
        }
        if (!empty) {
          if (opt == 'c') {
            rowReaderOpts->include(cols);
          } else if (opt == 't') {
            rowReaderOpts->includeTypes(cols);
          } else {
            rowReaderOpts->include(colNames);
          }
        }
        break;
      }
      default: break;
    }
  } while (opt != -1);
  *argc -= optind;
  *argv += optind;
  return true;
}
