NAME=phonebook
CFLAGS= -Wall -Wextra -Werror -std=c++98
CC=clang++
RM=rm -f

SRCS = main.cpp \
	Contact.cpp \
	add.cpp \
	search.cpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp
	@$(CC) $(CFLAGS) $< -c -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) $(NAME)

re : fclean all
