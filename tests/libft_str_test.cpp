#include <gtest/gtest.h>
#include <vector>
#include <cstring>
extern "C"{
	#include "libft/libft.h"
}

TEST(libft,ft_strlen){
	std::vector<char *> words = {"test","expect","dlkfasAKSDKfjasa231413","","\23\234\23"};
	for(const auto &elem:words){
		EXPECT_EQ(ft_strlen(elem),strlen(elem));
	}
}

TEST(libft,ft_strdup){
	std::vector<char *> words = {"test","expect","dlkfasAKSDKfjasa231413","","\23\234\23"};
	for(const auto &elem:words){
		char *temp = ft_strdup(elem);
		EXPECT_TRUE(!strcmp(temp,elem));
		delete temp;
	}
}

TEST(libft,ft_strcpy){
	std::vector<char *> words = {"test","expect","dlkfasAKSDKfjasa231413","","\23\234\23"};
	for(const auto &elem:words){
		char *d = static_cast<char *>(malloc(128));
		EXPECT_FALSE(strcmp(ft_strcpy(d,elem),elem));
		delete d;
	}
}

TEST(libft,ft_strncpy){
	size_t	memsize_1 = 64;
	size_t	memsize_2 = 32;
	int		fill_value = 97;

	char 	*src1 = static_cast<char *>(malloc(memsize_1 + 1));
	src1 = static_cast<char *>(ft_memset(src1,fill_value,memsize_1));
	src1[memsize_1] = '\0';
	char	*dest1 = static_cast<char *>(malloc((memsize_1+1) * sizeof(char)));
	// Exact copy with full size;
	ft_strncpy(dest1,src1, memsize_1 + 1);
	EXPECT_EQ(strcmp(dest1,src1),0);
	delete dest1;

	dest1  = static_cast<char *>(malloc((memsize_1) * sizeof(char)));
	dest1 = static_cast<char *>(ft_memset(dest1,fill_value + 1,memsize_1));
	ft_strncpy(dest1,src1,memsize_2);

	for(size_t i = 0; i < memsize_2;i++){
		EXPECT_EQ(dest1[i], src1[i]);
	}
	EXPECT_EQ(dest1[memsize_2], '\0');
}