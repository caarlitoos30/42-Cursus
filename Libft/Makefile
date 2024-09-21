NAME		= libft.a
SRCS		= ft_memset.c \
			  ft_bzero.c \
			  ft_memcpy.c \
			  ft_memchr.c \
			  ft_strlen.c \
			  ft_strlcpy.c \
			  ft_strlcat.c \
			  ft_strncmp.c \
			  ft_strchr.c \
			  ft_isalnum.c \
			  ft_isalpha.c \
			  ft_isascii.c \
			  ft_isdigit.c \
			  ft_isprint.c \
			  ft_tolower.c \
			  ft_toupper.c \


FLAGS		= -Wall -Werror -Wextra

OBJS		= $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I ./
	ar rc $(NAME) $(OBJS)




clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all
