#pragma once

/**
 * @file funcs.h
 */

/**
 * @brief calculate the size in bytes of a function
 * @param func function who gets two integers and return int
 * @return the size of the function
*/
int calculateFuncMemory(int (*func)(int,int), int a, int b);
