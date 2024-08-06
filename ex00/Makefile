NAME = zombie

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRCS = 	main.cpp \
		newZombie.cpp \
		Zombie.cpp \
		randomChump.cpp

HEADER = -IZombie.h

OBJS = $(SRCS:.cpp=.o)


%.o: %.cpp 
	$(CC) $(CFLAGS) $(HEADER) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(HEADER) $^ -o $(NAME)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re