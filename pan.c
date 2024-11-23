#include <stdio.h>

int main() {
    FILE *ptr = fopen("file1.txt", "r");
    if (!ptr) {
        printf("Error opening file\n");
        return 1;
    }

    char ch;
    int cl = 1, c = 0, cw = 1;

    while ((ch = fgetc(ptr)) != EOF) {
        if (ch == '\n') {
            cl++;
        } else if (ch == ' ' || ch == '\n') {
            printf("%c",ch);
            ch = fgetc(ptr); // Move the pointer to the next character
            if (ch != ' ' && ch != '\n' && ch != EOF) {
                cw++;
                c++; // Count this character as it was read
            }
        } else {
            c++;
        }
        printf("%c", ch);
    }
    fclose(ptr);

    printf("\nThe number of lines are %d\n", cl);
    printf("The number of characters are %d\n", c);
    printf("The number of words are %d\n", cw);

    return 0;
}
