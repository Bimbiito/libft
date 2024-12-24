CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard /C:\Users\Fatima\Documents\SOLO CODIGO\42Madrid\libft\repositorio github\libft-pruebas/*.c) 
OBJS = $(SRCS:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) # Línea de compilación correcta

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re
