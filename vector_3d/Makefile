BUILD_DIR ?= .build

SRC := main.c $(wildcard *.c)
OBJS := $(SRC:.c=.o)
OBJS := $(addprefix $(BUILD_DIR)/, $(OBJS))

program: $(OBJS)
	gcc -o $@ $^

$(BUILD_DIR)/%.o: %.c 
	@mkdir -p $(dir $@)
	gcc -c $^ -o $@

clean:
	@rm -rf $(BUILD_DIR) program

.PHONY: clean
