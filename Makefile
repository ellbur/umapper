
CFLAGS = -std=c11 -Wall -Werror

.objs/mapping.o: mapping.c mapping.h keys.h
	mkdir -p .objs
	gcc -c $(CFLAGS) mapping.c -o .objs/mapping.o

.objs/keys.o: keys.c keys.h
	mkdir -p .objs
	gcc -c $(CFLAGS) keys.c -o .objs/keys.o
	
.objs/test-1.o: test-1.c mapping.h keys.h
	mkdir -p .objs
	gcc -c $(CFLAGS) test-1.c -o .objs/test-1.o

bin/test-1: .objs/test-1.o .objs/keys.o .objs/mapping.o
	mkdir -p bin
	gcc .objs/test-1.o .objs/keys.o .objs/mapping.o -o bin/test-1

test-1: bin/test-1
	./bin/test-1

clean:
	rm -rf .objs
	rm -rf bin

