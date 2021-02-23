#include "funcs.h"

int calculateFuncMemory(int (*func)(int, int), int a, int b)
{
    return sizeof((*func)(a,b));
}
