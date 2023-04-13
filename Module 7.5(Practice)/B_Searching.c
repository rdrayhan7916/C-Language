#include <stdio.h>

int main() {
      int n;
      scanf("%d",&n);
      int arr[n];
      for (int i = 0; i < n; i++)
      {
        scanf("%d", &arr[i]);
      }
      int x;
      scanf("%d", &x);
      int pos=0;
      for (int i = 0; i < n; i++)
      {
        if (arr[i]==x)
        {
            pos=i;
            break;
        }
        else
        {
            pos=-1;
        }
         
      }
      printf("%d\n", pos);
      
  return 0;
}