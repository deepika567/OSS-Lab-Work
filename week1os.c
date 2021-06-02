#include <stdio.h>

int main() {
    FILE * fp;
    char c;
    printf("File Handling\n");

    fp = fopen("Week1.txt", "w");

    while ((c = getchar()) != EOF) {
        putc(c, fp);
    }

    fclose(fp);
    printf("Data Entered:\n");

    fp = fopen("Week1.txt", "r");
    while ((c = getc(fp)) != EOF) {
        printf("%c", c);
    }

    fclose(fp);
    return 0;
}

