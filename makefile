CC=cc
NAME=tests
CFLAGS=-Wall -Werror -Wextra
DEPS=libft.h
OBJ= ft_bzero.o ft_isalpha.o ft_isalnum.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memset.o ft_strlcat.o ft_strlen.o \
	ft_strncmp.o ft_tolower.o ft_toupper.o ft_strlcpy.o ft_strchr.o ft_strrchr.o ft_memchr.o ft_memcmp.o ft_strnstr.o \
	ft_atoi.o ft_calloc.o ft_strdup.o ft_memmove.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.c \
	ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o tests.o

#Rule that applies to all files ending in .o suffix.
#The rule depends on the .c version of the file and the .h files included in DEPS macro (=dependency list)
#The rule defines that the .c files ($< is a special macro standing for the first item of the dependency list) are to be 
#compiled using the compiler defined in the CC macro. 
#-c flag says to generate the object files (.o files).
#-o $@ says to put the output of the compilation in a file named on the left of : ($@ is a special macro standing for 
#what's on the left of :).
%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

#Rule named tests with dependency list containing of a single item, namely the macro OBJ.
#The rule compiles the object files ($^ is special macro standing for right side of :)
#using the compiler defined in macro CC with the compiler flags defined in macro CFLAGS
#and writes the output to a file called tests ($@ is special macro standing for left side of :)
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

debug: $(OBJ)
	$(CC) $(CFLAGS) -g -o $@ $^

clean:
	rm -f *.o
	rm -f $(NAME) debug