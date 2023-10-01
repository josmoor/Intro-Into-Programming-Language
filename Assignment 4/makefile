create: main.cpp queue.o
	g++ main.cpp -o run
	./run
queue.o: queue.h
	g++ queue.h -o queue.o
clean:
	rm *.o
	rm run
exe:
	./run