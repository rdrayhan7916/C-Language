#include <stdio.h>
#include <string.h>
int main() {
      char ch;
      int vowels=0;
      while (scanf("%c", &ch)!=EOF)
      {
        if (ch=='a'|| ch=='e' ||ch=='i' || ch=='o' || ch=='u')
        {
        vowels++;
        }
        
      }
      printf("%d", vowels);
      

  return 0;
}