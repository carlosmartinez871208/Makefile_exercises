# Project name
PROJECT = Practice5

# Local directories.
BINDIR = bin
INCDIR = inc
SRCDIR = src
OBJDIR = obj

TARGET = $(BINDIR)/$(PROJECT)

# Imported shared object (dynamic library) files.
SOPATH = ../Practice2/lib
SOIPATH = ../Practice2/inc

#imported static libraries files.
SLPATH = ../Practice4/lib
SLIPATH = ../Practice4/inc

# Compilation flags
WFLAGS = -Wall -Werror
IFLAGS =\
-I$(INCDIR)\
-I$(SOIPATH)\
-I$(SLIPATH)
CFLAGS = $(WFLAGS) $(IFLAGS)

# Linker flags
LIBPATH =\
-L$(SOPATH)\
-L$(SLPATH)
LDFLAGS = $(LIBPATH) -lexample -lslexample 

# Object files
OBJS = $(OBJDIR)/main.o

# Source code files
SRCS = $(SRCDIR)/main.c

build: $(TARGET)

$(TARGET): $(OBJS)
	gcc $< -o $@ $(LDFLAGS)

$(OBJS): $(SRCS)
	gcc $(CFLAGS) -c $< -o $@

run:
	./$(TARGET)

clean:
	rm $(TARGET) $(OBJS)
