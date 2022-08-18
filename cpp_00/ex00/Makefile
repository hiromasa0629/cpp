# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/13 12:20:42 by hyap              #+#    #+#              #
#    Updated: 2022/08/14 12:49:34 by hyap             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
SRCS		= $(wildcard *.cpp)
OBJS 		= $(SRCS:.cpp=.o)
DEPENDS		= $(OBJS:.o=.d)
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98 -pedantic -MMD
LDFLAGS		= -lstdc++

all: $(NAME)

$(NAME): $(OBJS)

-include $(DEPENDS)

clean:
	$(RM) $(OBJS) $(DEPENDS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all
