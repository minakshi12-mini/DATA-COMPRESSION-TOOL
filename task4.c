#include <stdio.h>
#include <string.h>

// Function to perform Run-Length Encoding
void runLengthEncode(const char* input) {
    int len = strlen(input);
    int count;
    
    for (int i = 0; i < len; i++) {
        // Count occurrences of current character
        count = 1;
        while (i < len - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }
        // Output the character and its count
        printf("%c%d", input[i], count);
    }
    printf("\n");
}

int main() {
    char input[1000];

    // You can change this to a hardcoded string for testing
    printf("Enter a string to compress: ");
    scanf("%s", input);  // Reads a single word

    printf("Compressed output: ");
    runLengthEncode(input);

    return 0;
}
