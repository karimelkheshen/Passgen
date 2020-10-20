target:
	@gcc -Wall -o prog main.c
	@clear
	@./prog
	@rm -rf main.o prog