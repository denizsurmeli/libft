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