##
## ETNA PROJECT, 02/11/2018 by hauteb_m
## Sokoban
## File description:
##      Makefile for Sokoban project
##

CC      = gcc
CFLAGS  = -I. -g -Wall -Wextra -Werror

RM      = rm -f
TARGET  = sokoban

SRC 	= 	src/main.c \
			src/sokoban.c \
			src/obstacles.c \
			src/utils.c

LIBS	= 	lib/lib_sokoban.a

OBJ = $(SRC:.c=.o)

.PHONY: all $(TARGET) clean fclean re

all : $(TARGET)

$(TARGET): $(OBJ) 
	@echo " LD	$@"
	@$(CC) $(OBJ) $(LIBS) -o $@

src/%.o : src/%.c
	@echo " CC	$<"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(TARGET)

re : fclean all
