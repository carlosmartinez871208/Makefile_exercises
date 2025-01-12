## TemplateV1 is a Makefile template for: C, C++ and C for ARM microcontrollers.
#### Project format                                                                         
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

### How does it work?
    Within TemplateV1 there is a directory called "build", move to build and you are ready to run the project.
    1.- The TemplateV1 used C compiler by default if you want to use C++ or C for ARM microntrollers use following commands:
        "make all" (This is used for C project).
        "make all LANG=CXX" (This is used for C++ project).
        "make all LANG=EMB" (This is used for ARM C projects).

    2.- If you want to change the default build name, use following command:
        "make all NAME="your_build_name" i.e. "make all NAME=Linked_list" (This will choise C compiler and rename executable files).

    3.- If you want to change default language and build name, use following command:
        "make all LANG="chaosen_language" NAME="your_build_name" i.e.:
        "make all LANG=CXX NAME=Linked_list" (This will choise C++ compiler and executable name will be Linked_list).
        "make all LANG=EMB NAME=Linked_list" (This will choise ARM C compiler and executable name will be Linked_list).

    4.- If compilation is succesful binary will created within bin folder, run "make run" command to execute your program.

    5.- A build_report will created within report folder after every building call, this is very helful when you need to analize compilation errors.

    6.- Use "make clean" command to clean your project.

