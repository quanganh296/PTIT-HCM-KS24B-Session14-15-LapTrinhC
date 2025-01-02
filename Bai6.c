#include <stdio.h>

int main() {
    char str[] = "Quang Anh Nguyen";
 int count=0;

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
        if (str[i] !=' ') { 
            count++;
        }
    }
printf("\nso tu trong chuoi: %d", count);
    return 0;
}
