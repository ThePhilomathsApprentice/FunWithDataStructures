make: createEmp.o createNode.o dispHighLow.o main.o showmenu.o display.o
	gcc -o out1 main.o createEmp.o createNode.o showMenu.o display.o dispHighLow.o

run: out1
	./out1

createEmp.o: createEmp.c
	gcc -c createEmp.c
createNode.o: createNode.c
	gcc -c createNode.c
main.o: main.c
	gcc -c main.c
display.o: display.c
	gcc -c display.c
dispHighLow.o: dispHighLow.c
	gcc -c dispHighLow.c
showmenu.o: showMenu.c
	gcc -c showMenu.c

rm: createEmp.o createNode.o dispHighLow.o main.o showMenu.o
	rm -r *.o
