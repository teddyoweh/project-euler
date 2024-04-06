// Teddy Oweh - October 10th 2023 1:17am @ Libary :)
// Largest Palindrome Product
// https://projecteuler.net/problem=4

#include <stdio.h>
#include <stdbool.h>

size_t get_string_length(const char *s){
    size_t length=0;
    while(*s){
        length++;
        s++;
    }
    return length;
}

void reverse_string(char s[]){
    int length = get_string_length(s);
    char temp;
    for(int i=0;i<length/2;i++){
        temp = s[i];
        s[i] = s[length-1-i];
        s[length-1-i] = temp;
       
    }
}

bool is_palindrome (int n){
    char val = (char)n;
    return val;



}
const char[] find_max_digit(){
    int max;
    char temp[50]= "Hello World";
    //reverse_string(temp);
 
    


 
    return temp;
}


int main(){
    char answer = find_max_digit();
    printf("The largest palindrome made from the product of two -digit numbers. %c",answer);
    return 0;
}