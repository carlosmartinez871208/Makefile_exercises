############################################## Project name ##########################################################
# Following variable gives the name of the project.
PROJECT_NAME = mod3
######################################################################################################################
############################################ Project folders #########################################################
# Following variable holds the source path.
SRCDIR = src
# Following variable holds the objects path.
OBJDIR = obj
# Following variable holds the binary path.
BINDIR = bin
######################################################################################################################
######################################### Project External Paths #####################################################
# Following variable holds the includes path from Practice2.
EXT_INCPATH = ../Practice2/inc

# Following variable holds the library path from Practice2.
EXT_LIBPATH = ../Practice2/lib
######################################################################################################################
############################################### Target name ##########################################################
# Following varible holds the target name and address.
TARGET = $(BINDIR)/$(PROJECT_NAME)
######################################################################################################################
###################################### Project source code files #####################################################
# Following variable holds the project source code files.
SRCS = $(SRCDIR)/main.c 
######################################################################################################################
########################################## Project Object files ######################################################
# Following variable holds the project objects files.
OBJS = $(OBJDIR)/main.o
#####################################################################################################################
############################################ Compilation flags ######################################################
# Following variable holds all warnings flags
WFLAGS = -Wall -Werror
# Following variable holds all includes paths
IFLAGS = 
# Following variable holds all external includes paths
EIFLAGS = $(EXT_INCPATH)
# Following variable holds all c language flags
CFLAGS = $(WFLAGS) -I$(EIFLAGS)
#####################################################################################################################
############################################### Linker flags ########################################################
LDFLAGS = -L$(EXT_LIBPATH) -lexample
#####################################################################################################################
############################################ Dynamic libraries ######################################################

#####################################################################################################################
# NOTE: Dynamic library shall be exported to environment variables using: 
#  export LD_LIBRARY_PATH=/home/parallels/SW_Development/Embedded-Platforms/Makefile/Practice2/lib:$LD_LIBRARY_PATH
$(TARGET): $(OBJS)
	gcc $^ -o $@ $(LDFLAGS)

$(OBJS): $(SRCS)
	gcc $(CFLAGS) -c $< -o $@

run:
	./$(TARGET)

clean:
	rm $(OBJS) $(TARGET)
