// Teddy Oweh - October 10th 2023 11:25am @ Discrete Maths Class :(
// Even Fibonacci Numbers
// https://projecteuler.net/problem=2

#include <stdio.h>
int find_sum(int limit){
    int sum = 0;
    int a = 1, b = 2;

    while (a <= limit) {
        if (a % 2 == 0) {
            sum += a;
        }
        int next = a + b;
        a = b;
        b = next;
    }
    return sum;
}


int main(){
    int limit = 4000000;
    int sum = find_sum(limit);
    printf("The sum of all ever numbers in the Fibonacci Sequence till %d is %d",limit,sum);
    return 0;
}