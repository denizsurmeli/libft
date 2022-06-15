#!/bin/sh
#sh put_headers.sh
#norminette libft
clang-format -i libft/*.c libft/*.h
cmake -S . -B cmake-build-debug
cmake --build cmake-build-debug
cd cmake-build-debug/tests && ./ft_test