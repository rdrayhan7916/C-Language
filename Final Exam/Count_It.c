#include <stdio.h>

int main()
{
    
    char str[1000]; 
    int small = 0; 
    int capital = 0; 
    int space = 0; 

    fgets(str, 1000, stdin);

    
    for (int i = 0; str[i] != '\0'; i++)
    {
        
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            small++; 
        }
       
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            capital++; 
        }
        
        else if (str[i] == ' ')
        {
            space++; 
        }
    }

    // display the result
    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    
    printf("Spaces - %d\n", space);

    return 0;
}