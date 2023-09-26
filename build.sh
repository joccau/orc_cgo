#!/bin/bash

# generate go proto
protoc  --proto_path=./orcwrap/proto  --go_out=./utils  ./orcwrap/proto/*.proto

# build
GOARCH=arm64  CGO_ENABLED=1  go build  -o test
