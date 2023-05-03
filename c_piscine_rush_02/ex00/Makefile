NAME = rush02
OBJS = array.c open.c main.c numbers.dict
CFLAGS = -Wall -Wextra -Werror

$(NAME) : $(OBJS)
cc $(CFLAGS) $(OBJS) -o $(NAME)

%.c : %.c
	gcc $(CFLAGS) -c $< -o $@

fclean : clean
	clean rm -f *.o
clean : 
	rm *.o $(NAME)
.PHONY : fclean clean
