
all: func main
	gcc main.o func.o

func: func
	gcc -c func.c

main: main
	gcc -c main.c

clean: main
	rm main.o