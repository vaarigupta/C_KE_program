#include <iostream>
#include <string>

using namespace std;

int main()
{
    char ch[50],ch1[10];
    put("Enter the string");
    get(ch);
    put("Enter the substring");
    get(ch1);
    int c;
    int n=strlen(ch);
    for(int i=0;i<n;i++)
      {
              if(strstr(ch1,ch[i]))
              {
                      c++;
              }

      }
      cout<<c;


    return 0;
}
