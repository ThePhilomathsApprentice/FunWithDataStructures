all: factorial palindrome-numbers count-digits trailing-0-factorial gcd lcm is-prime clean

factorial: factorial.c
	gcc factorial.c -o factorial.out
	./factorial.out

palindrome-numbers: palindrome-numbers.c
	gcc palindrome-numbers.c -o palindrome-numbers.out
	./palindrome-numbers.out

count-digits: count-digits.c
	gcc count-digits.c -o count-digits.out
	./count-digits.out

trailing-0-factorial: trailing-0-factorial.c
	gcc trailing-0-factorial.c -o trailing-0-factorial.out
	./trailing-0-factorial.out

gcd: gcd.c
	gcc gcd.c -o gcd.out
	./gcd.out

lcm: lcm.c
	gcc lcm.c -o lcm.out
	./lcm.out

is-prime: is-prime.c
	gcc is-prime.c -o is-prime.out
	./is-prime.out

clean:
	rm -r *.out
