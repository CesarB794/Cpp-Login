CC=g++
CFLAGS=-Wall
.PHONY: main.o app.o user.o console.o
all: main.o
	$(CC) $(CFLAGS) user.o console.o app.o main.o -o App
main.o: app.o
	$(CC) $(CFLAGS) user.o console.o app.o sources/main.cpp -c 
app.o: user.o console.o
	$(CC) $(CFLAGS) user.o console.o headers/app.h sources/app.cpp -c
user.o:
	$(CC) $(CFLAGS) headers/user.h sources/user.cpp -c
console.o:
	$(CC) $(CFLAGS) headers/console.h sources/console.cpp -c
clean:
	rm user.o console.o app.o main.o App
