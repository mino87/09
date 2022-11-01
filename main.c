#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int g[5];
	
	g[0]=10;
	g[1]=20;
	g[2]=30;
	g[3]=40;
	g[4]=50;
	
	int i;
	
	for(i=0;i<5;i++)
	printf("g[%d]=%d\n",i,g[i]);
	    
	
	
	return 0;
}
