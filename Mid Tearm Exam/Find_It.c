#include <stdio.h>

int main() {
      int n;
      scanf("%d",&n);
      int arr[n];
      for (int i = 0; i < n; i++)
      {
        scanf("%d", &arr[i]);
      }
      int value;
      scanf("%d", &value);
      int have=0;
      for (int i = 0; i < n; i++)
      {
        if (arr[i]==value)
        {
            have++;
        }
        
      }
      printf("%d", have);
      
  return 0;
}