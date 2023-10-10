#!/bin/bash

# generate go proto
/Users/zhaozhigao/zak/code_github/orc_cgo/orc_wrap/orc-1.8.5/build/c++/libs/thirdparty/protobuf_ep-install/bin/protoc  --proto_path=./orc_wrap/proto  --go_out=./utils  ./orc_wrap/proto/*.proto

# build
GOARCH=arm64  CGO_ENABLED=1  go build  -a -o test
