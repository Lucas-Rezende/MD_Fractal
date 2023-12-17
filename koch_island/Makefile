CC = gcc
CFLAGS = -Wall -Wextra

all: koch generate draw

koch: koch.c
	$(CC) $(CFLAGS) -o koch koch.c

generate: koch
	./koch

draw: koch koch.py output.txt input.txt
	python3 koch.py

clean:
	rm -f koch output.txt