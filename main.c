#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int g[5];
	printf("5명의 점수를 입력하세요.\n");
	
	for(i=0;i<5;i++)
	   scanf("%d",&g[i]);
	   
	for(i=0;i<5;i++)
	    printf("g[%d] = %d\n",i,g[i]);
	
	return 0;
}
