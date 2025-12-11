NAME = ScavTrap

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++11

SRC_DIR = src/
OBJ_DIR = obj/

INCLUDES = -I ./inc
HEADERS = inc/ClapTrap.hpp inc/ScavTrap.hpp

SRCS = src/main.cpp src/ClapTrap.cpp src/ScavTrap.cpp
OBJS = $(patsubst $(SRC_DIR)%.cpp,$(OBJ_DIR)%.o,$(SRCS))
.SECONDARY: $(OBJS)

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
		$(CXX) $(CXXFLAGS) $(OBJS) $(INCLUDES) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp $(HEADERS)
			@mkdir -p $(OBJ_DIR)
			$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@
clean:
	rm -rf $(OBJ_DIR)
fclean: clean
	rm -f $(NAME)
re: fclean all 

.PHONY: fclean, all, re, clean

