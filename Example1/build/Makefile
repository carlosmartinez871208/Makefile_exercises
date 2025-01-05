NAME = Example1

TARGET = $(NAME)

REMOVE = rm 

CC = gcc

SRCDIR = ../src

build:
	@echo "Compiling project: "$(TARGET) 
	$(CC) $(SRCDIR)/main.c -o $(TARGET) 

execute:
	./$(TARGET)

clean:
	$(REMOVE) $(TARGET)