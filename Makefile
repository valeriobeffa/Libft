# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/18 15:16:37 by vbeffa            #+#    #+#              #
#    Updated: 2021/01/21 10:35:51 by vbeffa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= ft_toupper.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strmapi.c ft_putendl_fd.c

BONUS		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS		= ${SRCS:.c=.o}

BONUS_OBJS	= ${BONUS:.c=.o}

INCL		= includes/libft.h

CFLAGS		= -Wall -Wextra -Werror -c

RM 			= rm -f

CC			= gcc

AR 			= ar

ARFLAGS		= -rc

%.o: %.c
			${CC} ${CFLAGS} $<

all:		${NAME}

${NAME}:	${OBJS}
			${AR} ${ARFLAGS} ${NAME} ${OBJS}
			ranlib ${NAME}

bonus:		${BONUS_OBJS}
			${AR} ${ARFLAGS} ${NAME} ${BONUS_OBJS}
			ranlib ${NAME}
clean:
			${RM} ${OBJS} ${BONUS_OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean all re 

