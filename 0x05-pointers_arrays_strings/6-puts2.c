void puts2(char *str) {
    int i = 0; // Initialize the index variable to 0
    while (str[i] != '\0') { // Loop through the string until we reach the null character
        printf("%c", str[i]); // Print the character at index i
        i += 2; // Increment the index by 2 to skip over the next character
    }
    printf("\n"); // Print a new line character to start a new line
}

