#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str1[8]="unity \n";
   char str2[18]="is";
   char str3[13]="strength";
   char str4[12];
   int len ;
    strcat(str1,str2);
    printf("%s \n",str1);


    strcpy(str4,str3);
    printf("%s \n",str4);


     len=strlen(str1);
     printf("your characters are %d \n",len);



    return 0;
}
