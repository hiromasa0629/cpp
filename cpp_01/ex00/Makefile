# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/14 12:49:23 by hyap              #+#    #+#              #
#    Updated: 2023/01/16 20:25:59 by hyap             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= main
SRCS		= $(wildcard *.cpp)
OBJS 		= $(SRCS:.cpp=.o)
DEPENDS		= $(OBJS:.o=.d)
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98 -pedantic -MMD -fno-elide-constructors
LDFLAGS		= -lstdc++

all: $(NAME)

$(NAME): $(OBJS)

-include $(DEPENDS)

clean:
	$(RM) $(OBJS) $(DEPENDS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all
