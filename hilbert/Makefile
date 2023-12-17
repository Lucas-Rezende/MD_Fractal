CC = gcc
CFLAGS = -Wall -Wextra

all: hilbert generate draw

hilbert: hilbert.c
	$(CC) $(CFLAGS) -o hilbert hilbert.c

generate: hilbert
	./hilbert

draw: hilbert hilbert.py output.txt input.txt
	python3 hilbert.py

clean:
	rm -f hilbert output.txt