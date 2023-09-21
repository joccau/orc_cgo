#!/bin/bash

# build proto
protoc  --proto_path=proto  --cpp_out=src   orc_proxy.proto

#build proxy
export CPATH=orc-1.8.5/c++/include:orc-1.8.5/build/c++/include

g++  -std=c++11 -c ./src/*.c 
ar -r liborcproxy.a  *.o
mv ./liborcproxy.a ./orc_lib/

rm -rf ./*.o

