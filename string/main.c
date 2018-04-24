#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str1[16]="vaari";
   char str2[20]="btech";
   char str3[28];
   char str4[23]=" india";
   char str5[32]=" Delhi";
   char str6[12];
   int len;
    strcpy(str3,str1);
    printf("strcpy(str3,str1):%s\n",str3);

    strcat(str1,str2);
    printf("strcat(str1,str2):%s\n",str1);

     len=strlen(str2);
     printf("strlen(str2):%d\n",len);

     strcat(str4,str5);
     printf("your add str4 and str5 %s\n",str4);

     len=strlen(str4);
     printf("your length is %d \n",len);

     strcpy(str6,str5);
     printf("your char is %s",str6);

    return 0;
}
