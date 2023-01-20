#!/bin/sh

set -x

./uninitialized-variable
./read-nullptr
./read-unallocated-memory
./write-nullptr
./write-unallocated-memory
./buffer-overflow-stack
./buffer-overflow-heap
