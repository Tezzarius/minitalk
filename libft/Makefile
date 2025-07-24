NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEADER = libft.h

SRC = $(SRC_CHAR) $(SRC_INT) $(SRC_LIST) $(SRC_MEM) $(SRC_PRINT) $(SRC_STRING) $(SRC_UTILS)

SRC_CHAR =		./char/ft_isalnum.c\
				./char/ft_isalpha.c\
				./char/ft_isascii.c\
				./char/ft_isdigit.c\
				./char/ft_isprint.c\
				./char/ft_isspace.c\
				./char/ft_tolower.c\
				./char/ft_toupper.c
SRC_INT =		./int/ft_atoi.c\
				./int/ft_itoa.c
SRC_LIST =		./list/ft_dlladd_beginning.c\
				./list/ft_dlladd_end.c\
				./list/ft_dlldeallocate.c\
				./list/ft_dllfind_node_rec.c\
				./list/ft_dllfind_node.c\
				./list/ft_dllinit.c\
				./list/ft_dllinsert_after.c\
				./list/ft_dlloutput_backward.c\
				./list/ft_dlloutput_forward.c\
				./list/ft_dllremove_node.c\
				./list/ft_dllreverse.c\
				./list/ft_lstadd_back.c\
				./list/ft_lstadd_front.c\
				./list/ft_lstclear.c\
				./list/ft_lstdelone.c\
				./list/ft_lstiter.c\
				./list/ft_lstlast.c\
				./list/ft_lstmap.c\
				./list/ft_lstnew.c\
				./list/ft_lstsize.c
SRC_MEM =		./mem/ft_bzero.c\
				./mem/ft_calloc.c\
				./mem/ft_free.c\
				./mem/ft_memchr.c\
				./mem/ft_memcmp.c\
				./mem/ft_memcpy.c\
				./mem/ft_memmove.c\
				./mem/ft_memset.c
SRC_PRINT =		./print/ft_printf.c\
				./print/ft_putchar_fd.c\
				./print/ft_putendl_fd.c\
				./print/ft_putnbr_fd.c\
				./print/ft_putstr_fd.c
SRC_STRING =	./string/ft_split.c\
				./string/ft_strlcat.c\
				./string/ft_strchr.c\
				./string/ft_strlcpy.c\
				./string/ft_strdup.c\
				./string/ft_striteri.c\
				./string/ft_strjoin.c\
				./string/ft_strlen.c\
				./string/ft_strmapi.c\
				./string/ft_strncmp.c\
				./string/ft_strnstr.c\
				./string/ft_strrchr.c\
				./string/ft_strtrim.c\
				./string/ft_substr.c
SRC_UTILS =		./utils/ft_printf_utils.c\
				./utils/get_next_line.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs -o $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ)
	ar rcs -o $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ) $

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
