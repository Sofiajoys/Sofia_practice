all: calculator.o add.o sub.o mul.o div.o even.o odd.o prime.o fibonacci.o calci
calculator.o:calculator.c
	gcc -c calculator.c
add.o:add.c
	gcc -c add.c
sub.o:sub.c
	gcc -c sub.c
mul.o:mul.c
	gcc -c mul.c 
div.o:div.c
	gcc -c div.c
even.o:even.c
	gcc -c even.c 
odd.o:odd.c
	gcc -c odd.c
prime.o:prime.c
	gcc -c prime.c
fibonacci.o:fibonacci.c
	gcc -c fibonacci.c
calci: calculator.o add.o sub.o mul.o div.o even.o odd.o prime.o fibonacci.o
	gcc calculator.o add.o sub.o mul.o div.o even.o odd.o prime.o fibonacci.o -o calci
clean:
	rm -rf *.o calci







