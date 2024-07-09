#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "./include/helpers.h"
#include "./include/constants.h"

int main(int argc, char *argv[]) {
    // Usage helper.
    if(argc != 2) usage();

    // Try to open file.
    FILE *wordlist;
    wordlist = fopen(argv[1], "r");
    if(wordlist == NULL)
        fatal("File not found or I don't have permission to open it.\n");

    // Main variables.
    int isFound = 0;
    unsigned char passwd[MAX_CHAR_LENGHT];
    unsigned char salt[MAX_CHAR_LENGHT];
    unsigned char complete[MAX_CHAR_LENGHT];
    unsigned char *result;
    
    // Get user hash/salt input.
    printf("Hash: ");
    scanf("%s", complete);
    printf("Salt: ");
    scanf("%s", salt);
    printf("\n");

    // Crypt & Compare.
    while(fscanf(wordlist, "%s", &passwd) != EOF) {
        result = (char *) crypt(passwd, salt);

        if(result == NULL) {
            fclose(wordlist);
        
            fatal("Error using crypt function.\n");
        };

        if(strcmp(complete, result) == 0) {
            printf(GREEN "\n\t [+] Found Password: %s\n", passwd);
            
            isFound = 1;
            
            fclose(wordlist);

            break;
        } else {
            printf("[-] Testing: %s\n", passwd);
        }          
    }

    if(!isFound) fatal("Password not found.\n");

    printf(RESET "\n\t\t[*] Finished!\n\n");

    return 0;
}
