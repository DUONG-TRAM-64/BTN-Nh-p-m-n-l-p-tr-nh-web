#include<stdio.h>

int main (){
    char n ;
    scanf("%c" , &n) ; 

     if ( n == 'o' || n == 'a' || n == 'e' ||n == 'u' || n == 'i'
     ? printf("%d is a vowel." , n)
     : printf("%d is a consonant." , n) 
     ) 
    return 0 ; 
}