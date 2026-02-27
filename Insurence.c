#include<stdio.h>

main() {
    int age;
    char gender, la, Male, Female, city, village;

    printf("Enter the age: ");
    scanf("%d", &age);

    printf("Enter the gender: ");
    scanf(" %c", &gender);   

    printf("Enter the Leaving Area: ");
    scanf("  %c", &la);     
	  
			
			if((age>=25||age<=35) && (gender==Male) && (la==city)){
				printf("The Premium is = 4000");
				printf("The Maximum Policy amount is = 2 Lack");
			}

			else if((age>=25||age<=35) && (gender==Female) && (la==city)){
				printf("The Premium is = 3000");
				printf("The Maximum Policy amount is = 1 Lack");
			}

			else if((age>=25||age<=35) && (gender==Male) && (la==village)){
				printf("The Premium is = 6000");
				printf("The Maximum Policy amount is = 10000");
			}
			else if((age>=25||age<=35) && (gender==Female) && (la==village)){
				printf("The Premium is = 4000");
				printf("The Maximum Policy amount is = 2 Lack");
			}
			
			else{
				printf("Person is not insured");
			}		
	

   return 0;
}

