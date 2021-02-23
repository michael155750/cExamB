#include "fileHandeling.h"
#include <stdio.h>

void readFile(char *text, char *path)
{
    FILE *fp;
    fp = fopen(path, "r");
    if (!printErrorFiles(fp))
    {
        return;
    }
    
    int i = 0;
    while ((text[i] = fgetc(fp)) != EOF)
        ++i;
    fpclose(fp);
}

void writeTwoTexts(char *text1, char *text2, char *path)
{
    FILE *fp;
    fp = fopen(path, "w");
    fprintf(fp, "%s %s\n", text1, text2);
    fclose(fp);
}

int printErrorFiles(FILE *file)
{
    if (!file)
    {
        printf("file not exist!\n");
        return 0;
    }
    return 1;
}
