program: main.c
	gcc main.c -o quick

.PHONY: clean

clean: 
	rm quick
