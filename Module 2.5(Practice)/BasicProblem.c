    // Problem-01

#include <stdio.h>
int main (){
    printf("Recently I heard that you’ve achieved 95%% marks in your exam. This is brilliant! I wish you’ll shine in your life!	Good luck with all the barriers(//\\) in your life.");
    return 0;
}


  // Problem-02

  #include <stdio.h>
  int main(){
    int a , b, sum, subtraction, multipliacation;
    float divition;
    scanf("%d, %d", &a, &b);
    sum= a+b;
    subtraction = a-b;
    multipliacation =a*b;
    divition = a*1.0/b;
    printf("Sum=%d\n Subtraction=%d\n Multiplication=%d\n Division=%0.2f" , sum, subtraction, multipliacation, divition);
  }

   // Problem-03

   #include <stdio.h>
   int main (){
    int a;
    scanf("%d", &a);
    if (a > 0)
    {
        if (a %2==0)
        {
            printf("This is even number");
        }
        else{
            printf("This is a odd number");
        }
        
    }
    else
    {
        printf("Please Give a Positive number");
    }
    
    
   }



//    Problem-04

#include <stdio.h>
int main ()
{
    int a ;
    scanf("%d", &a);
    if (a== 0)
    {
    printf("This is a zero");
    }
    else if (0< a)
    {
        printf("This is a positive number");

    }
   else
   {
    printf("This is a negetive number");
   }
  
}

// Problem-05

#include <stdio.h>
int main ()
{
    int amount;
    scanf("%d", &amount);
    if (amount>20000)
    {
        printf("She buy Gucci Bag and Gucci ");

    }
    else if (amount>=10000)
    {
        printf("She buy a Gucci Bag");
    }

    else if (amount>=5000)
    {
        printf("She buy a Levis bag ");

    }
    else
    {
        printf("She buy something in New Market");
    }
    
    
    
    
}

