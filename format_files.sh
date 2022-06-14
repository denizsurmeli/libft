#!/bin/bash

for file in libft/*.c; do
  clang-format -i file
done