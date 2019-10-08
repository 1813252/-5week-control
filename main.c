#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


	int number=0;
	char c;
	
	printf("input a string\n");

	while ((c=getchar())!='\n')


{
	if ('0'<=c&& c<='9')
	number++;
}


printf("the number of digits=%d",number);


return 0;
}
