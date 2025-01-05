# Project name.
NAME = Example3

# Command to clean files.
REMOVE = rm -rf

# How to create conditions
#     ifeq($(variable_name),any_value)
#     else
#     endif

# CC:       Program for compiling C programs; default cc.
# CXX:      Program for compiling C++ programs; default g++.
# CFLAGS:   Extra flags to give to the C compiler.
# CPPFLAGS: Extra flags to give to the C preprocessor.
# LDFLAGS:  Extra flags to give to the linker.

# Command to call compiler.
CC      = gcc

# Command ot used some flags that specifies to the compiler different activities when compiling ".c" files.
CFLAGS  = -Wall -Wextra -Wpedantic -O0

# Holds source (src) directory.
SRCDIR = ../src
# Holds includes (inc) directory.
INCDIR = ../src/inc

# Holds folder which includes all object (obj) from the project.
OBJDIR = obj
# Holds folder which will include the binaries (bin) and executable files.
BINDIR = bin

# Holds executable name and location.
TARGET = $(BINDIR)/$(NAME)

# This variable (SRCS) holds all source files from the project.
SRCS = $(SRCDIR)/main.c\
       $(INCDIR)/lib_example.c

# This variable (OBJS) holds all object files that will be linked.
OBJS = main.o\
       lib_example.o

# build rule: links all object files.
build: $(OBJS)
	@echo "Linker started"
	$(CC) $(OBJS) -o $(TARGET)
	@echo "Linker done"
	@echo "Build process done"

# main.o rule: compile main.c file.
$(OBJS): 
	@echo "Build process started"
	$(CC) -I$(INCDIR) $(CFLAGS) $(SRCS) -c

# run rule: execute program.
run:
	./$(TARGET)

# clean rule: delete all objects, executables and dependencies files from compilation.
clean:
	@echo "Clean project started"
	$(REMOVE) *.o $(TARGET)
	@echo "Clean project done"