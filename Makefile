## Build
all: L3E2

L3E2: L3_Ex2.o inc1.o
	gcc L3_Ex2.o inc1.o -o L3E2

L3_Ex2.o: L3_Ex2.c
	gcc -c L3_Ex2.c
	
inc1.o: inc1.c
	gcc -c inc1.c

clean: 
	rm -rf *.o L3E2