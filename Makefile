all:
	mkdir src/obj

	gcc -c src/lib/helpers.c -o src/obj/helpers.o
	gcc src/main.c src/obj/helpers.o -o hash_cracker -lcrypt
clean:
	rm -rf hash_cracker src/obj
