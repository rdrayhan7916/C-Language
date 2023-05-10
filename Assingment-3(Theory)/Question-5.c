// Question: Write a function named is_palindrome() which will receive a string as parameter from the main function and this function will return 1 if the string is palindrome, otherwise it will return 0. And with the help of this 1 or 0 print “Palindrome” or “Not Palindrome” in the main function.	

#include <stdio.h>
#include <string.h>
int is_palindrome (char str[]){
    int lent= strlen(str);
    
    for (int i = 0, j = lent - 1; i < j; i++, j--)
    {
        
        if (str[i]!=str[j])
        {
            return 0;
        }
        else{
           return 1;
        }
        
        
    }
    

}


int main() {
      char str[10];
      scanf("%s", &str);
    int result = is_palindrome(str);

    if (result == 1){
        printf("Palindrome\n");
        }
    else{
        printf("Not Palindrome\n");
        }
  return 0;
}