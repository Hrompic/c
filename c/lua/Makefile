default: 1.c
	gcc 1.c -llua -lm
lib: 1.c
	gcc 3lib.c -llua -shared -fPIC -ldl -o mylib.so

