#include <stdio.h>
#include <string.h>

int main() {
    
    char str1[] = "Quang Anh";
    int do_dai = strlen(str1);
    int count=0; 
    int n;
printf("Hay nhap 1 ky tu bat ky: ");
scanf("%c",&n);
     for (int i = 0; i < do_dai; i++) {
        if(str1[i]==n){
        count++;}
    }
 printf("Chuỗi ban đầu: %s\n", str1);
 printf("so lan xuat hien cua %c trong chuoi la: %d\n",n, count);
    return 0;
}
