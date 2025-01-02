#include <stdio.h>
#include<string.h>
#include<math.h>
int main() {
    char str[] = "nguyen quang anh";
    char str1;
   int size=strlen(str);
    printf("\n viet hoa ky tu dau: ");
  for (int i = 0;i<size; i++) {
    if(i==0){
        str1=str[i]-32;
         printf("%c",str1);
    
    }
    else {
        printf("%c",str[i]);
    }
   if(str[i]==' '){
    i==-1;
    i=i+1;
    str1=str[i]-32;
         printf("%c",str1);
   }
  }
  
    return 0;
}
 
