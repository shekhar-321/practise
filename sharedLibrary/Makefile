shared:	foo.c foo.h driver.c
	gcc -c -fPIC foo.c
	gcc -shared foo.o -o l.so
	gcc driver.c -l:l.so -L .
	export LD_LIBRARY_PATH=$pwd
