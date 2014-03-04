objects = sort.c basic.c *_sort.c

main: $(objects)
	gcc -Wall $(objects) -g -o sort.out

run: main
	./sort.out

.PHONY : clean

clean:
	rm -f sort.out

