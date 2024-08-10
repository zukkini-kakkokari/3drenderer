build:
	gcc -Wall -std=c99 ./src/*.c -lSDL2 -lm -o renderer

run: build
	./renderer

clean:
	rm renderer
