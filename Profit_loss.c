#include<stdio.h>

int pc, sp , profit, loss, balanced;

main(){
	printf("Enter the perssure cost : ");
	scanf("%d",&pc);

	printf("Enter the selled price : ");
	scanf("%d",&sp);	
	
	if(pc>sp)
		{
		printf("Made Loss : ");
		}
	else if(pc<sp)
		{printf("Made Profit : ");
		}
		
	else
	{
		printf("balanced out : ");
	}
}
