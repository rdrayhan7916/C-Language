#include <stdio.h>

int main() {
      int n;
      scanf("%d", &n);
      int arr[n][2];

      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        } 
      }
int tiger=0;
int pathan=0;
      
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < 2; j++)
        {
            if (arr[i][0]>arr[i][1])
            {
                tiger++;
            }
            else if (arr[i][0]<arr[i][1])
            {
                pathan++;
            }
            
           
            
        } 
    
      }


      if (tiger > pathan)
      {
        printf("Tiger");
      }
      else if (tiger < pathan)
      {
        printf("Pathan");
      }
      
      else
      {
        printf("Draw");
      }
   
      
  return 0;
}