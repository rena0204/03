#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int ja, mo;
	
	printf("enter bunja:");
	scanf("%d",&ja);
	
	printf("enter bunmo:");
	scanf("%d",&mo);
	
	printf("The result is %f\n",(float)ja/mo);
			
	return 0;
}
