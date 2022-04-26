#include "check.h"
#include <stdlib.h>
#include <stdio.h>

int * check (const char * title, const char * ans){
	int * r = (int *) malloc(sizeof(int) * 5);

	for (int i=0; i<5; ++i) r[i] = 0;	
	// printf("title : %s\nans : %s\n", title, ans);
	
	for (int i=0; i<5; ++i){
		for (int j=0; j<5; ++j){
			if (ans[i] == title[j]){
				r[i] = 1;
				break;
			}
		}
	}

	// for (int i=0; i<5; ++i){
	// 	printf("%d ", r[i]);
	// }
	// printf("\n");

    for (int i=0; i<5; ++i){
        if (r[i] == 1){
            if (title[i] == ans[i])
                r[i] = 2;
        }
    }

	// for (int i=0; i<5; ++i)
	// 	printf("%d ", r[i]);
	// printf("\n");

	return r;
}
