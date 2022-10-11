/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:45:56 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/11 13:43:42 by manderhu         ###   ########.fr       */
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
	
	return (0);
}
