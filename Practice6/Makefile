PROJECT = Practice6

BINDIR = bin
SRCDIR = src

SRCS = $(SRCDIR)/main.c

TARGET = $(BINDIR)/$(PROJECT)

# Define undefined macro in source code
DEFLAG = -DMY_PRINT=\"$(PROJECT)\"

CFLAGS = -Wall -Werror

all:$(TARGET)

$(TARGET):$(SRCS)
	gcc $(CFLAGS) $(DEFLAG) $< -o $@

run:
	./$(TARGET)

clean:
	rm $(TARGET)