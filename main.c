#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int i;
int g[SIZE];
int s[SIZE];

for(i=0;i<SIZE;i++)
   g[i]=rand()%100;
for(i=0;i<SIZE;i++)
   s[i]=g[i];

for(i=0;i<SIZE;i++)
    printf("s[%d]=%d\n",i,s[i]);
	   
	return 0;
}
