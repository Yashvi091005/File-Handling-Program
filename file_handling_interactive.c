/*
 * file_handling.c
 *
 * This program shows how to perform basic file operations in C.
 * It prompts the user for a filename and text to write into the file.
 * After reading and displaying the file content, it asks if the user wants to append data.
 *
 * To compile: gcc file_handling.c -o file_handling
 * To run: ./file_handling
 */

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 512

int main()
{
    FILE *fp;
    char ch;
    char filename[100];
    char text[BUFFER_SIZE];
    char appendText[BUFFER_SIZE];
    char choice;

    // Get the filename from the user
    printf("Enter the filename to create and use: ");
    scanf("%99s", filename);
    getchar(); // Clear newline

    // Get text to write into the file
    printf("Enter text to write to the file (max %d characters):\n", BUFFER_SIZE - 1);
    fgets(text, BUFFER_SIZE, stdin);

    // Create the file and write the user's text
    fp = fopen(filename, "w");
    if (fp == NULL)
    {
        perror("Error creating file");
        return EXIT_FAILURE;
    }
    fprintf(fp, "%s", text);
    fclose(fp);

    // Read and display the file content
    printf("\nFile contents after writing:\n");
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    // Ask user if they want to append additional text
    printf("\nDo you want to append more text? (y/n): ");
    scanf(" %c", &choice);
    getchar(); // Clear newline
    if (choice == 'y' || choice == 'Y')
    {
        printf("Enter text to append to the file (max %d characters):\n", BUFFER_SIZE - 1);
        fgets(appendText, BUFFER_SIZE, stdin);
        fp = fopen(filename, "a");
        if (fp == NULL)
        {
            perror("Error opening file for appending");
            return EXIT_FAILURE;
        }
        fprintf(fp, "%s", appendText);
        fclose(fp);
    }
    else
    {
        printf("Skipping appending text.\n");
    }

    // Read and display the updated file content
    printf("\nFinal file contents:\n");
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        perror("Error opening file for final reading");
        return EXIT_FAILURE;
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    return EXIT_SUCCESS;
}
