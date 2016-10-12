objects = sort.C basic.C *_sort.C

main: $(objects)
	g++ -Wall $(objects) -g -o sort.out

run: main
	./sort.out

.PHONY : clean

clean:
	rm -f sort.out

