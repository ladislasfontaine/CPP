SRCS	= Account.class.cpp tests.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= clang++

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

NAME	= bank

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp
			$(CC) $(CFLAGS) -o $@ -c $<

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re