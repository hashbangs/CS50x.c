PROG = caesar

CC = gcc
LIBS = lm

${PROG}: ${PROG}.c
	${CC} ${PROG}.c -o ${PROG} -${LIBS}

clean:
	rm ${PROG}
