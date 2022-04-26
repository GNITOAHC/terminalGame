#include <stdio.h>
#include <stdlib.h>
#include "getTitle.h"

char * getTitle(){
    FILE * titlePtr;
	char * title = (char *) malloc (sizeof(char) * 5);
	titlePtr = fopen("answer.txt", "r");
	fscanf(titlePtr, "%s", title);
	fclose(titlePtr);
    return title;
}