#include <stdio.h>
#include <string.h>

int main() {
    char str[]="quang anh"; 
    int arr[256] = {0};
    
    printf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        arr[(int)str[i]]++; 
    }
    printf("\nSo lan xuat hien cua tung ky tu:\n");
    for (int i = 0; i < 256; i++) {
        if (arr[i] > 0) { 
            printf("%c: xuat hien %d lan\n", i, arr[i]);
        }
    }
    
    return 0;
}
