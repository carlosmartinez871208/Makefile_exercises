VAR1 = 10
VAR2 = 20
VAR3 = 30

# Following statement will display an error: Recursive variable 'VAR1' references itself (eventually).
# VAR = $(VAR1) 1000 
# Following statement will be OK, it concatenates de values. 
VAR1 := $(VAR1) 1000

default:
	@echo $(VAR1)

# .PHONY will support the call of the rules inside the Makefile.
#        if a rule is not PHONY it will look for a file in the folder. Practice7/default.
.PHONY: default