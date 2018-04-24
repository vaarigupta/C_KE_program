#include <stdio.h>
#include <stdlib.h>

int main()
{ char str1[12]="I";
char str2[13]="love";
char str3[14]="my";
char str4[15]="india";
char str5[16];
char str6[17];
int len;

strcat(str6,str2);
printf("  %s \n",str2);

  strcpy(str6,str1);
  printf("%s \n",str6);

  strcpy(str5,str2);
  printf("your str1 is %s \n",str2);


   len=strlen(str4);
   printf("the total number of characters are %d \n",len );




    return 0;
}
