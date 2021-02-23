#pragma once
#include <stdio.h>

/**
 *@file fileHandeling.h
*/

/**
 * @brief gets apath to a file and read all of it
 * @param text the text in the file that readed
 * @param path the path to the file
*/
void readFile(char *text, char *path);

/**
 * @brief gets two text and write them to the file
 * @param text1 
 * @param text2 
 * @param path path to the file
*/
void writeTwoTexts(char *text1, char *text2, char *path);

/**
 * @brief print error in opening files 
 * @param file a pointer to a FILE structure
 * @return if the file not opened return 0
*/
int printErrorFiles(FILE *file);
