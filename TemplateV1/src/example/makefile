SRC_DIR = src
OBJ_DIR = ../../build/obj

SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SOURCES))

INCLUDES =\
-Iinc/\

all:
	$(COMPILER) $(CFLAGS) $(INCLUDES) -c $(SOURCES) -o $(OBJECTS)

.PHONY: all