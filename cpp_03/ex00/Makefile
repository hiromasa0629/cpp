# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/14 12:49:23 by hyap              #+#    #+#              #
#    Updated: 2022/08/20 21:49:18 by hyap             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= main
SRCS		= $(wildcard *.cpp)
OBJS 		= $(SRCS:.cpp=.o)
DEPENDS		= $(OBJS:.o=.d)
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98 -pedantic -MMD
LDFLAGS		= -lstdc++

all: $(NAME)

$(NAME): $(OBJS)

-include $(DEPENDS)

test:
	@./$(NAME) 1,1 5,5 3,3 2,2

clean:
	$(RM) $(OBJS) $(DEPENDS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all
