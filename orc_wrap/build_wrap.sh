#!/bin/bash

# build proto
/Users/zhaozhigao/zak/code_github/orc_cgo/orc_wrap/orc-1.8.5/build/c++/libs/thirdparty/protobuf_ep-install/bin/protoc  --proto_path=proto  --cpp_out=src   orc_wrap.proto

#build wraper
export CPATH=orc-1.8.5/c++/include:orc-1.8.5/build/c++/include:orc-1.8.5/build/c++/libs/thirdparty/protobuf_ep-install/include:./src

g++  -std=c++14 -arch arm64 -c ./src/*.c ./src/*.cc
ar -r liborcwrap.a  *.o
mv ./liborcwrap.a ./orc_lib/

rm -rf ./*.o

