#include <stdio.h>

int main() {
    // Demonstrating various escape sequences in C

    // Newline (moves to the next line)
    printf("This is the first line.\nThis is the second line.\n");

    // Horizontal tab (moves to the next tab stop)
    printf("Column1\tColumn2\tColumn3\n");

    // Backslash (displays a single backslash)
    printf("This is a backslash: \\\n");

    // Single quote (used within single-quoted characters)
    printf("This is a single quote: \'\n");

    // Double quote (used to print double-quoted strings)
    printf("This is a double quote: \"Hello!\"\n");

    // Carriage return (moves the cursor to the beginning of the line)
    printf("Carriage return:\rOverwritten text\n");

    // Backspace (erases the previous character)
    printf("Backspace:\bX\n");

    // Form feed (advances to the next page, not very noticeable in most consoles)
    printf("Form feed:\fThis is a form feed.\n");

    // Vertical tab (rarely used, but can affect formatting in certain consoles)
    printf("Vertical tab:\vLine after vertical tab.\n");

    // Null character (marks the end of a string in C)
    printf("Null character here: \0This won't be printed after the null.\n");

    // Unicode character (use \u for 4-digit Unicode, \U for 8-digit Unicode)
    printf("Unicode character: \u263A (Smiley face)\n");
    printf("Unicode character: \U0001F600 (Grinning face emoji)\n");

    return 0;
}
