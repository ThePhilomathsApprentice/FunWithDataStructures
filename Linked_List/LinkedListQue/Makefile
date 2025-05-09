fresh: main.c
	gcc main.c -o ./bin/main.out

run: fresh testInput.txt
	./bin/main.out < testInput.txt

clean: ./bin/main.out
	rm -rf ./bin/*.out