C = gcc
MLX = -L mlx_lib -lmlx 
DEP = -framework OpenGL -framework AppKit
FLAGS = -Wall -Wextra -Werror
NAME = cub3d
D = -g
SRC = ./setting/*.c ./game/*.c ./player/*.c ./*.c

all: $(NAME)

$(NAME):
	$(C) $(FLAGS) -o $(NAME) $(SRC) $(MLX) $(DEP)
debug:
	$(C) $(FLAGS) -o $(NAME) $(SRC) $(MLX) $(DEP) $(D)
	#lldb $(NAME)
run:
	./$(NAME)

clean:
	rm -f $(NAME)
re: clean all