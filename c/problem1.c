// Teddy Oweh - October 9th 2023 10:50pm @ My Dorm Couch
//Multiples of 3 or 5
//https://projecteuler.net/problem=1


#include <stdio.h>
int find_sum(int divisors[],int len){
    int sum = 0;
    for(int i=1;i<len;i++){
        for(int j=0;j<sizeof(divisors)/sizeof(divisors[0]);j++){
            if(i%divisors[j]==0){
                sum+=i;
            }
        }
        
    }
    return sum;

}


int main(){
    int divisors[2] = {3,5};
    int length = 10;
    int sum = find_sum(divisors,length);
    printf("The sum of all the multiples of 3 or 5 below %d is %d\n",length, sum);
    return 0;
}