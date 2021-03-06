INCLUDE_DIR = include
SRC_DIR = src
BIN_DIR = bin
BUILD_DIR = build

# Search for .c files in "src" directory; .h files in "include" directory
# The pattern matching character '%' matches filename without the extension
vpath %.h include
vpath %.c src
vpath %.o build


INCLUDE += -I./$(INCLUDE_DIR)/

cc = gcc
target = hello
obj = hello.o show.o show_bytes.o

${target}: $(obj)
	$(cc) $(addprefix $(BUILD_DIR)/,$(obj)) -o $(addprefix $(BIN_DIR)/,$(target))

${obj}: %.o:%.c
	$(cc) -c $(INCLUDE) $< -o $(BUILD_DIR)/$@

clean:
	rm -rf $(BIN_DIR) $(BUILD_DIR)
