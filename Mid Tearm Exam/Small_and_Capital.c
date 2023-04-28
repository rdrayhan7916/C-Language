#include <stdio.h>
#include <string.h>
int main() {
      char ch;
      int capital=0;
      int small=0;
      while (scanf("%c", &ch)!=EOF)
      {
    if (ch>='a' && ch<='z')
    {
    small++;
    }
    else
    {
    capital++;
    }
      }
      printf("%d %d", capital, small);
      
  return 0;
}