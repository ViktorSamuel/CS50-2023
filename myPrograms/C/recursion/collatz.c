#include <stdio.h>

int collatz(int n); // collatz conjecture

int main(void)
{
    printf("%d\n", collatz(23));
}

int collatz(int n){
    //base case
    if (n == 1)
        return 0;
    // recursive case 1
    else if (n % 2 == 0)
        return 1 + collatz(n/2);
    // recursive case 2
    else
        return 1 + collatz(3 * n + 1);
}