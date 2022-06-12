#!/bin/sh
norminette libft
cmake -S . -B cmake-build-debug
cmake --build cmake-build-debug
cd cmake-build-debug/tests && ./ft_test