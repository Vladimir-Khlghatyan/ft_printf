# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 13:12:13 by vkhlghat          #+#    #+#              #
#    Updated: 2022/03/29 14:41:36 by vkhlghat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		ft_strlen.c \
			ft_putchar_c.c \
			ft_putstr_s.c \
			ft_pnb_p.c \
			ft_pnb_ux.c \
			ft_pn_di.c \
			ft_printf.c

SRCS_B =	\

OBJS		= ${SRCS:.c=.o}

OBJS_B		= ${SRCS_B:.c=.o}
		
CC			= cc
RM			= rm -f
AR			= ar rcs
CFLAGS		= -Wall -Wextra -Werror

NAME		= libftprintf.a

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:			
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:		${OBJS} ${OBJS_B}
			${AR} ${NAME} ${OBJS} ${OBJS_B}

.PHONY:		all clean fclean re bonus
