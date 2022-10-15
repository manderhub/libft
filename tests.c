/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:45:56 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/15 18:17:39 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <ctype.h>

int main(void)
{
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

	// test ft_strlcpy
	printf("ft_strlcpy:	running tests...\n");
	void *buf_3 = malloc(sizeof(char) * 255);
	void *buf_4 = malloc(sizeof(char) * 255);
	assert(strlcpy(buf_3, "Bonjour!", 9) == ft_strlcpy(buf_3, "Bonjour!", 9));
	assert(memcmp(buf_3, buf_4, 255));
	printf("ft_strlcpy:	A-OKAY!\n");

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

	return (0);
}
