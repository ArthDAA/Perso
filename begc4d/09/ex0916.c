#include <stdio.h> 
 
int main() 
{ 
    int fibo, nacci; 
 
    fibo  = 0;                        // L07 
    nacci = 1; 
    do 
    { 
        printf("%d ", fibo);          // L12 
         fibo = fibo+nacci; 
        printf("%d ", nacci); 
         nacci = nacci+fibo; 
    } while( nacci < 300 );          // L16 
    putchar('\n'); 
    return(0); 
}