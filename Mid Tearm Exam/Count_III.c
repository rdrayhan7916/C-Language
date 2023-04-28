#include <stdio.h>
#include <string.h>
int main() {
      int arr[26]={0};
      char ch;
      while (scanf("%c", &ch)!=EOF)
      {
        arr[ch-'a']++;
      }
      for (char i = 'a'; i <= 'z'; i++)
      {
        printf("%c - %d\n", i, arr[i-'a']);
      }
      
      
  return 0;
}