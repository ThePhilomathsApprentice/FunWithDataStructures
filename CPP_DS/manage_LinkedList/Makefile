make: main.o
    g++ -o findMid_LL main.o

run: findMid_LL
    ./findMid_LL < testInput

main.o: main.cpp
    g++ -c main.cpp

clean:
    rm -r *.o
    rm findMid_LL
