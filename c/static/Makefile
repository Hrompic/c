a.out: 1.o 2.o
	gcc 1.o 2.o
1.o:
	gcc 1.c -c
2.o:
	gcc 2.c -c
lib: 2.o
	ar rc lib2.a 2.o
	ranlib lib2.a
l: lib
	gcc 1.c -L. -l2
clean:
	rm -f 1.o 2.o a.out lib2.a
