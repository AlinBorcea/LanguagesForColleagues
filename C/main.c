#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 128
#define CLI_ARGS_ERROR 1
#define delim "_"

int main(int argc, char *argv[]) {
    char string[MAX_LENGTH];
    int length;

    if (argc != 3) {
        fprintf(stderr, "Not enough CLI arguments! Provided only %d!\n", argc);
        return CLI_ARGS_ERROR;
    }

    if (strlen(argv[1]) >= 128) {
        fprintf(stderr, "Error! CLI arg 1 is too large!");
        return CLI_ARGS_ERROR;
    }

    strcpy(string, argv[1]);
    length = atoi(argv[2]);

    int count = 0;
    for (char *word = strtok(string, delim); word; word = strtok(NULL, delim)) {
        if (strlen(word) == length)
            count++; 
    }

    printf("The string is %s\n", argv[1]);
    printf("Target words: %d\n", count);

    return 0;
}