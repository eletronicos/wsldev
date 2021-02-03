classFunction:classFunction.cpp
	g++ -E classFunction.cpp -o classFunction.i
	g++ -S classFunction.i -o classFunction.s
	g++ -c classFunction.s -o classFunction.o
	g++ -O classFunction.o -o classFunction

clean:
	rm *.i *.s *.o
