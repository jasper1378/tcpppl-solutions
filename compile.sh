#!/usr/bin/env bash

g++ \
  -std=c++11 \
  -pedantic \
  -O0 \
  -g3 \
  -Wall \
  -Wextra \
  -Wpedantic \
  -fsanitize=address \
  -fsanitize=undefined \
  -fsanitize=leak \
  $@
