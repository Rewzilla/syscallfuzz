
all:
	gcc -o fuzzer fuzzer.c -m32

clean:
	rm fuzzer
