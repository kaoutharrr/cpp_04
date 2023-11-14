# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 13:57:27 by kkouaz            #+#    #+#              #
#    Updated: 2023/11/14 08:30:21 by kkouaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal02
CXX = c++
CPPFLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAG) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean 
	$(RM) $(NAME)

re : fclean all