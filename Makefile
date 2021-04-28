all:
	gcc src/hash_cracker.c -o hash_cracker -lcrypt
clean:
	rm -f hash_cracker
