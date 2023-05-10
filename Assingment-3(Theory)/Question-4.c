// Question: Show the 4 types of examples of functions given below with an example. You can give any example you want, but make sure you are giving different examples for all the four types..


#include <stdio.h>
// Has Return + Parameter
int sum(x, y){
    int total=x+y;
    return total;
}

// Has Return + No Parameter

int get_random_number() {
    return rand() % 100; 
}

// No Return + Parameter

void print_sum(int a, int b) {
  int sum = a + b;
  printf("The sum is %d\n", sum);
}

// No Return + No Parameter
void say_hello() {
  printf("Hello world!\n");
}



int main() {
      // Has Return + Parameter
      int total=sum(5, 8);
      printf(" The Total is %d\n", total);


// Has Return + No Parameter
     int random_number = get_random_number(); 
    printf("Random number: %d\n", random_number);

    // No Return + Parameter
    print_sum(12, 5);

    // No Return + No Parameter
say_hello();
  return 0;
}