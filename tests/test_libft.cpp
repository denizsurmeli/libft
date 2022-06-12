#include <gtest/gtest.h>
#include <vector>
#include <cstring>
extern "C"{
	#include "libft/libft.h"
}

TEST(libft, ft_memset){
	// set 64 bytes filled with 'v'.
	size_t			memsize = 64;
	int 			c = 'v';
	void*			mem = malloc(sizeof(unsigned char) * memsize);
	auto* 	temp_mem = (unsigned char *) memset(mem,c,memsize);
	// if null returned, no fill.
	if(temp_mem == NULL){
		FAIL();
	}
	// expect every byte in size of memsize is equal to filled char.
	for(size_t i = 0 ; i < memsize; i++)
	{
		EXPECT_EQ(temp_mem[i],(unsigned char) c) << "Values differ between libc and implementation.";
	}
}

TEST(libft, ft_bzero){
	size_t 		memsize = 64;
	void 		*mem = malloc(sizeof(unsigned char) * memsize);
	ft_bzero(mem,memsize);

	auto	*temp_mem = (unsigned char *) mem;
	for(size_t i = 0 ; i < memsize; i++){
		EXPECT_EQ(temp_mem[i], 0) << "Values differ between libc and implementation.";
	}

}

TEST(libft,ft_memcpy){
	size_t				memsize = 64;
	auto 		*mem = (unsigned char *)malloc(sizeof(unsigned char) * memsize);
	auto		*dest = (unsigned char *) malloc(sizeof(unsigned char) * memsize);
	int					ch = 'c';
	mem = (unsigned char *)ft_memset(mem,ch,memsize);
	ft_memcpy(dest,mem,memsize);
	for(size_t i = 0; i < memsize; i++)
	{
		EXPECT_EQ(mem[i],dest[i]) << "Values differ between libc and implementation.";
	}
}

TEST(libft, ft_memccpy) {
	size_t 			memsize = 64;
	auto	*mem = (unsigned char *) malloc(sizeof(unsigned char) * memsize);
	auto	*dest_1 = (unsigned char *) malloc(sizeof(unsigned char) * memsize);
	auto	*dest_2 = (unsigned char *) malloc(sizeof(unsigned char) * memsize);
	int 			ch = 'c';
	int				cb = 'k';

	mem = (unsigned char *) ft_memset(mem,ch,memsize);
	mem[16] = cb;

	auto	*l1  = (unsigned char *) ft_memccpy(dest_1,mem,cb,memsize);
	auto	*l2  = (unsigned char *) memccpy(dest_2,mem,cb,memsize);
	for(size_t i = 0 ; i < 16 ; i ++){
		EXPECT_EQ(dest_1[i],dest_2[i]) << "Values differ between libc and implementation.";
	}
	EXPECT_EQ(l1 - dest_1,l2 - dest_2) << "Distance between memory locations of locations are not consistent between libc and implementation.";
	EXPECT_EQ(l1 - dest_1, 17) << "Exact size of memory difference is not met.";
}
