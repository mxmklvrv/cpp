NAME = megaphone
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11

OBJS_DIR = obj
SRCS = megaphone.cpp
OBJS = $(patsubst %.cpp, $(OBJS_DIR)/%.o, $(SRCS))
.SECONDARY: $(OBJS)


all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all, fclean, clean, re