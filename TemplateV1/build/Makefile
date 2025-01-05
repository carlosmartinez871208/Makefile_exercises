################################################################################################
####                                 Template Version 1                                     ####
#### Makefile template for C/C++ projects                                                   ####
#### NOTE: Modify this template according your needs.                                       ####
#### This template stands for following project layout.                                     ####
#### Project_name: This folder contains all project folders and sources files.              ####
####             |_____build: contains main Makefile.                                       ####
####             |          |_____bin: contains project binaries.                           ####
####             |          |_____obj: contains all project object files.                   ####
####             |          |_____report: contains a file that contains all build steps     ####
####             |_____inc: contains project includes.                                      ####
####             |        |_____dinamic: Contains dinamic libraries includes.               ####
####             |        |_____static: Contains static libraries includes.                 ####
####             |_____lib: contains project precompiled libraries.                         ####
####             |        |_____dinamic: Contains dinamic (shared object) libraries.        ####
####             |        |_____static: Contains static libraries.                          ####
####             |_____src: contains project source code.                                   ####
####                      |_____main: folder that holds main.c files and its includes.      ####
####                      |          |_____inc: Contains source code headers.               ####
####                      |          |_____src: Contains source code.                       ####
####                      |                    |_____main.(c/cpp): "main" source code.      ####
####                      |_____src_code0: Folder that contains source code and headers.    ####
####                                      |_____inc: Contains source code headers.          ####
####                                      |_____src: Contains source code.                  ####
################################################################################################
################################################################################################
#### Project name:                                                                          ####
# Use following command to fill this variable from console: 
# make NAME="your_project_name".
NAME =
ifeq ($(NAME),)
     PROJECT = $(notdir $(abspath ..))# To get main project folder name.
else
     PROJECT = $(NAME)
endif
#### Build Subdirectories                                                                   ####
BIN_PATH   = bin
OBJ_PATH   = obj
LOG_PATH   = report
#### Target name                                                                            ####
TARGET = $(BIN_PATH)/$(PROJECT)
#### Call all source code modules                                                           ####
# Source directory
SRC_PATH = ../src
# Call makefiles within src/
define makeallmodules
    for dir in $(SRC_PATH)/*;\
        do\
        make -C $$dir $(1);\
        done
endef

#### Build log variables                                                                    ####
LOG_FILE = $(LOG_PATH)/build_report.log
LOG_CMD  = 2>&1 | tee -a $(LOG_FILE)
#### Includes directories:                                                                  ####
INC_PATH  = ../inc
# Generic project includes.
GEN_INC :=\
-L$(INC_PATH)/dinamic\
-L$(INC_PATH)/project\
-L$(INC_PATH)/static
################################################################################################
#### NOTE PRJ_INC variables includes all project includes for linking purpose               ####
#Add below your project include paths
PRJ_INC :=\
-L$(SRC_PATH)/example/inc\
-L$(SRC_DIR)/main/inc
################################################################################################
INC_FILES =\
$(GEN_INC)\
$(PRJ_INC)
#### Libraries directories:                                                                 ####
LIB_PATH   =../lib
LIBA_PATH  =-L$(LIB_PATH)/static
LIBSO_PATH =-L$(LIB_PATH)/dinamic
#Add below your static libraries to be linked.
STATIC_LIB  =-L
DINAMIC_LIB =-L
#### Programming language:                                                                  ####
# Use following command to fill this variable from console: 
#  make LANG=C: calls C compiler (it is used by default if empty).
#  make LANG=CXX: calls used C++ compiler.
#  make LANG=EMB: call ARM C compiler.
WARNS = -Wall -Werror -Wpedantic -Wno-unused-variable -Wno-unused-function -Werror-implicit-function-declaration
LANG =
ifeq ($(LANG),CXX)
     COMPILER = g++
     CFLAGS   = $(WARNS) -o0 -std=c++20
     LDFLAGS = $(INC_FILES) $(LIBA_PATH) $(LIBSO_PATH) $(STATIC_LIB) $(DINAMIC_LIB) Wl,-Map=$(BIN_PATH)/$(PROJECT).map
else ifeq ($(LANG),EMB)
     COMPILER = arm-none-eabi-gcc
     CFLAGS   = $(WARNS) -o0 -std=c11 -mcpu=cortex-m4
	 LINKER_SCRIP=\
     LDFLAGS = $(INC_FILES) $(LIBA_PATH) $(LIBSO_PATH) $(STATIC_LIB) $(DINAMIC_LIB) $(LINKER_SCRIP) Wl,-Map=$(BIN_PATH)/$(PROJECT).map
else
     COMPILER = gcc
     CFLAGS   = $(WARNS) -o0 -std=c11
     LDFLAGS = $(INC_FILES) $(LIBA_PATH) $(LIBSO_PATH) $(STATIC_LIB) $(DINAMIC_LIB) -Wl,-Map=$(BIN_PATH)/$(PROJECT).map
endif

export COMPILER
export CFLAGS

all:
	@mkdir -p $(LOG_PATH)
	@d=$$(date +%s); $(MAKE) "build" $(LOG_CMD) && echo "Building time: $$(date --utc --date=@$$(($$(date +%s)-d)) '+%H:%M:%S')" $(LOG_CMD)

.ONESHELL: 
build: start_build link_build

start_build:
	@echo $(PROJECT) "project build date: "$(shell date '+%Y-%m-%d %H:%M:%S')
	@echo ''
	@echo $(PROJECT) "project: building started..."
	@echo "Creating directory: "$(BIN_PATH)
	@echo "Creating directory: "$(OBJ_PATH)
	@mkdir -p $(BIN_PATH) $(OBJ_PATH) 
	@echo $(BIN_PATH)"/ succesfully created!!!"
	@echo $(OBJ_PATH)"/ succesfully created!!!"
	@echo''
	@$(call $(START_TIME))
	@echo $(PROJECT) "Compiling..."
	@$(call makeallmodules,all)
	@echo "Compilation done!!!"
	@echo''

link_build:
	@echo $(PROJECT) "project: linking..."
	@echo $(COMPILER) $(LDFLAGS) $(OBJ_PATH)/*.o -o $(TARGET)
	$(COMPILER) $(LDFLAGS) $(OBJ_PATH)/*.o -o $(TARGET)
	@echo "Link done!!!"
	@echo''
	@echo $(PROJECT) "project building done!!!"
	@echo''

clean:
	@echo $(PROJECT) "project: cleaning started!"
	@rm -rf $(BIN_PATH) $(OBJ_PATH) $(LOG_PATH)
	@echo $(PROJECT) "project: succesfully cleaned!!!"
	@echo''

run:
	@./$(TARGET)

debug:
	@echo $(PROJECT) "project debugging..."
	@echo''
	@gdb $(TARGET)
	@echo $(PROJECT) "project debugging done!!!"

.PHONY: all build clean debug link_build run start_build