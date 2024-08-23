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

    // Check each row horizontally and print the word formed by each row
    printf("\nWords formed by each row:\n");
    for (int i = 0; i < rows; i++) {
        char word[cols + 1];  // +1 for the null terminator
        for (int j = 0; j < cols; j++) {
            word[j] = matrix[i][j];
        }
        word[cols] = '\0';  // Null-terminate the string
        printf("Word in row %d: %s\n", i + 1, word);
    }
      // Check each row horizontally and print the word formed by each row
    printf("\nWords formed by each col:\n");
    for (int j = 0; j < rows; j++) {
        char word[rows + 1];  // +1 for the null terminator
        for (int i = 0; i < cols; i++) {
            word[i] = matrix[i][j];
        }
        word[rows] = '\0';  // Null-terminate the string
        printf("Word in column  %d: %s\n",j + 1, word);
    }
    return 0;
}
