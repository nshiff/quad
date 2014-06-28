CFLAGS	= -Wall -pedantic -std=c99

all:	main.c
	gcc ${CFLAGS} main.c  -o quad
