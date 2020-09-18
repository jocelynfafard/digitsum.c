#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int digit_sum(int n) 
{ 
    if (n == 0) 
       return 0; 
    else
      return (n % 10 + digit_sum(n / 10)); 
} 

int main(void) 
{ 
    int n;
    char *num = readline("Enter an int: ");
    n = atoi(num);
    int sum = digit_sum(n); 
    printf("sum of digits of %d is %d.\n", n, sum); 
    return 0; 
}