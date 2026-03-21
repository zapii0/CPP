.PHONY: all clean fclean re

CXX			= c++
NAME		= Harl
OBJS		= ${SRC:.cpp=.o}
SRC			= main.cpp Harl.cpp
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
