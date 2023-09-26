#!/bin/bash

# build proto
protoc  --proto_path=proto  --cpp_out=src   orc_proto.proto

#build wraper
export CPATH=orc-1.8.5/c++/include:orc-1.8.5/build/c++/include:/usr/local/protobuf/include

g++  -std=c++14 -c ./src/*.c ./src/*.cc
ar -r liborcwrap.a  *.o
mv ./liborcwrap.a ./orc_lib/

rm -rf ./*.o

