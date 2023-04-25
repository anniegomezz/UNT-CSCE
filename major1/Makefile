output: major1.o clz.o endian.o rotate.o parity.o
	gcc major1.o clz.o endian.o rotate.o parity.o -o output

major1.o: major1.c major1.h
	gcc -c major1.c

clz.o: clz.c
	gcc -c clz.c

endian.o: endian.c
	gcc -c endian.c

rotate.o: rotate.c
	gcc -c rotate.c

parity.o: parity.c
	gcc -c parity.c

clean:
	rm *.o output
