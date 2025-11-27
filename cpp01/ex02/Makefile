NAME = hiThisIsBrain
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11

OBJS_DIR = obj
SRCS = main.cpp
OBJS = $(patsubst %.cpp, $(OBJS_DIR)/%.o, $(SRCS))
.SECONDARY: $(OBJS)


all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, fclean, clean, re