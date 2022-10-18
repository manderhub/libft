CC=cc
NAME=libft.a
CFLAGS=-Wall -Werror -Wextra
DEPS=libft.h
SRC= ft_bzero.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlcat.c ft_strlen.c \
	ft_strncmp.c ft_tolower.c ft_toupper.c ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_memmove.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c tests.c
OBJ= ft_bzero.o ft_isalpha.o ft_isalnum.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memset.o ft_strlcat.o ft_strlen.o \
	ft_strncmp.o ft_tolower.o ft_toupper.o ft_strlcpy.o ft_strchr.o ft_strrchr.o ft_memchr.o ft_memcmp.o ft_strnstr.o \
	ft_atoi.o ft_calloc.o ft_strdup.o ft_memmove.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o \
	ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o tests.o

all: $(NAME)

#Rule that applies to all files ending in .o suffix.
#The rule depends on the .c version of the file and the .h files included in DEPS macro (=dependency list)
#The rule defines that the .c files ($< is a special macro standing for the first item of the dependency list) are to be 
#compiled using the compiler defined in the CC macro. 
#-c flag says to generate the object files (.o files).
#-o $@ says to put the output of the compilation in a file named on the left of : ($@ is a special macro standing for 
#what's on the left of :).
#$(OBJ): $(SRC) $(DEPS)
#	$(CC) $(CFLAGS) -c -o $@ $<

#Rule named tests with dependency list containing of a single item, namely the macro OBJ.
#The rule compiles the object files ($^ is special macro standing for right side of :)
#using the compiler defined in macro CC with the compiler flags defined in macro CFLAGS
#and writes the output to a file called tests ($@ is special macro standing for left side of :)
$(NAME): $(OBJ)
	ar rcs $@ $^

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $^

tests: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

debug: $(OBJ)
	$(CC) $(CFLAGS) -g -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) tests debug

re: fclean
	$(MAKE) all