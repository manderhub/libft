CC=cc
NAME=libft.a
CFLAGS=-Wall -Werror -Wextra
SRC=ft_bzero.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlcat.c ft_strlen.c \
	ft_strncmp.c ft_tolower.c ft_toupper.c ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_memcpy.c ft_memmove.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ=${SRC:.c=.o}
BONUS_SRC=ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUS_OBJ=${BONUS_SRC:.c=.o}

#by default the first defined rule is executed when make is called
all: $(NAME)

#creates the library archive
#ar:	command to creates a library archive
#-r:	replace or add specified files to archive; if the archive does not yet exist, a new archive file is created
#-c:	archive is created silently without message being written to stderr
#-s:	write an object/file index into the archive, or update an existing one.
$(NAME): $(OBJ)
	ar -r -c -s $(NAME) $(OBJ)

#creates the library archive or adds the bonus part to the library archive
bonus: $(NAME) $(BONUS_OBJ)
	ar -r -c -s $(NAME) $(BONUS_OBJ)

#creates the object files from .c files using compiler and flags defined in CC and CFLAGS variables/macros
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

#creates the object files for the bonus part only
$(BONUS_OBJ): $(BONUS_SRC)
	$(CC) $(CFLAGS) -c $(BONUS_SRC)

#removes only object files, but not the library archive
clean:
	rm -f $(OBJ) $(BONUS_OBJ)

#removes object files and the library archive
fclean: clean
	rm -f $(NAME)

#delete object and archive files and recompile
re: fclean
	$(MAKE) all