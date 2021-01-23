/* C Program To Convert Temperature */
#include<stdio.h>
#include<conio.h>
int main()

{
		
	float fh,cl,kl;
	int ch, exit;	
	while (true)
	{
		printf("\n");
		printf(" All Temperature Conversions");
		printf("\n 1.Fahrenheit to Celsius.");
		printf("\n 2.Celsius to Fahrenheit.");
		printf("\n 3.Celcius to Kelvin.");
		printf("\n 4.Kelvin to Celsius.");
		printf("\n 5.Fahrenheit to Kelvin.");
		printf("\n 6.Exit");
		printf("\n Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n Enter temp in Fahrenheit: ");
				scanf("%f",&fh);
				cl=(fh-32)/1.8;
				printf(" Temp in Celsius: %.3f C:",cl);
				break;
			case 2:
				printf("\n Enter temp in Celsius:  ");
				scanf("%f",&cl);
				fh=(cl*1.8)+32;
				printf(" Temp in Fahrenheit: %.3f F:",fh);
				break;
			case 3:
				printf("\n Enter temp in Celsius:  ");
				scanf("%f",&cl);
				kl=cl+273;
				printf(" Temp in Kelvin: %.3f:",kl);
				break;
			case 4:
				printf("\n Enter temp in Kelvin: ");
				scanf("%f",&kl);
				cl=kl-273;
				printf(" Temp in Celsius: %.3f:",cl);
				break;
			case 5:
				printf("\n Enter temp in Fahrenheit: ");
				scanf("%f",&fh);
				kl= 0.555*(fh-32)+273;
				printf(" Temp in Kelvin: %.3f:",kl);
				break;
			case 6:
				printf("\n");
				exit = 1;
				break;
			default:
				printf("\n Please select a valid choice.");
		
		}
		if (exit == 1)
		{
			break;
		}
	}
    
	
	return 0;
}

