## How to write function definition and how to call it.
##### Write function definition.
## define makeallmodules
## Instructions to execute
## endef
##### Call function.
## $(call makeallmodules, PARAM1, PARAM2)
PROJECT = Practice8

SRCDIR := src
OBJDIR := obj
BINDIR := bin

TARGET = $(BINDIR)/$(PROJECT)

OBJECTS = $(OBJDIR)

CFLAGS = -Wall -Werror
##define makeallmodules
##    for dir in $(SRCDIR)/*; do make -C $$dir $(1); done
##endef
##OR
##$(SRCDIR)/* : use this command to run all directories.
define makeallmodules
    for dir in $(SRCDIR)/;\
        do\
        make -C $$dir $(1);\
        done
endef

##Call function
all:
	$(call makeallmodules,all)
	@echo "Linking..."
	gcc $(CFLAGS) $(OBJECTS)/*.o -o $(TARGET)

run:
	./$(TARGET)

clean:
	rm -rf $(TARGET) $(OBJECTS)/*.o

.PHONY: all clean run