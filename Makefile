NAME="hell_yeah"

$(NAME):
	make -C C

.phony: all
all: $(NAME)

.phony: clean
clean:
	make clean -C C 

.phony: fclean
fclean:
	make fclean -C C

.phony: re
re:
	make re -C C

