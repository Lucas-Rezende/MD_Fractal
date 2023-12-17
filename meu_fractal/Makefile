CC = gcc
CFLAGS = -Wall -Wextra

all: meufractal generate draw

meufractal: meufractal.c
	$(CC) $(CFLAGS) -o meufractal meufractal.c

generate: meufractal
	./meufractal

draw: meufractal meufractal.py output.txt
	python3 meufractal.py

clean:
	rm -f meufractal output.txt