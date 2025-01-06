CC := cc
SRCS := rotate_a.c rotate_b.c rrotate_a.c rrotate_b.c swap_a.c swap_b.c push_a.c push_b.c \
		dup_check.c validate_input.c print_err.c parse.c issorted.c ft_strcmp.c ft_split.c \
		ft_lstadd_back.c ft_lstclear.c ft_lstlast.c ft_lstnew.c ft_putchar_fd.c ft_putstr_fd.c \
		free_str_arr.c ft_atoi.c ft_intcmp.c ft_isdigit.c ft_isint.c
SRCSM := curr_ind.c ft_lstsize.c ft_strlen.c main.c move_a_to_top.c \
		move_b_to_top.c send_to_a.c send_to_b.c send_to_stack_a.c set_ind.c \
		set_target_b.c sort_3.c sort_a.c 
SRCSB := get_next_line_bonus.c get_next_line_utils_bonus.c main_bonus.c
BUILD_DIR := build/
OBJS := ${addprefix $(BUILD_DIR),$(SRCS:.c=.o)}
OBJSM := ${addprefix $(BUILD_DIR),$(SRCSM:.c=.o)}
OBJSB := ${addprefix $(BUILD_DIR),$(SRCSB:.c=.o)}
CFLAGS := -Wall -Wextra -Werror
NAME := push_swap
CHECKER := checker

all: $(BUILD_DIR) $(NAME)

$(BUILD_DIR):
	@mkdir $(BUILD_DIR)
 
$(NAME): $(OBJS) $(OBJSM)
	$(CC) $(CFLAGS) -o $@ $^

$(BUILD_DIR)%_bonus.o: %_bonus.c push_swap.h get_next_line_bonus.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(BUILD_DIR)%.o: %.c push_swap.h
	$(CC) -c $(CFLAGS) -o $@ $<

bonus: $(BUILD_DIR) $(CHECKER)

$(CHECKER): $(OBJS) $(OBJSB)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	@rm -rf $(BUILD_DIR)

fclean: clean
	@rm -f $(NAME) $(CHECKER)

re: fclean all

rebonus: fclean bonus

.PHONY : all clean fclean re bonus rebonus
