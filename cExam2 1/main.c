#include <stdio.h>
#include "fileHandeling.h"
/**
 * @brief
 * @return 0 for successfull finish
 *
*/
int main()
{

    char path[100];
    printf("enter file path\n");
    scanf(path);
    char text[100];
    readFile(text, path);
    writeTwoTexts("hellow", text);

    
    return 0;
}