#include <stdio.h>
#include <string.h>

int main() {
    
    char str1[] = "Quang Anh";
    int do_dai = strlen(str1);
    

    char str2[do_dai + 1];

    // Đảo ngược chuỗi
    for (int i = 0; i < do_dai; i++) {
        str2[i] = str1[do_dai - i - 1];
    }

    
    str2[do_dai] = '\0';

    printf("Chuỗi ban đầu: %s\n", str1);
    printf("Chuỗi đảo ngược: %s\n", str2);

    return 0;
}
