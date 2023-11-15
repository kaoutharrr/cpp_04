# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 17:35:44 by kkouaz            #+#    #+#              #
#    Updated: 2023/11/15 03:37:30 by kkouaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#-fsanitize=address -g3 
NAME = Materias
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror  -std=c++98 
RM = rm -rf 
SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all