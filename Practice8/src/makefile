OBJDIR = ../obj
SOURCE = main.c
OBJECT = $(OBJDIR)/main.o

CFLAGS = -Wall -Werror

all:$(OBJECT)

$(OBJECT):$(SOURCE)
	gcc $(CFLAGS) -c $< -o $@

.PHONY: all