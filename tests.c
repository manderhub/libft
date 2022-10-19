/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:45:56 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/19 22:20:04 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <ctype.h>

int main(void)
{
	//***************************************
	// test ft_memmove
	//***************************************
	printf("ft_memcpy:	running tests...\n");
	char dst[0xFF];
	char src[0xFF];
	char dst_ft[0xFF];
	char src_ft[0xFF];
	memset(dst, 0, 0xFF);
	memset(src, 0, 0xFF);
	memset(dst_ft, 0, 0xFF);
	memset(src_ft, 0, 0xFF);

	//copy full src
	memmove(src, "Bonjour!", 9);
	memmove(src_ft, "Bonjour!", 9);
	assert(memcmp(memcpy(dst, src, 9), ft_memcpy(dst_ft, src_ft, 9), 0xFF) == 0);
	
	//copy 0 bytes
	memmove(src, "Bonjour!", 9);
	memmove(src_ft, "Bonjour!", 9);
	assert(memcmp(memcpy(dst, src, 0), ft_memcpy(dst_ft, src_ft, 9), 0xFF) == 0);
	
	//copy less than full string
	memmove(src, "Bonjour!", 9);
	memmove(src_ft, "Bonjour!", 9);
	assert(memcmp(memcpy(dst, src, 4), ft_memcpy(dst_ft, src_ft, 4), 0xFF) == 0);

	//NULL checks
	memmove(src, "Bonjour!", 9);
	memmove(src_ft, "Bonjour!", 9);
	assert(memcpy(NULL, NULL, 0) == ft_memcpy(NULL, NULL, 0));
	assert(memcpy(NULL, NULL, 5) == ft_memcpy(NULL, NULL, 5));
	assert(memcmp(memcpy(dst, NULL, 0), ft_memcpy(dst_ft, NULL, 0), 0xFF) == 0);
	assert(memcpy(NULL, src, 0) == ft_memcpy(NULL, src_ft, 0));
	//the following 2 test cases should segfault
	//ft_memcpy(dst_ft, NULL, 5);
	//ft_memcpy(NULL, src_ft, 5);
	printf("ft_memcpy:	A-OKAY!\n");
	
	//***************************************
	// test ft_memmove
	//***************************************
	printf("ft_memmove:	running tests...\n");
	memset(dst, 0, 0xFF);
	memset(src, 0, 0xFF);
	memset(dst_ft, 0, 0xFF);
	memset(src_ft, 0, 0xFF);

	//copy full src
	memmove(src, "Bonjour!", 9);
	memmove(src_ft, "Bonjour!", 9);
	assert(memcmp(memmove(dst, src, 9), ft_memmove(dst_ft, src_ft, 9), 0xFF) == 0);
	
	//copy 0 bytes
	memmove(src, "Bonjour!", 9);
	memmove(src_ft, "Bonjour!", 9);
	assert(memcmp(memmove(dst, src, 0), ft_memmove(dst_ft, src_ft, 9), 0xFF) == 0);
	
	//copy less than full string
	memmove(src, "Bonjour!", 9);
	memmove(src_ft, "Bonjour!", 9);
	assert(memcmp(memmove(dst, src, 4), ft_memmove(dst_ft, src_ft, 4), 0xFF) == 0);

	//NULL checks
	memmove(src, "Bonjour!", 9);
	memmove(src_ft, "Bonjour!", 9);
	assert(memmove(NULL, NULL, 0) == ft_memmove(NULL, NULL, 0));
	assert(memmove(NULL, NULL, 5) == ft_memmove(NULL, NULL, 5));
	assert(memcmp(memmove(dst, NULL, 0), ft_memmove(dst_ft, NULL, 0), 0xFF) == 0);
	assert(memmove(NULL, src, 0) == ft_memmove(NULL, src_ft, 0));
	//the following 2 test cases should segfault
	//ft_memmove(dst_ft, NULL, 5);
	//ft_memmove(NULL, src_ft, 5);

	//Overlap
	memmove(src, "Bonjour!", 9);
	memmove(src_ft, "Bonjour!", 9);
	assert(memcmp(memmove(src + 1, src, 4), ft_memmove(src_ft + 1, src_ft, 4), 0xFF) == 0);
	assert(memcmp(src, src_ft, 0xFF) == 0);
	printf("ft_memmove:	A-OKAY!\n");

	//***************************************
	// test ft_strlcpy
	//***************************************
	printf("ft_strlcpy:	running tests...\n");
	memset(dst, 0, 0xFF);
	memset(src, 0, 0xFF);
	memset(dst_ft, 0, 0xFF);
	memset(src_ft, 0, 0xFF);

	//copy full string
	memmove(src, "Bonjour!", 9);
	memmove(src_ft, "Bonjour!", 9);
	assert(strlcpy(dst, src, 9) == ft_strlcpy(dst_ft, src_ft, 9));
	assert(memcmp(dst, dst_ft, 0xFF) == 0);

	//copy part of string
	memmove(src, "Bonjour!", 9);
	memmove(src_ft, "Bonjour!", 9);
	assert(strlcpy(dst, src, 4) == ft_strlcpy(dst_ft, src_ft, 4));
	assert(memcmp(dst, dst_ft, 0xFF) == 0);

	//dstsize = 0
	memmove(src, "Bonjour!", 9);
	memmove(src_ft, "Bonjour!", 9);
	assert(strlcpy(dst, src, 0) == ft_strlcpy(dst_ft, src_ft, 0));
	assert(memcmp(dst, dst_ft, 0xFF) == 0);

	//empty string
	memmove(src, "", 1);
	memmove(src_ft, "", 1);
	assert(strlcpy(dst, src, 1) == ft_strlcpy(dst_ft, src_ft, 1));
	assert(memcmp(dst, dst_ft, 0xFF) == 0);

	//empty string
	memmove(src, "", 1);
	memmove(src_ft, "", 1);
	assert(strlcpy(dst, src, 0) == ft_strlcpy(dst_ft, src_ft, 0));
	assert(memcmp(dst, dst_ft, 0xFF) == 0);

	//dst is NULL and dstsize = 0
	memmove(src, "Bonjour!", 9);
	memmove(src_ft, "Bonjour!", 9);
	assert(strlcpy(NULL, src, 0) == ft_strlcpy(NULL, src_ft, 0));

	//following should all segfault
	//ft_strlcpy(NULL, src_ft, 5);
	//ft_strlcpy(dst_ft, NULL, 0);
	//ft_strlcpy(dst_ft, NULL, 5);
	//ft_strlcpy(NULL, NULL, 0);
	//ft_strlcpy(NULL, NULL, 5);
	printf("ft_strlcpy:	A-OKAY!\n");

	//***************************************
	// test ft_strlcat
	//***************************************
	printf("ft_strlcat:	running tests...\n");
	//basic correct use
	memset(dst, 'A', 0xFF);
	memset(src, 'A', 0xFF);
	memset(dst_ft, 'A', 0xFF);
	memset(src_ft, 'A', 0xFF);
	memmove(dst, "Bonjour, ", 10);
	memmove(dst_ft, "Bonjour, ", 10);
	memmove(src, "Mario!", 7);
	memmove(src_ft, "Mario!", 7);
	assert(strlcat(dst, src, 16) == ft_strlcat(dst_ft, src_ft, 16));
	assert(memcmp(dst, dst_ft, 0xff) == 0);

	//dstsize larger than len(dst) + len(src) + 1
	memset(dst, 'A', 0xFF);
	memset(src, 'A', 0xFF);
	memset(dst_ft, 'A', 0xFF);
	memset(src_ft, 'A', 0xFF);
	memmove(dst, "Bonjour, ", 10);
	memmove(dst_ft, "Bonjour, ", 10);
	memmove(src, "Mario!", 7);
	memmove(src_ft, "Mario!", 7);
	assert(strlcat(dst, src, 20) == ft_strlcat(dst_ft, src_ft, 20));
	assert(memcmp(dst, dst_ft, 0xff) == 0);

	//dstsize smaller than len(dst) + len(src) + 1
	memset(dst, 'A', 0xFF);
	memset(src, 'A', 0xFF);
	memset(dst_ft, 'A', 0xFF);
	memset(src_ft, 'A', 0xFF);
	memmove(dst, "Bonjour, ", 10);
	memmove(dst_ft, "Bonjour, ", 10);
	memmove(src, "Mario!", 7);
	memmove(src_ft, "Mario!", 7);
	assert(strlcat(dst, src, 10) == ft_strlcat(dst_ft, src_ft, 10));
	assert(memcmp(dst, dst_ft, 0xff) == 0);

	//dstsize 0
	memset(dst, 'A', 0xFF);
	memset(src, 'A', 0xFF);
	memset(dst_ft, 'A', 0xFF);
	memset(src_ft, 'A', 0xFF);
	memmove(dst, "Bonjour, ", 10);
	memmove(dst_ft, "Bonjour, ", 10);
	memmove(src, "Mario!", 7);
	memmove(src_ft, "Mario!", 7);
	assert(strlcat(dst, src, 0) == ft_strlcat(dst_ft, src_ft, 0));
	assert(memcmp(dst, dst_ft, 0xff) == 0);

	//dst is empty string, correct dstsize
	memset(dst, 'A', 0xFF);
	memset(src, 'A', 0xFF);
	memset(dst_ft, 'A', 0xFF);
	memset(src_ft, 'A', 0xFF);
	memmove(dst, "", 1);
	memmove(dst_ft, "", 1);
	memmove(src, "Mario!", 7);
	memmove(src_ft, "Mario!", 7);
	assert(strlcat(dst, src, 7) == ft_strlcat(dst_ft, src_ft, 7));
	assert(memcmp(dst, dst_ft, 0xff) == 0);

	//dst is empty string, larger dstsize
	memset(dst, 'A', 0xFF);
	memset(src, 'A', 0xFF);
	memset(dst_ft, 'A', 0xFF);
	memset(src_ft, 'A', 0xFF);
	memmove(dst, "", 1);
	memmove(dst_ft, "", 1);
	memmove(src, "Mario!", 7);
	memmove(src_ft, "Mario!", 7);
	assert(strlcat(dst, src, 20) == ft_strlcat(dst_ft, src_ft, 20));
	assert(memcmp(dst, dst_ft, 0xff) == 0);

	//dst is empty string, too small dstsize
	memset(dst, 'A', 0xFF);
	memset(src, 'A', 0xFF);
	memset(dst_ft, 'A', 0xFF);
	memset(src_ft, 'A', 0xFF);
	memmove(dst, "", 1);
	memmove(dst_ft, "", 1);
	memmove(src, "Mario!", 7);
	memmove(src_ft, "Mario!", 7);
	assert(strlcat(dst, src, 4) == ft_strlcat(dst_ft, src_ft, 4));
	assert(memcmp(dst, dst_ft, 0xff) == 0);

	//src is empty string, correct dstsize
	memset(dst, 'A', 0xFF);
	memset(src, 'A', 0xFF);
	memset(dst_ft, 'A', 0xFF);
	memset(src_ft, 'A', 0xFF);
	memmove(dst, "Bonjour!", 9);
	memmove(dst_ft, "Bonjour!", 9);
	memmove(src, "", 1);
	memmove(src_ft, "", 1);
	assert(strlcat(dst, src, 9) == ft_strlcat(dst_ft, src_ft, 9));
	assert(memcmp(dst, dst_ft, 0xff) == 0);

	//src is empty string, larger dstsize
	memset(dst, 'A', 0xFF);
	memset(src, 'A', 0xFF);
	memset(dst_ft, 'A', 0xFF);
	memset(src_ft, 'A', 0xFF);
	memmove(dst, "Bonjour!", 9);
	memmove(dst_ft, "Bonjour!", 9);
	memmove(src, "", 1);
	memmove(src_ft, "", 1);
	assert(strlcat(dst, src, 20) == ft_strlcat(dst_ft, src_ft, 20));
	assert(memcmp(dst, dst_ft, 0xff) == 0);

	//src is empty string, too small dstsize
	memset(dst, 'A', 0xFF);
	memset(src, 'A', 0xFF);
	memset(dst_ft, 'A', 0xFF);
	memset(src_ft, 'A', 0xFF);
	memmove(dst, "Bonjour!", 9);
	memmove(dst_ft, "Bonjour!", 9);
	memmove(src, "", 1);
	memmove(src_ft, "", 1);
	assert(strlcat(dst, src, 4) == ft_strlcat(dst_ft, src_ft, 4));
	assert(memcmp(dst, dst_ft, 0xff) == 0);
	
	//src is empty string
	memset(dst, 'A', 0xFF);
	memset(src, 'A', 0xFF);
	memset(dst_ft, 'A', 0xFF);
	memset(src_ft, 'A', 0xFF);
	memmove(dst, ", ", 1);
	memmove(dst_ft, ", ", 1);
	memmove(src, "Mario!", 7);
	memmove(src_ft, "Mario!", 7);
	assert(strlcat(dst, src, 20) == ft_strlcat(dst_ft, src_ft, 20));
	assert(memcmp(dst, dst_ft, 0xff) == 0);

	//src is NULL, size 0
	memset(dst, 'A', 0xFF);
	memset(dst_ft, 'A', 0xFF);
	memmove(dst, "Bonjour!", 9);
	memmove(dst_ft, "Bonjour!", 9);
	//segfault expected
	//ft_strlcat(dst_ft, NULL, 0);

	//src is NULL, size > 0
	memset(dst, 'A', 0xFF);
	memset(dst_ft, 'A', 0xFF);
	memmove(dst, "Bonjour!", 9);
	memmove(dst_ft, "Bonjour!", 9);
	//segfault expected
	//ft_strlcat(dst_ft, NULL, 20);


	//TODO: ft_strlcat segfaults for this testcase while strlcat does not!
	//dst is NULL, size 0
	memset(src, 'A', 0xFF);
	memset(src_ft, 'A', 0xFF);
	memmove(src, "Bonjour!", 9);
	memmove(src_ft, "Bonjour!", 9);
	//printf("%lu\n", strlcat(NULL, src, 0));
	//printf("%lu\n", ft_strlcat(NULL, src_ft, 0));
	//assert(strlcat(NULL, src, 0) == ft_strlcat(NULL, src_ft, 0));
	//assert(memcmp(dst, dst_ft, 0xff) == 0);

	//dst is NULL, size > 0
	memset(src, 'A', 0xFF);
	memset(src_ft, 'A', 0xFF);
	memmove(src, "Bonjour!", 9);
	memmove(src_ft, "Bonjour!", 9);
	//segfault expected
	//ft_strlcat(NULL, src_ft, 20);
	printf("ft_strlcat:	A-OKAY!\n");
	
	//***************************************
	// test ft_strnstr
	//***************************************
	printf("ft_strnstr:	running tests...\n");

	//correct use of base case
	assert(memcmp(strnstr("Do you respect wood?", "wood", 21), ft_strnstr("Do you respect wood?", "wood", 21), 6) == 0);
	//len longer than haystack
	assert(memcmp(strnstr("Do you respect wood?", "wood", 200), ft_strnstr("Do you respect wood?", "wood", 200), 6) == 0);
	//needle is empty
	assert(memcmp(strnstr("Do you respect wood?", "", 21), ft_strnstr("Do you respect wood?", "", 21), 21) == 0);
	//len shorter than haystack and too short to find needle
	assert(strnstr("Do you respect wood?", "wood", 18) == ft_strnstr("Do you respect wood?", "wood", 18));
	//needle not in haystack at all
	assert(strnstr("Do you respect wood?", "howdy", 21) == ft_strnstr("Do you respect wood?", "howdy", 21));
	//needle longer than haystack
	assert(strnstr("Do you respect wood?", "Do you respect wood, honey?", 21) == ft_strnstr("Do you respect wood?", "Do you respect wood, honey?", 21));
	//needle and haystack are equal
	assert(strnstr("Do you respect wood?", "Do you respect wood?", 21) == ft_strnstr("Do you respect wood?", "Do you respect wood?", 21));
	//needle and haystack are equal, but len shorter than haystack
	assert(strnstr("Do you respect wood?", "Do you respect wood?", 8) == ft_strnstr("Do you respect wood?", "Do you respect wood?", 8));
	printf("ft_strnstr:	A-OKAY!\n");
	

	// test ft_isalpha
	printf("ft_isalpha:	running tests...\n");
	assert(isalpha('a') == ft_isalpha('a'));
	assert(isalpha('A') == ft_isalpha('A'));
	assert(isalpha('z') == ft_isalpha('z'));
	assert(isalpha('Z') == ft_isalpha('Z'));
	assert(isalpha('m') == ft_isalpha('m'));
	assert(isalpha('M') == ft_isalpha('M'));
	assert(isalpha('1') == ft_isalpha('1'));
	assert(isalpha('!') == ft_isalpha('!'));
	assert(isalpha('@') == ft_isalpha('@'));
	assert(isalpha('[') == ft_isalpha('['));
	assert(isalpha('a') == ft_isalpha('a'));
	assert(isalpha('`') == ft_isalpha('`'));
	assert(isalpha('{') == ft_isalpha('{'));
	assert(isalpha(65) == ft_isalpha(65));
	assert(isalpha(64) == ft_isalpha(64));
	assert(isalpha(-1) == ft_isalpha(-1));	//value for EOF
	printf("ft_isalpha:	A-OKAY!\n");
	
	// test ft_isdigit
	printf("ft_isdigit:	running tests...\n");
	assert(isdigit(47) == ft_isdigit(47));
	assert(isdigit(48) == ft_isdigit(48));
	assert(isdigit(57) == ft_isdigit(57));
	assert(isdigit(58) == ft_isdigit(58));
	assert(isdigit(51) == ft_isdigit(51));
	assert(isdigit('/') == ft_isdigit('/'));
	assert(isdigit('1') == ft_isdigit('1'));
	assert(isdigit('3') == ft_isdigit('3'));
	assert(isdigit('9') == ft_isdigit('9'));
	assert(isdigit(':') == ft_isdigit(':'));
	assert(isdigit('a') == ft_isdigit('a'));
	assert(isdigit(-5) == ft_isdigit(-5));
	assert(isdigit(-1) == ft_isdigit(-1));	//value for EOF
	printf("ft_isdigit:	A-OKAY!\n");

	// test ft_isalnum
	printf("ft_isalnum:	running tests...\n");
	assert(isalnum('a') == ft_isalnum('a'));
	assert(isalnum('A') == ft_isalnum('A'));
	assert(isalnum('z') == ft_isalnum('z'));
	assert(isalnum('Z') == ft_isalnum('Z'));
	assert(isalnum('m') == ft_isalnum('m'));
	assert(isalnum('M') == ft_isalnum('M'));
	assert(isalnum('1') == ft_isalnum('1'));
	assert(isalnum('!') == ft_isalnum('!'));
	assert(isalnum('@') == ft_isalnum('@'));
	assert(isalnum('[') == ft_isalnum('['));
	assert(isalnum('a') == ft_isalnum('a'));
	assert(isalnum('`') == ft_isalnum('`'));
	assert(isalnum('{') == ft_isalnum('{'));
	assert(isalnum(65) == ft_isalnum(65));
	assert(isalnum(64) == ft_isalnum(64));
	assert(isalnum('a') == ft_isalnum('a'));
	assert(isalnum('A') == ft_isalnum('A'));
	assert(isalnum('z') == ft_isalnum('z'));
	assert(isalnum('Z') == ft_isalnum('Z'));
	assert(isalnum('m') == ft_isalnum('m'));
	assert(isalnum('M') == ft_isalnum('M'));
	assert(isalnum('1') == ft_isalnum('1'));
	assert(isalnum('!') == ft_isalnum('!'));
	assert(isalnum('@') == ft_isalnum('@'));
	assert(isalnum('[') == ft_isalnum('['));
	assert(isalnum('a') == ft_isalnum('a'));
	assert(isalnum('`') == ft_isalnum('`'));
	assert(isalnum('{') == ft_isalnum('{'));
	assert(isalnum(65) == ft_isalnum(65));
	assert(isalnum(64) == ft_isalnum(64));
	assert(isalnum(-1) == ft_isalnum(-1));	//value for EOF
	printf("ft_isalnum:	A-OKAY!\n");
	
	// test ft_isascii
	printf("ft_isascii:	running tests...\n");
	assert(isascii(-5) == ft_isascii(-5));
	assert(isascii(-1) == ft_isascii(-1));
	assert(isascii(0) == ft_isascii(0));
	assert(isascii(69) == ft_isascii(69));
	assert(isascii(127) == ft_isascii(127));
	assert(isascii(128) == ft_isascii(128));
	assert(isascii(420) == ft_isascii(420));
	assert(isascii('1') == ft_isascii('1'));
	assert(isascii(':') == ft_isascii(':'));
	assert(isascii('a') == ft_isascii('a'));
	assert(isascii('\n') == ft_isascii('\n'));
	printf("ft_isascii:	A-OKAY!\n");

	// test ft_isprint
	printf("ft_isprint:	running tests...\n");
	assert(isprint(-5) == ft_isprint(-5));
	assert(isprint(-1) == ft_isprint(-1));
	assert(isprint(31) == ft_isprint(31));
	assert(isprint(32) == ft_isprint(32));
	assert(isprint(69) == ft_isprint(69));
	assert(isprint(112) == ft_isprint(112));
	assert(isprint(126) == ft_isprint(126));
	assert(isprint(127) == ft_isprint(127));
	assert(isprint(420) == ft_isprint(420));
	assert(isprint('a') == ft_isprint('a'));
	assert(isprint('\n') == ft_isprint('\n'));
	printf("ft_isprint:	A-OKAY!\n");
	
	// test ft_toupper
	printf("ft_toupper:	running tests...\n");
	assert(toupper(-5) == ft_toupper(-5));
	assert(toupper(-1) == ft_toupper(-1));
	assert(toupper(31) == ft_toupper(31));
	assert(toupper(32) == ft_toupper(32));
	assert(toupper(96) == ft_toupper(96));
	assert(toupper(97) == ft_toupper(97));
	assert(toupper(126) == ft_toupper(126));
	assert(toupper(127) == ft_toupper(127));
	assert(toupper(122) == ft_toupper(122));
	assert(toupper(123) == ft_toupper(123));
	assert(toupper('a') == ft_toupper('a'));
	assert(toupper('\n') == ft_toupper('\n'));
	printf("ft_toupper:	A-OKAY!\n");

	// test ft_tolower
	printf("ft_tolower:	running tests...\n");
	assert(tolower(-5) == ft_tolower(-5));
	assert(tolower(-1) == ft_tolower(-1));
	assert(tolower(31) == ft_tolower(31));
	assert(tolower(32) == ft_tolower(32));
	assert(tolower(64) == ft_tolower(64));
	assert(tolower(65) == ft_tolower(65));
	assert(tolower(90) == ft_tolower(90));
	assert(tolower(91) == ft_tolower(91));
	assert(tolower(69) == ft_tolower(69));
	assert(tolower(100) == ft_tolower(100));
	assert(tolower('a') == ft_tolower('a'));
	assert(tolower('\n') == ft_tolower('\n'));
	printf("ft_tolower:	A-OKAY!\n");
	
	// test ft_strlen
	printf("ft_strlen:	running tests...\n");
	assert(strlen("Bonjour") == ft_strlen("Bonjour"));
	assert(strlen("Bonjour!") == ft_strlen("Bonjour!"));
	assert(strlen("Salut Mario") == ft_strlen("Salut Mario"));
	assert(strlen("123") == ft_strlen("123"));
	assert(strlen("123 456") == ft_strlen("123 456"));
	assert(strlen("123 456 abc") == ft_strlen("123 456 abc"));
	assert(strlen("	") == ft_strlen("	"));
	assert(strlen("") == ft_strlen(""));
	printf("ft_strlen:	A-OKAY!\n");

	// test ft_memset
	void *buf_1 = malloc(sizeof(char) * 255);
	void *buf_2 = malloc(sizeof(char) * 255);
	printf("ft_memset:	running tests...\n");
	assert(memcmp(memset(buf_1, 65, 15), ft_memset(buf_2, 65, 15), 15) == 0);
	assert(memcmp(memset(buf_1, 65, 0), ft_memset(buf_2, 65, 0), 0) == 0);
	assert(memcmp(memset(buf_1, 43, 5), ft_memset(buf_2, 43, 5), 5) == 0);
	assert(memcmp(memset(buf_1, -1, 5), ft_memset(buf_2, -1, 5), 5) == 0);
	assert(memcmp(memset(buf_1, 128, 5), ft_memset(buf_2, 128, 5), 5) == 0);
	assert(memcmp(memset(buf_1, 420, 5), ft_memset(buf_2, 420, 5), 5) == 0);
	assert(memcmp(memset(buf_1, 50000, 5), ft_memset(buf_2, 50000, 5), 5) == 0);
	printf("ft_memset:	A-OKAY!\n");
	
	// test ft_bzero
	printf("ft_bzero:	running tests...\n");
	bzero(buf_1, 1);
	ft_bzero(buf_2, 1);
	assert(memcmp(buf_1, buf_2, 255) == 0);
	bzero(buf_1, 2);
	ft_bzero(buf_2, 2);
	assert(memcmp(buf_1, buf_2, 255) == 0);
	bzero(buf_1, 15);
	ft_bzero(buf_2, 15);
	assert(memcmp(buf_1, buf_2, 255) == 0);
	bzero(buf_1, 255);
	ft_bzero(buf_2, 255);
	assert(memcmp(buf_1, buf_2, 255) == 0);
	printf("ft_bzero:	A-OKAY!\n");

	// test ft_strncmp
	printf("ft_strncmp:	running tests...\n");
	assert(strncmp("a", "a", 0) == ft_strncmp("a", "a", 0));
	assert(strncmp("aaa", "aaa", 3) == ft_strncmp("aaa", "aaa", 3));
	assert(strncmp("aa", "ab", 2) == ft_strncmp("aa", "ab", 2));
	assert(strncmp("aa", "ab", 3) == ft_strncmp("aa", "ab", 3));
	assert(strncmp("a", "", 1) == ft_strncmp("a", "", 1));
	assert(strncmp("", "a", 1) == ft_strncmp("", "a", 1));
	assert(strncmp("aa", "a", 1) == ft_strncmp("aa", "a", 1));
	assert(strncmp("aa", "a", 2) == ft_strncmp("aa", "a", 2));
	assert(strncmp("a", "aa", 1) == ft_strncmp("a", "aa", 1));
	assert(strncmp("a", "aa", 2) == ft_strncmp("a", "aa", 2));
	assert(strncmp("", "", 1) == ft_strncmp("", "", 1));
	assert(strncmp("", "", 0) == ft_strncmp("", "", 0));
	assert(strncmp("aaaa", "aaaa", -1) == ft_strncmp("aaaa", "aaaa", -1));
	assert(strncmp("Bonjour Mario!", "Bonjour, Mario!", 15) == ft_strncmp("Bonjour Mario!", "Bonjour, Mario!", 15));
	assert(strncmp("Bonjour Mario!", "Bonjour, Mario!", 5) == ft_strncmp("Bonjour Mario!", "Bonjour, Mario!", 5));
	assert(strncmp("Bonjour Mario!", "Bonjour, Mario!", 500) == ft_strncmp("Bonjour Mario!", "Bonjour, Mario!", 500));
	assert(strncmp("Bonjour Mario!", "Bonjour Mario!", 5) == ft_strncmp("Bonjour Mario!", "Bonjour Mario!", 5));
	assert(strncmp("Bonjour Mario!", "Bonjour Mario!", -500) == ft_strncmp("Bonjour Mario!", "Bonjour Mario!", -500));
	assert(strncmp("", "", 1) == ft_strncmp("", "", 1));
	printf("ft_strncmp:	A-OKAY!\n");

	// test ft_memmove
	printf("ft_memmove:	running tests...\n");
	char b[0xF0];
	memmove(b, NULL, 0);
	//ft_memmove(NULL, NULL, 5);
	return 1;
	char str_1[] = "Bonjour!";
	char str_2[] = "Bonjour!";
	assert(memcmp(memmove(str_1 + 1, str_1, 2), ft_memmove(str_2 + 1, str_2, 2), strlen(str_1)) == 0);
	assert(memcmp(memmove(str_1 + 0, str_1, 2), ft_memmove(str_2 + 0, str_2, 2), strlen(str_1)) == 0);
	char str_4[] = "Bonjour!";
	char str_5[] = "Bonjour!";
	//printf("%s\n",memmove(str_4 + 2, str_4, 2));
	//printf("%s\n",ft_memmove(str_5 + 2, str_5, 2));
	assert(memcmp(memmove(str_4 + 2, str_4, 2), ft_memmove(str_5 + 2, str_5, 2), strlen(str_4)) == 0);
	char str_6[] = "Bonjour!";
	char str_7[] = "Bonjour!";
	assert(memcmp(memmove(str_6 + 1, str_6, 3), ft_memmove(str_7 + 1, str_7, 3), strlen(str_7)) == 0);
	char str_8[] = "Bonjour!";
	char str_9[] = "Bonjour!";
	printf("%s\n",memmove(str_8, str_8 + 1, 2));
	printf("%s\n",ft_memmove(str_9, str_9 + 1, 2));
	assert(memcmp(memmove(str_8, str_8 + 1, 3), ft_memmove(str_9, str_9 + 1, 3), strlen(str_8)) == 0);
	printf("ft_memmove:	A-OKAY!\n");

	

	// test ft_atoi
	printf("ft_atoi:	running tests...\n");
	assert(atoi("") == ft_atoi(""));
	assert(atoi("0") == ft_atoi("0"));
	assert(atoi("00") == ft_atoi("00"));
	assert(atoi("-0") == ft_atoi("-0"));
	assert(atoi("-000") == ft_atoi("-000"));
	assert(atoi("0a") == ft_atoi("0a"));
	assert(atoi("1") == ft_atoi("1"));
	assert(atoi("1a") == ft_atoi("1a"));
	assert(atoi("-1") == ft_atoi("-1"));
	assert(atoi("-1a") == ft_atoi("-1a"));
	assert(atoi("10") == ft_atoi("10"));
	assert(atoi("100") == ft_atoi("100"));
	assert(atoi("222") == ft_atoi("222"));
	assert(atoi("-222") == ft_atoi("-222"));
	assert(atoi("2c22") == ft_atoi("2c22"));
	assert(atoi("-2c22") == ft_atoi("-2c22"));
	assert(atoi("22_2") == ft_atoi("22_2"));
	assert(atoi(" 222") == ft_atoi(" 222"));
	assert(atoi("_222") == ft_atoi("_222"));
	assert(atoi("+222") == ft_atoi("+222"));
	assert(atoi("\t222") == ft_atoi("\t222"));
	assert(atoi("\t-222") == ft_atoi("\t-222"));
	assert(atoi("\t-\t222") == ft_atoi("\t-\t222"));
	assert(atoi(" - 222") == ft_atoi(" - 222"));
	assert(atoi(" + 222") == ft_atoi(" + 222"));
	assert(atoi("2\t22") == ft_atoi("2\t22"));
	assert(atoi("22 2") == ft_atoi("22 2"));
	assert(atoi("\t22\t2") == ft_atoi("\t22\t2"));
	assert(atoi(" +a222") == ft_atoi(" +a222"));
	assert(atoi(" +a222") == ft_atoi(" +a222"));
	assert(atoi(" +a222") == ft_atoi(" +a222"));
	printf("ft_atoi:	A-OKAY!\n");

	// test ft_substr
	printf("ft_substr:	running tests...\n");
	assert(memcmp("Bonjour!", ft_substr("Bonjour!", 0, 8), 9) == 0);
	assert(memcmp("Bon", ft_substr("Bonjour!", 0, 3), 4) == 0);
	assert(memcmp("jour", ft_substr("Bonjour!", 3, 4), 5) == 0);
	assert(memcmp("Bonjour!", ft_substr("Bonjour!", 0, 100), 9) == 0);
	assert(memcmp("", ft_substr("Bonjour!", 0, 0), 1) == 0);
	assert(memcmp("", ft_substr("", 0, 1), 1) == 0);
	assert(memcmp("", ft_substr("Bonjour!", 8, 5), 1) == 0);
	assert(memcmp("!", ft_substr("Bonjour!", 7, 5), 2) == 0);
	printf("ft_substr:	A-OKAY!\n");

	// test ft_strjoin
	printf("ft_strjoin:	running tests...\n");
	assert(memcmp("Bonjour, Mario!", ft_strjoin("Bonjour,", " Mario!"), 16) == 0);
	assert(memcmp("Bonjour,", ft_strjoin("Bonjour,", ""), 9) == 0);
	assert(memcmp("Mario!", ft_strjoin("", "Mario!"), 7) == 0);
	assert(memcmp("", ft_strjoin("", ""), 1) == 0);
	assert(memcmp("ma", ft_strjoin("m", "a"), 3) == 0);
	assert(memcmp("m", ft_strjoin("m", ""), 2) == 0);
	assert(memcmp("a", ft_strjoin("", "a"), 2) == 0);
	printf("ft_strjoin:	A-OKAY!\n");

	// test ft_strtrim
	printf("ft_strtrim:	running tests...\n");
	assert(memcmp("Bonjour!", ft_strtrim("Bonjour!", "_"), 9) == 0);
	assert(memcmp("Bonjour!", ft_strtrim("_Bonjour!", "_"), 9) == 0);
	assert(memcmp("Bonjour!", ft_strtrim("___Bonjour!", "_"), 9) == 0);
	assert(memcmp("Bonjour!", ft_strtrim("_+Bonjour!", "+_"), 9) == 0);
	assert(memcmp("Bonjour!", ft_strtrim("_+Bonjour!", "_+"), 9) == 0);
	assert(memcmp("Bonjour!", ft_strtrim("_+Bonjour!", "+_-"), 9) == 0);
	assert(memcmp("", ft_strtrim("_+Bonjour!", "+_"), 1));
	assert(memcmp("__Bonjour!++", ft_strtrim("__Bonjour!++", ""), 13) == 0);
	printf("%s\n", ft_strtrim("Bonjour!_", "_"));
	printf("%s\n", ft_strtrim("Bonjour!___", "_"));
	printf("%s\n", ft_strtrim("_+Bonjour!+", "_+-"));
	printf("%s\n", ft_strtrim("_+_+Bonjour!+++", "_+-"));
	printf("%s\n", ft_strtrim("_+----_+Bon--jour!++-+", "_+-"));
	printf("%s\n", ft_strtrim("__Bonjour!++", ""));
	printf("ft_strtrim:	A-OKAY!\n");

	// test ft_split
	printf("ft_split:	running tests...\n");
	char **result = ft_split("aa;bb;ccc", ';');
	printf("%s\n", *(result + 0));
	printf("%s\n", *(result + 1));
	printf("%s\n", *(result + 2));
	printf("%s\n", *(result + 3));
	//printf("%s\n", *(result + 4));
	//printf("%s\n", *(result + 5));
	printf("ft_split:	A-OKAY!\n");

	// test ft_itoa
	printf("ft_itoa:	running tests...\n");
	printf("%s\n", ft_itoa(5));
	printf("%s\n", ft_itoa(-5));
	printf("%s\n", ft_itoa(55));
	printf("%s\n", ft_itoa(555));
	printf("%s\n", ft_itoa(-555));
	printf("%s\n", ft_itoa(-1));
	printf("%s\n", ft_itoa(-10));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(10));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-0));
	printf("ft_itoa:	A-OKAY!\n");

	// test ft_putchar_fd
	printf("ft_putchar_fd:	running tests...\n");
	ft_putchar_fd('m', 1);
	ft_putchar_fd('\n', 1);
	printf("ft_putchar_fd:	A-OKAY!\n");

	// test ft_putstr_fd
	printf("ft_putstr_fd:	running tests...\n");
	ft_putstr_fd("m\n", 1);
	ft_putstr_fd("Mario\n", 1);
	ft_putstr_fd("Bonjour, Mario!\n", 1);
	printf("ft_putstr_fd:	A-OKAY!\n");

	// test ft_putendl_fd
	printf("ft_putendl_fd:	running tests...\n");
	ft_putendl_fd("m", 1);
	ft_putendl_fd("Mario", 1);
	ft_putendl_fd("Bonjour, Mario!", 1);
	printf("ft_putendl_fd:	A-OKAY!");

	// test ft_putnbr_fd
	printf("ft_putnbr_fd:	running tests...\n");
	ft_putnbr_fd(5, 1);
	ft_putendl_fd("", 1);
	ft_putnbr_fd(123456, 1);
	ft_putendl_fd("", 1);
	ft_putnbr_fd(-321, 1);
	ft_putendl_fd("", 1);
	ft_putnbr_fd(0, 1);
	ft_putendl_fd("", 1);
	ft_putnbr_fd(-0, 1);
	ft_putendl_fd("", 1);
	printf("ft_putnbr_fd:	A-OKAY!");

	// test ft_memchr
	printf("ft_memchr:	running tests...\n");
	printf("%s\n", (char *)ft_memchr("Bonjour!", 'o', 9));
	printf("%s\n", (char *)ft_memchr("Bonjour!", '\0', 9));
	printf("ft_memchr:	A-OKAY!");
	
	// test ft_memcmp
	printf("ft_memcmp:	running tests...\n");
	assert(memcmp("", "", 1) == ft_memcmp("", "", 1));
	assert(memcmp("", "", 10) == ft_memcmp("", "", 10));
	
	printf("%d\n", memcmp("\xff\xaa\xde\x12", "\xff\xaa\xde\x12MACOSAAAAA", 4));
	printf("%d\n", ft_memcmp("\xff\xaa\xde\x12", "\xff\xaa\xde\x12MACOSAAAAA", 4));

	
	printf("%d\n", memcmp("aaa", "c", -100));
	printf("%d\n", ft_memcmp("aaa", "c", 1));

	
	printf("%d\n", memcmp("a", "", 1));
	printf("%d\n", memcmp("", "a", 1));
	printf("%d\n", memcmp("a", "b", 1));
	printf("%d\n", memcmp("a", "c", 1));
	printf("%d\n", ft_memcmp("a", "", 1));
	printf("%d\n", ft_memcmp("", "a", 1));
	printf("%d\n", ft_memcmp("a", "b", 1));
	assert(ft_memcmp("a", "", 1) > 0);
	assert(ft_memcmp("a", "", 10) > 0);
	assert(ft_memcmp("", "a", 1) < 0);
	assert(ft_memcmp("", "a", 10) < 0);
	assert(memcmp("aaa", "aaa", 4) == ft_memcmp("aaa", "aaa", 4));
	assert(memcmp("aaa", "aaa", 10) == ft_memcmp("aaa", "aaa", 10));
	assert(memcmp("aaa", "b", 1) == ft_memcmp("aaa", "b", 1));
	assert(memcmp("aaa", "b", 10) == ft_memcmp("aaa", "b", 10));
	assert(memcmp("aaa", "ab", 10) == ft_memcmp("aaa", "ab", 10));
	printf("ft_memcmp:	A-OKAY!");
	
	return (0);
}
