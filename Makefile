SRCS =  ft_atoi.c ft_strlen.c\
		ft_bzero.c ft_memccpy.c	ft_strmapi.c\
		ft_calloc.c ft_memchr.c	ft_strncmp.c\
		ft_isalnum.c ft_memcmp.c ft_strnstr.c\
		ft_isalpha.c ft_memcpy.c ft_strrchr.c\
		ft_isascii.c ft_memmove.c ft_strtrim.c\
		ft_isdigit.c ft_memset.c ft_substr.c\
		ft_isprint.c ft_putchar_fd.c ft_tolower.c\
		ft_itoa.c ft_putendl_fd.c ft_toupper.c\
		ft_putnbr_fd.c ft_putstr_fd.c\
		ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c\
		ft_strlcpy.c ft_strlcat.c 

BONUS = ft_lstadd_back.c ft_lstdelone.c ft_lstmap.c\
		ft_lstadd_front.c ft_lstiter.c ft_lstnew.c\
		ft_lstclear.c ft_lstlast.c ft_lstsize.c
		
OBJ = $(SRCS:.c=.o)
OBJ_B = $(BONUS:.c=.o)
REM = rm -rf
NAME = libft.a


$(NAME): $(OBJ) 
	ar rcs $(NAME) $?

all: $(NAME)
	
.c.o:
	gcc -Wall -Wextra -Werror -c $< -o $@

clean:
	$(REM) $(OBJ)
	$(REM) $(OBJ_B)

bonus: $(OBJ_B)
	ar rcs $(NAME) $?

fclean:	clean
	$(REM) $(NAME)

re:	fclean all

.PHONY: all clean fclean
