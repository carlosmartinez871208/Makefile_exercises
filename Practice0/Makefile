# This is a make and makefile practice.

#all rule: execute all makefiles rules except clean.
all: dir files

# dir rule: stands for creating directories.
# mkdir command is used to create folders or directories.
# -p is a flag that means no error if existing, make parent directories as needed.
dir:
	mkdir -p lib inc src

# files rule: stands for creating source code files into an specific directorie (src/) that has been already created by "dir" rule.
# touch command is used to create files.
files:
	touch src/main.c

# clean rules: remove all folder and files created by the makefile.
# rm command is used for remove objects.
# -rf are flags, r: stands to remove directories and their contents; f: stands to ignore nonexistent files and arguments, never promt.
clean:
	rm -rf lib inc src