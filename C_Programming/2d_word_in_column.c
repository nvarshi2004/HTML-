#include <stdio.h>
#include <string.h>

int main() {
    int rows, cols;

    // Input number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    char matrix[rows][cols];

    // Input the characters for the matrix from the user
    printf("Enter the characters for the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter character for matrix[%d][%d]: ", i, j);
            scanf(" %c", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("\nMatrix of letters:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    // Input the word to search for
    char word[100];
    printf("\nEnter the word to search for: ");
    scanf("%s", word);

    int wordFound = 0;
    int wordLength = strlen(word);

    // Check each row horizontally
    for (int i = 0; i < rows && !wordFound; i++) {
        char rowWord[cols + 1];  // +1 for the null terminator
        for (int j = 0; j < cols; j++) {
            rowWord[j] = matrix[i][j];
        }
        rowWord[cols] = '\0';  // Null-terminate the string

        if (strcmp(rowWord, word) == 0) {
            wordFound = 1;
            printf("The word '%s' is found in row %d.\n", word, i + 1);
        }
    }

    // Check each column vertically
    for (int j = 0; j < cols && !wordFound; j++) {
        char colWord[rows + 1];  // +1 for the null terminator
        for (int i = 0; i < rows; i++) {
            colWord[i] = matrix[i][j];
        }
        colWord[rows] = '\0';  // Null-terminate the string

        if (strcmp(colWord, word) == 0) {
            wordFound = 1;
            printf("The word '%s' is found in column %d.\n", word, j + 1);
        }
    }

    // Check primary diagonal (top-left to bottom-right)
    if (rows >= wordLength && cols >= wordLength) {
        char diagWord1[wordLength + 1];  // +1 for the null terminator
        for (int i = 0; i < wordLength; i++) {
            diagWord1[i] = matrix[i][i];
        }
        diagWord1[wordLength] = '\0';  // Null-terminate the string

        if (strcmp(diagWord1, word) == 0) {
            wordFound = 1;
            printf("The word '%s' is found in the primary diagonal.\n", word);
        }
    }

    // Check secondary diagonal (top-right to bottom-left)
    if (rows >= wordLength && cols >= wordLength) {
        char diagWord2[wordLength + 1];  // +1 for the null terminator
        for (int i = 0; i < wordLength; i++) {
            diagWord2[i] = matrix[i][cols - 1 - i];
        }
        diagWord2[wordLength] = '\0';  // Null-terminate the string

        if (strcmp(diagWord2, word) == 0) {
            wordFound = 1;
            printf("The word '%s' is found in the secondary diagonal.\n", word);
        }
    }

    if (!wordFound) {
        printf("The word '%s' is not found in the matrix.\n", word);
    }

    return 0;
}
