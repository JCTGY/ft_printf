NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

INC = -Iincludes/

SRC_DIR = src/
LIB_DIR = libft/

PF_SRC = printf.c \
	 	 pr_verify.c \
		 pr_char.c \
		 pr_output.c \
		 pr_integer.c \

LIBFT_SRC = ft_bzero.c \
			ft_isdigit.c \
			ft_strsub.c \
			ft_atoi.c \
			ft_strchr.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_puterror.c \
			ft_isspace.c \
			ft_strnew.c \
			ft_strlen.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_strcpy.c \
			ft_itoa.c \
			ft_strdel.c \
			ft_putnstr.c \
			ft_putnchar.c \
			ft_putuintmax.c \
			ft_count_digit.c \
			ft_itoa_base.c \

SRC = $(addprefix $(SRC_DIR), $(PF_SRC))
LIBFT = $(addprefix $(LIB_DIR), $(LIBFT_SRC))

OBJ = $(PF_SRC:.c=.o) $(LIBFT_SRC:.c=.o)

.PHONY = all clean fclean re

all: $(NAME)

$(NAME):
	@gcc -c $(CFLAGS) $(SRC) $(LIBFT) $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
clean:
	@/bin/rm -f $(OBJ)
	@echo "Remove OBJ file"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "remove all"

re: fclean all
