#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,avg;
	int g[5];
	int sum=0;
	
	for(i=0;i<5;i++)
	{
	printf("�л������� �Է��ϼ���.:\n");
	scanf("%d",&g[i]);
	sum+=g[i];
	}
	    
    avg = sum/5;
    printf("������� : %d\n",avg);
    
	return 0;
}
