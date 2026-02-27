#include <stdio.h>

int main()
{
    int year, reminder;

		/*
		    
    reminder = year % 7 ;
    if(reminder == 1){
    	printf("year is leaf");
	}
	else 
	printf("NOT A LEAF YEAR");
	
	*/

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("Leap Year");
    else if (year % 100 == 0)
        printf("Not a Leap Year");
    else if (year % 4 == 0)
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;
}

