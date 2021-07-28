NAME=a.out
CC=clang++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
RM=rm -f
SRCS= main.cpp \
	Animal.cpp \
	Dog.cpp \
	Cat.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp 

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