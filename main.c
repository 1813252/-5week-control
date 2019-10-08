#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int num;
	int cnt=0;
	int answer=59;
	
	do 
	
	{
		printf("guess a number\n");
		scanf("%d",&num);
		
		
		if (num>answer)
		{
			printf("high\n");
		}
	
		else if (num<answer)
		{
			printf("low\n");
		}
		
			cnt++;
	}
		while (num!=answer);
		printf("congratulation! trial=%d",cnt);
	


return 0;
}
