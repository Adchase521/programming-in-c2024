//C program to enter a sentence to a file with appendment to the file.
/*
//C program for data text handling 
Author: Axel Chase 
Registration number: 3478098
Date : 26/10/2024
//preprocessor directive - scanf(),printf()
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void writeSentenceToFile(const char *filename) {
    FILE *file;
    char sentence[100];

    // Prompt user for input
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    // Remove newline character if present
    size_t len = strlen(sentence);
    if (len > 0 || sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    // Open file in append mode
    file = fopen(filename, "a");
    
    // Check if file opened successfully
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    
    // Write sentence to file and close it
    fprintf(file, "%s\n", sentence);
    
    if (fclose(file) != 0) {
        perror("Error closing file");
        exit(EXIT_FAILURE);
    }
}

int main() {
   const char *filename = "data.txt";
   writeSentenceToFile(filename);

   return EXIT_SUCCESS;
}
