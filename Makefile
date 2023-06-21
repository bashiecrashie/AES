CC=gcc
MAINFILE=main.c
CRYPTFILE=cryptfuncs.c
CALCFILE=calcfuncs.c
OUTARGS=-o
BINFILE=aes128
DEBUG=-g

all: build

build:
	$(CC) $(DEBUG) $(MAINFILE) $(CRYPTFILE) $(CALCFILE) $(OUTARGS) $(BINFILE)