#include <stdio.h>
int main() {
    char str[] = "Hello my gmail is test123@gmail.com";
 int count=0,count1=0,count2=0;
  for (int i = 0; str[i] != '\0'; i++) {
        if (str[i]>='0'&&str[i]<='9') { 
            count++;}
        else if (str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z') { 
            count1++;
          
        }
           else {
            count2++;
           }
        
    }
printf("\nso tu la chu so trong chuoi: %d", count);
printf("\nso tu la chu cai trong chuoi: %d", count1);
printf("\nso ky tu dac biet trong chuoi: %d", count2);
    return 0;
}
