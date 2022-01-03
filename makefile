CC=gcc # Compilador a usar
EXE=conv # Nombre del ejecutable

CDEBUG= -g -Wall # Banderas de depuracion
CSTD= -std=c99 # Estandar del lenguaje

CFLAGS = -Wno-deprecated-register -O0 $(CDEBUG) $(CSTD)
CLIBS = -lm

COBJ = main funciones

FILES = $(addsuffix .c, $(COBJ))
OBJS = $(addsuffix .o, $(COBJ))
CLEANLIST = $(addsuffix .o, $(COBJ))

.PHONY: all
all: wc

wc: $(FILES)
	$(MAKE) $(OBJS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJS) $(CLIBS)

.PHONY: clean
clean:	
	rm -rf $(CLEANLIST)