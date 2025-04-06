/*
 * file_handling.c
 *
 * This program shows how to perform basic file operations in C.
 * It creates a file, writes some text, reads and displays the text,
 * then appends more text and displays the complete content.
 *
 * To compile: gcc file_handling.c -o file_handling
 * To run: ./file_handling
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    const char *filename = "sample.txt";

    // Create a new file and write initial data
    fp = fopen(filename, "w"); // Open file in write mode (creates file if it doesn't exist)
    if (fp == NULL)
    {
        perror("Error creating file");
        return EXIT_FAILURE;
    }
    fprintf(fp, "This is the first line.\n");
    fprintf(fp, "This is the second line.\n");
    fclose(fp);

    // Open the file to read and display its contents
    printf("Contents after writing:\n");
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);

    // Append new data to the file
    fp = fopen(filename, "a"); // Open file in append mode
    if (fp == NULL)
    {
        perror("Error opening file for appending");
        return EXIT_FAILURE;
    }
    fprintf(fp, "This is an appended line.\n");
    fclose(fp);

    // Read and display the updated file content
    printf("\nContents after appending:\n");
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        perror("Error opening file for final reading");
        return EXIT_FAILURE;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);

    return EXIT_SUCCESS;
}
