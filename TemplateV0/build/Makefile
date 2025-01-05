################################################################################################
####                                 Template Version 0                                     ####
#### Makefile template for C/C++ projects                                                   ####
#### NOTE: Modify this template according your needs.                                       ####
#### This template stands for following project layout.                                     ####
#### Project_name: This folder contains all project folders and sources files.              ####
####             |_____build: contains main Makefile.                                       ####
####             |          |_____bin: contains project binaries.                           ####
####             |          |_____obj: contains all project object files.                   ####
####             |_____inc: contains project includes.                                      ####
####             |        |_____dinamic: Contains dinamic libraries includes.               ####
####             |        |_____static: Contains static libraries includes.                 ####
####             |_____lib: contains project precompiled libraries.                         ####
####             |        |_____dinamic: Contains dinamic (shared object) libraries.        ####
####             |        |_____static: Contains static libraries.                          ####
####             |_____src: contains project source code.                                   ####
####                      |_____main.(c/cpp): "main" source code.                           ####
####                      |_____src_code0: Folder that contains source code and headers.    ####
####                                      |_____inc: Contains source code headers.          ####
####                                      |_____src: Contains source.                       ####
################################################################################################
################################################################################################
#### Programming language:                                                                  ####
# Use following command to fill this variable from console: make LANGUAGE=C or make LANGUAGE=CXX
LANGUAGE =
ifeq ($(LANGUAGE),)
     COMPILER = gcc
else ifeq ($(LANGUAGE),C)
     COMPILER = gcc
else
     COMPILER = g++
endif
#### Project name:                                                                          ####
# Use following command to fill this variable from console: make NAME="your_project_name".
NAME =
ifeq ($(NAME),)
     PROJECT_NAME = TemplateV0
else
     PROJECT_NAME = $(NAME)
endif
#### Directories.                                                                           ####
INC_DIR   = ../inc
LIB_DIR   = ../lib
SRC_DIR   := ../src
#### Build Subdirectories                                                                   ####
BIN_DIR   = bin
OBJ_DIR   = obj
#### Includes subdirectories                                                                ####
DIN_INC_DIR = $(INC_DIR)/dinamic
PRJ_INC_DIR = $(INC_DIR)/project
STC_INC_DIR = $(INC_DIR)/static
#### Libraries subdirectories                                                               ####
DIN_LIB_DIR = $(LIB_DIR)/dinamic
STC_LIB_DIR = $(LIB_DIR)/static
#### Project Includes                                                                       ####
PRJ_INCS :=\
-I$(DIN_INC_DIR)\
-I$(PRJ_INC_DIR)\
-I$(STC_INC_DIR)
#### Sources                                                                                ####
SOURCES = $(wildcard $(SRC_DIR)/*.c)
#### Objects                                                                                ####
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SOURCES))
#### Compilation flags                                                                      ####
WARN := -Wall -Werror -Wextra -Wno-unused-variable -Wno-unused-function
CFLAGS := $(WARN)
#### Linker flags                                                                           ####
LDFLAGS := -L$(DIN_LIB_DIR)\
-L$(STC_LIB_DIR)
#### Target name                                                                            ####
TARGET = $(BIN_DIR)/$(PROJECT_NAME)

all: folders $(TARGET)

folders:
	@echo $(PROJECT_NAME) "building started!"
	@mkdir -p $(BIN_DIR) $(OBJ_DIR)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	$(COMPILER) $(CFLAGS) $(PRJ_INCS) -c $< -o $@
	@echo "Build done!"

$(TARGET):$(OBJECTS)
	@echo "Linker Started:"
	$(COMPILER) $(PRJ_INCS) $(LDFLAGS) $^ -o $@
	@echo "Linker done!"

run:
	@echo "Executing binary:"
	@echo ''
	@./$(TARGET)

clean:
	@echo $(PROJECT_NAME) "cleanning started!"
	@rm -rf $(OBJ_DIR) $(BIN_DIR)
	@echo "Clean done!"

.PHONY: all folders clean run