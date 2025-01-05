############################################## Project name ##########################################################
# Following variable gives the name of the project.
PROJECT_NAME = mod4
######################################################################################################################
############################################ Project folders #########################################################
# Following variable holds the source path.
SRCDIR = src
# Following variable holds the headers path.
INCDIR =inc
# Following variable holds the objects path.
OBJDIR = obj
# Following variable holds the binary path.
BINDIR = bin
# Following variable holds the static library path.
LIBDIR = lib
######################################################################################################################
######################################### Project External Paths #####################################################

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
IFLAGS = $(INCDIR)
# Following variable holds all external includes paths
EIFLAGS = $(EXT_INCPATH)
# Following variable holds all c language flags
CFLAGS = $(WFLAGS) -I$(IFLAGS)
#####################################################################################################################
############################################### Linker flags ########################################################
LDFLAGS = -L$(EXT_LIBPATH) -lexample
#####################################################################################################################
############################################ Dynamic libraries ######################################################

#####################################################################################################################
############################################ static libraries #######################################################
LIBNAME = slexample
LIBS = $(LIBDIR)/lib$(LIBNAME).a
LIBO = $(OBJDIR)/sl_example.o
SLSRC = $(SRCDIR)/sl_example.c
#####################################################################################################################
# NOTE: Dynamic library shall be exported to environment variables using: 
#  export LD_LIBRARY_PATH=/home/parallels/SW_Development/Embedded-Platforms/Makefile/Practice2/lib:$LD_LIBRARY_PATH
$(TARGET): $(SRCS)
	gcc -I$(INCDIR) $^ -o $@ -L$(LIBDIR) -l$(LIBNAME)

stlib: $(LIBS)

$(LIBS): $(LIBO)
	ar rcs $@ $^

$(LIBO): $(SLSRC)
	gcc $(CFLAGS) -c $< -o $@

run:
	./$(TARGET)

clean:
	rm $(OBJDIR)/*.o $(TARGET) $(LIBS)
