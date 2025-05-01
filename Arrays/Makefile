run_all: largest max_difference reverse search


largest: largest_array.c print_array.c
	gcc print_array.c largest_array.c -o largest_array.out
	./largest_array.out


max_difference: max_difference.c print_array.c
	gcc print_array.c max_difference.c -o max_difference.out
	./max_difference.out


reverse: reverse_array.c print_array.c
	gcc print_array.c reverse_array.c -o reverse_array.out
	./reverse_array.out


search: search_sorted_array.c print_array.c
	gcc print_array.c search_sorted_array.c -o search_sorted_array.out
	./search_sorted_array.out


clean:
	rm -r *.out
