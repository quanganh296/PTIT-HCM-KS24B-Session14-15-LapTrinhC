#include <stdio.h>
#include <string.h>
int main(){
char str[100];
printf("Nhap chuoi bat ki: ");
fgets(str, sizeof(str),stdin);
printf("%s",str);
 int length = strlen(str);
printf("Do dai cua chuoi la: %d",length-1);
    return 0;
}
