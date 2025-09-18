#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char c, d;
	
	printf("enter a character:");
	scanf("%c",&c);
	
	d=c+1;
	printf("The next character of %c (%i) is %c (%i).\n",c,c,d,d);
			
	return 0;
}
