#!/bin/bash

# generate go proto
protoc  --proto_path=./orcproxy/proto  --go_out=./utils  ./orcproxy/proto/*.proto

# build
GOARCH=arm64  CGO_ENABLED=1  go build *.go
