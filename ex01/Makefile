# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/23 10:43:01 by pecavalc          #+#    #+#              #
#    Updated: 2026/06/30 11:37:37 by pecavalc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC := main.cpp
OBJ := main.o
DEP := $(SRC:.cpp=.d)

CXX := c++
CXX_FLAGS := -Wall -Wextra -Werror -MMD -MP -std=c++98

all: $(OBJ)
	$(CXX) $(CXX_FLAGS) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@

-include $(DEP)

clean:
	rm -f $(OBJ) $(DEP)

fclean: clean
	rm -f a.out

re: fclean all

.PHONY: all clean fclean re