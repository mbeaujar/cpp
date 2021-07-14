NAME=a.out
CC=clang++
CPPFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRCS= main.cpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp
	$(CC) $(CPPFLAGS) $< -c -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all