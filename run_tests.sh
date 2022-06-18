#!/bin/sh
#sh put_headers.sh
#norminette libft
clang-format -i libft/*.c libft/*.h
cmake -S . -B build
cmake --build build
cd build/tests && ./ft_test
