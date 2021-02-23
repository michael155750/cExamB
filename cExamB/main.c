#include "funcs.h"
#include <stdio.h>

int ab(int a, int b)
{
    return a + b;
}
/**
 * @brief 
 * @return 0 for successfull finish
 * 
*/
int main()
{
    
    printf("size of the function is: %i", calculateFuncMemory(ab,2,3));
    return 0;

   
}