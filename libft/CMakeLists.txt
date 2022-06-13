include_directories(../.)
add_library(libft STATIC libft.h ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c)
target_compile_options(libft PRIVATE -Werror -Wextra -Wall)