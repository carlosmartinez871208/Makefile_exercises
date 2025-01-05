# This practice is used to create an executable or binary file from source code.

#Project Name
NAME = mod0

#OUTPUT variable holds the target to be build
OUTPUT = bin/$(NAME)
OBJ0   = obj/mod0.o

# Flags
CFLAGS = -Wall -Werror

#SRC variable holds source code files.
SRC = main.c

# execute rules.
all: $(OUTPUT)

# This rule call compiler to build and create binary for source code "main.c"
# gcc stands for the compiler for c program.
# -o flag, compiles and links and place the output into <file>.
$(OUTPUT): $(OBJ0)
	gcc $< -o $@

$(OBJ0): $(SRC)
	gcc $(CFLAGS) -c $< -o $@

run:
	./$(OUTPUT)

# This rules is to remove executable file.
clean:
	rm $(OUTPUT) $(OBJ0)