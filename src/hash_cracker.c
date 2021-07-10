/*

    * Program: Linux Hash Cracker
    * Data: 27/04/2021 // Last modified: 09/07/2021
    * Author: Dantalion-dev
    * Version: 1.0
    * License: MIT

*/

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

#define RED       "\x1B[31m"
#define GREEN     "\x1B[32m"
#define RESET     "\x1B[0m"
#define BUFF 25

void fatal(char *msg) {
    fprintf(stderr, RED "[error]: %s\n", msg);
    exit(1);
}

void usage(void) {
    fatal("Use valid arguments.\n[!] Usage: ./crack <wordlist_path>\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2)
        usage();

    FILE *file;
    file = fopen(argv[1], "r");
    if (file == NULL)
        fatal("File not found or I don't have permission.\n");

    bool breakpoint = true;
    char passwd[BUFF + 130];
    char salt[BUFF];
    char complete[BUFF + 25];
    char *result;
    
    printf("Hash: ");
    scanf("%s", complete);
    printf("Salt: ");
    scanf("%s", salt);
    printf("\n");

    while(fscanf(file, "%s", &passwd) != EOF) {
        result = (char *) crypt(passwd, salt);
        if (strcmp(complete, result) == 0) {
            printf(GREEN "\n\t [+] Found Password: %s\n", passwd);
            breakpoint = false;
            fclose(file);
            break;
        }else{
            printf("[-] Testing: %s\n", passwd);
        }          
    }
    printf(RESET "\n\t\t[*] Finished!\n\n");
    if (breakpoint)
        fatal("Password not found.\n");
}
