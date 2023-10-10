// Teddy Oweh - October 10th 2023 11:32am @ Discrete Maths Class :(
// Largest Prime Factor
// https://projecteuler.net/problem=3

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n){
    if(n<=1) return false;
    if(n<=3) return true;

    if (n % 2 == 0 || n % 3 == 0) return false;
    
    int i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
        i += 6;
    }
    return true;
}
int find_max_prime(int num){
    int max;
 
    for(int i =0;i<num;i++){
        if(is_prime(i) && num % i==0){
            max = i;
        }
    }


 
    return max;
}


int main(){
    long num = 600851475143;
    int max_num = find_max_prime(num);
    printf("The largest prime factor of %ld is %d",num,max_num);
    return 0;
}