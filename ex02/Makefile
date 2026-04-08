NAME	=	fixed
CXX		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	= Fixed.cpp main.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	echo "compiling"
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
