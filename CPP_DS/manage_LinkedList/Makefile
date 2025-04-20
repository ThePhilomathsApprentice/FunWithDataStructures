main.o: main.cpp
	g++ -c main.cpp

findMid_LL: main.o
	g++ -o findMid_LL main.o

run: findMid_LL
	./findMid_LL < testInput

clean:
	rm -r *.o
	rm findMid_LL
