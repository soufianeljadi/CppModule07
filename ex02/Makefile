CXX = c++
SRC = main.cpp 
OBJ = $(SRC:.cpp=.o)
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Array

all: $(NAME)

$(NAME): $(OBJ) Array.hpp
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean  

