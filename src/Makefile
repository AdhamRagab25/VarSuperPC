CFLAGS := -g -Wall -Werror

objects := var_asm.o

var_asm : $(objects)
	cc -o var_asm $(objects)

var_asm.o : var_asm.c var_asm.h

clean :
	rm -rf core var_asm $(objects)
