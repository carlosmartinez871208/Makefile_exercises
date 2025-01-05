# Project name
NAME = mod2

# Binary directory
BINDIR = bin
INCDIR = inc
LIBDIR = lib
OBJDIR = obj
SRCDIR = src

#Dynamic library name
DLNAME = example

# Target name
TARGET = $(BINDIR)/$(NAME)

# Source code for dynamic library
DLSC = $(SRCDIR)/so_example.c

# Object file for dynamic library
DLOF = $(OBJDIR)/so_example.o

# Dynamic library list
LIBS = $(LIBDIR)/lib$(DLNAME).so

# Source code
SRCS = $(SRCDIR)/main.c

# Objects list
OBJS = $(OBJDIR)/main.o

# Includes list
INCS = -I$(INCDIR)/

# Flags for c language
CFLAGS = -fPIC -Wall -Werror $(INCS)

# Creates an executable.
all:
	gcc $(SRCS) $(LIBS) -o $(TARGET) -L$(LIBDIR) -l$(DLNAME)

install:
	cp $(SRCDIR)/*.h $(INCDIR)/

# Creates a dynamic library or shared object
sol: $(LIBS)

$(LIBS): $(DLOF)
	gcc -shared $< -o $@

$(DLOF): $(DLSC)
	gcc $(CFLAGS) -c $< -o $@ 

# Run Program.
run:
	./$(BINDIR)/mod2

# Clean all generated files
clean:
	rm $(TARGET) $(INCDIR)/*.h $(LIBS) $(OBJDIR)/*.o



