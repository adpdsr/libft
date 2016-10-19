# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adu-pelo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/01 18:10:51 by adu-pelo          #+#    #+#              #
#    Updated: 2015/12/11 12:01:43 by adu-pelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPATH = sources
HPATH = includes
OPATH = .objects

CC = /usr/bin/gcc
MKDIR = /bin/mkdir
RM = /bin/rm
CFLAGS = -Wall -Wextra -Werror -I $(HPATH)

NAME = libft.a
AR = /usr/bin/ar
RANLIB = /usr/bin/ranlib

HEADER = libft.h

SRC  = 	ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_isspace.c \
		ft_itoa.c \
		ft_lstadd.c \
		ft_lstdel.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_memalloc.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memdel.c \
		ft_memdup.c \
		ft_memmove.c \
		ft_memset.c \
		ft_nbrlen.c \
		ft_putchar.c \
		ft_putchar_fd.c \
		ft_putendl.c \
		ft_putendl_fd.c \
		ft_putnbr.c \
		ft_putnbr_fd.c \
		ft_putstr.c \
		ft_putstr_fd.c \
		ft_sort_int_tab.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strclr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdel.c \
		ft_strdup.c \
		ft_strequ.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strlowcase.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strncat.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strnequ.c \
		ft_strnew.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strrev.c \
		ft_strsplit.c \
		ft_strstr.c \
		ft_strsub.c \
		ft_strtrim.c \
		ft_strupcase.c \
		ft_swap.c \
		ft_tolower.c \
		ft_toupper.c

HFILES = $(patsubst %,$(HPATH)/%, $(HEADER))
CFILES = $(patsubst %,$(CPATH)/%, $(SRC))
OFILES = $(patsubst %.c,$(OPATH)/%.o, $(SRC))

all: $(OPATH) $(NAME)

$(NAME): $(OFILES)
	@echo "Creating $(NAME)"
	@$(AR) rc $(NAME) $^
	@$(RANLIB) $(NAME)

$(OPATH)/%.o: $(CPATH)/%.c $(HFILES)
	@echo "Creating object : $@"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Deleting objects"
	@$(RM) -rf $(OPATH)

fclean: clean
	@echo "Deleting $(NAME)"
	@$(RM) -f $(NAME)

re: fclean all

$(OPATH):
	@$(MKDIR) $(OPATH)

.PHONY : all clean fclean re
