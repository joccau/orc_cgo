#!/bin/bash

# generate go proto
protoc  --proto_path=./orc_wrap/proto  --go_out=./utils  ./orc_wrap/proto/*.proto

# build
GOARCH=arm64  CGO_ENABLED=1  go build  -o test
