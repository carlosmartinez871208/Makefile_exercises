# Project name.
NAME = Example4

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

# Holds source (src) directory.
SRCDIR  = ../src

# Holds includes (inc) directory.
INCDIR = ../src/inc

# Holds folder which includes all object (obj) from the project.
OBJDIR = obj
# Holds folder which will include the binaries (bin) and executable files.
BINDIR = bin

# Holds executable name and location.
TARGET = $(BINDIR)/$(NAME)

INCS = -I$(INCDIR)

# Command ot used some flags that specifies to the compiler different activities when compiling ".c" files.
CFLAGS  = -Wall -Wextra -Wpedantic -O0 $(INCS)

# Next wildcard: looks for all ".c" files and concatenate them into SRCS
#SRCS = $(wildcard *.c)

# Next patsubst (pattern substitution), converts ".c" files into ".o" from SRCS variable.
#OBJS = $(patsubst %.c, %.o, $(SRCS)) 
OBJS =\
$(OBJDIR)/main.o\
$(OBJDIR)/lib_example.o

# This rule calls other rule  used by the projects.
all:$(TARGET)

$(TARGET): $(OBJS)
	$(CC) $^ -o $@

# build rule: links all object files.

#PATTERNS
# $@: the filename of the target.
# $<: the name of the first dependency.
# $^: the name of all prerrequisites.
# Next rule converts every ".c" file into a ".o" file. 
$(OBJS):
	$(CC) $(CFLAGS) -c $(SRCDIR)/main.c -o $(OBJDIR)/main.o
	$(CC) $(CFLAGS) -c $(INCDIR)/lib_example.c -o $(OBJDIR)/lib_example.o

# main.o rule: compile main.c file.
#$(OBJS): 
#	@echo "Build process started"
#	$(CC) -I$(INCDIR) $(CFLAGS) $(SRCS) -c

# run rule: execute program.
run:
	./$(TARGET)

# clean rule: delete all objects, executables and dependencies files from compilation.
clean:
	@$(REMOVE) $(OBJDIR)/*.o $(TARGET)
	@echo "Clean project done"

# .PHONY rules. ".PHONY" means that a rule is not associated to a file.
.PHONY: all run clean