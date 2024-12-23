NAME=c

CC = gcc
C_FLAGS = -Wall -Wextra -Werror

COLL_SRC=Colleen/Colleen.c
GRACE_SRC=Grace/Grace.c
SULLY_SRC=Sully/Sully.c

COLL_OBJ=$(COLL_SRC:Colleen/%.c=Colleen/%.o)
GRACE_OBJ=$(GRACE_SRC:Grace/%.c=Grace/%.o)
SULLY_OBJ=$(SULLY_SRC:Sully/%.c=Sully/%.o)


COLL_BIN=Colleen/Colleen
GRACE_BIN=Grace/Grace
SULLY_BIN=Sully/Sully



all: $(NAME)

$(NAME): $(COLL_BIN) $(GRACE_BIN) $(SULLY_BIN)


%.o: %.c
	@$(CC) $(C_FLAGS) -c -o $@ $<

colleen: $(COLL_BIN)

$(COLL_BIN): $(COLL_OBJ)
	@echo Compiling Colleen
	@$(CC) $(C_FLAGS) -o $@ $^


grace: $(GRACE_BIN)

$(GRACE_BIN): $(GRACE_OBJ) 
	@echo Compiling Grace
	@$(CC) $(C_FLAGS) -o $@ $^


sully: $(SULLY_BIN)

$(SULLY_BIN): $(SULLY_OBJ)
	@echo Compiling Sully
	@$(CC) $(C_FLAGS) -o $@ $^


clean:
	@rm -f $(COLL_OBJ) $(GRACE_OBJ) $(SULLY_OBJ)

fclean: clean
	@rm -f $(COLL_BIN) $(GRACE_BIN) Grace/grace_kid.c $(SULLY_BIN) Sully/Sully_{4,3,2,1,0}{,.c}

re: fclean all

.PHONY: all clean fclean re colleen grace sully
