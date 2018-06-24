INCLUDE_DIR = include
SRC_DIR = src
BIN_DIR = bin
BUILD_DIR = build

vpath %.h include
vpath %.c src
vpath %.o build


INCLUDE += -I./$(INCLUDE_DIR)/

cc = gcc
target = hello
obj = hello.o show.o

${target}: $(obj)
	$(cc) $(addprefix $(BUILD_DIR)/,$(obj)) -o $(addprefix $(BIN_DIR)/,$(target))

${obj}: %.o:%.c
	$(cc) -c $(INCLUDE) $< -o $(BUILD_DIR)/$@

clean:
	rm -rf $(BIN_DIR) $(BUILD_DIR)
