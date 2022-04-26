#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "getTitle.h"
#include "check.h"
#include "interact.h"

int main (void){

	char * title = getTitle();


	for (int count=0; count<5; ++count){
		char * ans = (char *) malloc (sizeof(char) * 5);
		printf("Your input is : ");
		scanf("%s", ans);
		int * c = check(&title[0], ans);
		interact(c, ans);

		free(ans);

		if (correct(c)){
			free(c);
			break;
		}

		free(c);
	}

	free(title);

	return 0;
}
