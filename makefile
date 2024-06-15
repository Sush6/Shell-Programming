App:App.c add.o sub.o Arith.h
	gcc App.c add.o sub.o -o App
	echo "App.o got generated"

add.o:add.c
	gcc -c add.c
	echo "add.o got generated"

sub.o:sub.c
	gcc -c sub.c
	echo "sub.o got generated"



clean:
	rm -rf *.o App
