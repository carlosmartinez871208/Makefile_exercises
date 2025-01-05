NAME = Example2

REMOVE = rm -rf

CC = gcc

SRCDIR = ../src
INCDIR = ../src/inc

OBJDIR = obj
BINDIR = bin

TARGET = $(BINDIR)/$(NAME)

OBJS = \
main.o\
lib_example.o


build: $(OBJS)
	@echo "Linking project: "$(NAME) 
	$(CC) $(OBJS) -o $(TARGET)

main.o:
	$(CC) -I$(INCDIR) $(SRCDIR)/main.c -c

lib_example.o:
	$(CC) $(INCDIR)/lib_example.c -c

-include $(OBJDIR)/*.d

execute:
	./$(TARGET)

clean:
	$(REMOVE) *.o $(TARGET)