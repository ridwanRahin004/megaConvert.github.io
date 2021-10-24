#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
int area()	//1
{
	int which_one;
	int which_one_point_two;
	double square_kilometer;
	double square_meter;
	double square_mile;
	printf("\n\n...........Area...........\n\n");
	printf("\n 1.Square kilometer");
	printf("\n 2.Square meter");
	printf("\n 3.Square mile");
	printf("\n 4.Square yard");
	printf("\n 5.Square foot");
	printf("\n 6.Square inch");
	printf("\n 7.Hectare");
	printf("\n 8.Acre");
	printf("\n\n Enter Action: ");
	scanf("%d" , &which_one);
	if(which_one==1)
	{
		printf("\n Square kilometer Convert to.....\n");
		printf("\n 1.Square meter");
		printf("\n 2.Square mile");
		printf("\n 3.Square yard");
		printf("\n 4.Square foot");
		printf("\n 5.Square inch");
		printf("\n 6.Hectare");
		printf("\n 7.Acre");
		printf("\n\n Enter Action: ");
		scanf("%d" , &which_one_point_two);
		if(which_one_point_two==1)
		{
				printf("\n\tSquare kilometer Convert to Square meter\n");
				printf("Enter Square kilometer: ");
				scanf("%lf" , &square_kilometer);
				printf("Square meter: %lf" , square_kilometer*1*pow(10,9)+6);          ////
		}
		else if(which_one_point_two==2)
		{
				printf("\n\tSquare kilometer Convert to Square mile\n");
				printf("Enter Square kilometer: ");
			 scanf("%lf" , &square_kilometer);
			 printf("Square mile: %lf" , square_kilometer/2.59);
		}
		else if(which_one_point_two==3)
		{
				printf("\n\tSquare kilometer Convert to Square yard\n");
				printf("Enter Square kilometer: ");
			 scanf("%lf" , &square_kilometer);
			 printf("Square yard: %lf" , square_kilometer*1.196*pow(10,9)+6);       ////
		}
		else if(which_one_point_two==4)
		{
				printf("\n\tSquare kilometer Convert to Square foot\n");
				printf("Enter Square kilometer: ");
			 scanf("%lf" , &square_kilometer);
			 printf("Square foot: %lf" , square_kilometer*1.076*pow(10,9)+7);       ////
		}
		else if(which_one_point_two==5)
		{
				printf("\n\tSquare kilometer Convert to Square inch\n");
				printf("Enter Square kilometer: ");
			 scanf("%lf" , &square_kilometer);
			 printf("Square inch: %lf" , square_kilometer*1.55*pow(10,9)+9);          ////////
		}
		else if(which_one_point_two==6)
		{
				printf("\n\tSquare kilometer Convert to Hectare\n");
				printf("Enter Square kilometer: ");
			 scanf("%lf" , &square_kilometer);
			 printf("Hectare: %lf" , square_kilometer*100);
		}
		else if(which_one_point_two==7)
		{
				printf("\n\tSquare kilometer Convert to Acre\n");
				printf("Enter Square kilometer: ");
			 scanf("%lf" , &square_kilometer);
			 printf("Acre: %lf" , square_kilometer*247);
		}
	}
	else if(which_one==2)
	{
		printf("\nSquare meter Convert to ......\n");
		printf("\n 1.Square kilometer");
		printf("\n 2.Square mile");
		printf("\n 3.Square yard");
		printf("\n 4.Square foot");
		printf("\n 5.Square inch");
		printf("\n 6.Hectare");
		printf("\n 7.Acre");
		printf("\n\n Enter Action: ");
	 scanf("%d" , &which_one_point_two);
		if(which_one_point_two==1)
		{
			printf("\nSquare meter Convert to Square kilometer\n");
			printf("Enter Square meter: ");
			scanf("%lf" , &square_meter);
			printf("Square kilometer: %lf" , square_meter/pow(10,9)+6);
		}
		else if(which_one_point_two==2)
		{
			printf("\nSquare meter Convert to Square mile\n");
			printf("Enter Square meter: ");
			scanf("%lf" , &square_meter);
			printf("Square mile: %lf" , square_meter/2.59*pow(10,9)+6);
		}
		else if(which_one_point_two==3)
		{
			printf("\nSquare meter Convert to Square yard\n");
			printf("Enter Square meter: ");
			scanf("%lf" , &square_meter);
			printf("Square yard: %lf" , square_meter/2.59*pow(10,9)+6);
		}
		else if(which_one_point_two==4)
		{
			printf("\nSquare meter Convert to Square foot\n");
			printf("Enter Square meter: ");
			scanf("%lf" , &square_meter);
			printf("Square foot: %lf" , square_meter*10.764);
		}
		else if(which_one_point_two==5)
		{
			printf("\nSquare meter Convert to Square inch\n");
			printf("Enter Square meter: ");
			scanf("%lf" , &square_meter);
			printf("Square inch: %lf" , square_meter*1550);
		}
		else if(which_one_point_two==6)
		{
			printf("\nSquare meter Convert to Hectare\n");
			printf("Enter Square meter: ");
			scanf("%lf" , &square_meter);
			printf("Hectare: %lf" , square_meter/10000);
		}
		else if(which_one_point_two==7)
		{
			printf("\nSquare meter Convert to Acre\n");
			printf("Enter Square meter: ");
			scanf("%lf" , &square_meter);
			printf("Acre: %lf" , square_meter/4047);
		}
	}
	else if(which_one==3)
	{
		printf("\nSquare mile Convert to ......\n");
		printf("\n 1.Square kilometer");
		printf("\n 2.Square meter");
		printf("\n 3.Square yard");
		printf("\n 4.Square foot");
		printf("\n 5.Square inch");
		printf("\n 6.Hectare");
		printf("\n 7.Acre");
		printf("\n\n Enter Action: ");
	 scanf("%d" , &which_one_point_two);
		if(which_one_point_two==1)
		{
			printf("\nSquare mile Convert to Square kilometer\n");
			printf("Enter Square meter: ");
			scanf("%lf" , &square_mile);
			printf("Square kilometer: %lf" , square_mile/pow(10,9)+6);
		}
		else if(which_one_point_two==2)
		{
			printf("\nSquare mile Convert to Square meter\n");
			printf("Enter Square meter: ");
			scanf("%lf" , &square_mile);
			printf("Square meter: %lf" , square_mile/2.59*pow(10,9)+6);
		}
		else if(which_one_point_two==3)
		{
			printf("\nSquare mile Convert to Square yard\n");
			printf("Enter Square meter: ");
			scanf("%lf" , &square_mile);
			printf("Square yard: %lf" , square_mile/2.59*pow(10,9)+6);
		}
		else if(which_one_point_two==4)
		{
			printf("\nSquare mile Convert to Square foot\n");
			printf("Enter Square meter: ");
			scanf("%lf" , &square_mile);
			printf("Square foot: %lf" , square_mile*10.764);
		}
		else if(which_one_point_two==5)
		{
			printf("\nSquare mile Convert to Square inch\n");
			printf("Enter Square meter: ");
			scanf("%lf" , &square_mile);
			printf("Square inch: %lf" , square_mile*1550);
		}
		else if(which_one_point_two==6)
		{
			printf("\nSquare mile Convert to Hectare\n");
			printf("Enter Square meter: ");
			scanf("%lf" , &square_mile);
			printf("Hectare: %lf" , square_mile/10000);
		}
		else if(which_one_point_two==7)
		{
			printf("\nSquare mile Convert to Acre\n");
			printf("Enter Square meter: ");
			scanf("%lf" , &square_mile);
			printf("Acre: %lf" , square_mile/4047);
		}
	}
	//main();
}
int data_transfer_rate() //2
{
	printf("Hello");
	main();
}
int digital_storage()	//3
{
	printf("Hello");
	main();
}
int energy() //4
{
	printf("Hello");
	main();
}
int frequency() //5
{
	printf("Hello");
	main();
}
int fuel_economy() //6
{
	printf("Hello");
	main();
}
int length() //7
{
	printf("Hello");
	main();
}
int mass() //8
{
	printf("Hello");
	main();
}
int plane_angle() //9
{
	printf("Hello");
	main();
}
int pressue() //10
{
	printf("Hello");
	main();
}
int speed() //11
{
	printf("Hello");
	main();
}
int temperature() //12
{
	int which_one;
	int convert_to;
	double centrigrade;
	double farenheite;
	double kelvin;
	char again[4];
	int main_or_exit;
	printf("Which Temperature do you want to Convert \?\n");
	printf("\n 1. Centrigrade");
	printf("\n 2. Farenheite");
	printf("\n 3. Kelvin");
	printf("\n");
	scanf("%d" , &which_one);
	if(which_one==1)
	{
		printf("\n Centrigrade Convert to .......\n");
		printf("\n 1. Farenheite");
		printf("\n 2. Kelvin");
		printf("\n Enter 1 to Convert to Farenheite or Enter 2 to Convert to Kelvin");
		scanf("%d" , &convert_to);
		if(convert_to==1)
		{
			printf("\n Enter Centrigrade: ");
			scanf("%lf" , &centrigrade);
			centrigrade=((9*centrigrade)/5)+32;
			printf("\n Farenheite: %lf" , centrigrade);
			printf("\n if you want to try again type yes or type no to main menu");
			gets(again);
			if(strcmp(again,"yes")==0)
			{
				temperature();
			}
			else if(strcmp(again,"no")==0)
			{
				main();
			}
		}
		else if(convert_to==2)
		{
			printf("\n Enter Centrigrade: ");
			scanf("%lf" , &centrigrade);
			centrigrade=centrigrade+273.15;
			printf("\n Kelvin: %lf" , centrigrade);
			printf("\n if you want to try again type yes or type no to main menu");
			gets(again);
			if(strcmp(again,"yes")==0)
			{
				temperature();
			}
			else if(strcmp(again,"no")==0)
			{
				main();
			}
		}
	}
	else if(which_one==2)
	{
		printf("\n Farenheite Convert to ...........");
		printf("\n 1. Centrigrade");
		printf("\n 2. Kelvin");
		printf("\n Enter 1 to Convert to Centrigrade or Enter 2 to Convert to Kelvin");
		scanf("%d" , &convert_to);
		if(convert_to==1)
		{
			printf("\n Enter Farenheite: ");
			scanf("%lf" , &farenheite);
			farenheite=(5*(farenheite-32)/9);
			printf("\n Centrigrade: %lf" , farenheite);
			printf("\n if you want to try again type yes or type no to main menu");
			gets(again);
			if(strcmp(again,"yes")==0)
			{
				temperature();
			}
			else if(strcmp(again,"no")==0)
			{
				main();
			}
		}
		else if(convert_to==2)
		{
			printf("\n Enter Farenheite: ");
			scanf("%lf" , &farenheite);
			farenheite=((farenheite-32)*(5/9))+273.15;
			printf("\n Kelvin: %lf" , farenheite);
			printf("\n if you want to try again type yes or type no to main menu");
			gets(again);
			if(strcmp(again,"yes")==0)
			{
				temperature();
			}
			else if(strcmp(again,"no")==0)
			{
				main();
			}
		}
	}
	else if(which_one==3)
	{
		printf("\n Kelvin Convert to ..........");
		printf("\n 1. Centrigrade");
		printf("\n 2. Farenheite");
		printf("\n Enter 1 to Convert to Centrigrade or Enter 2 to Convert to Farenheite");
		scanf("%d" , &convert_to);
		if(convert_to==1)
		{
			printf("\n Enter Kelvin: ");
			scanf("%lf" , &kelvin);
			kelvin=kelvin-273.15;
			printf("\n Centrigrade: %lf" , kelvin);
			printf("\n if you want to try again type yes or type no to main menu");
			gets(again);
			if(strcmp(again,"yes")==0)
			{
				temperature();
			}
			else if(strcmp(again,"no")==0)
			{
				main();
			}
		}
		else if(convert_to==2)
		{
			printf("\n Enter Kelvin: ");
			scanf("%lf" , &kelvin);
			kelvin=((kelvin-273.15)*(9/5))+32;
			printf("\n Farenheite: %lf" , kelvin);
			printf("\n if you want to try again type [1] or type [0] to main menu");
			scanf("%d" , &again);
			if(again==1)
			{
				temperature();
			}
			else if(again==0)
			{
				main();
			}
		}
	}
	else{
		printf("\n Invalid Action");
		printf("\n If you want to try again Enter [1] or enter any key to exit");
		scanf("%d" , &main_or_exit);
		if(main_or_exit==1)
		{
			main();
		}
		else{
			printf("\n\n\tBye####");
		}
	}
	//main();
}
int time() //13
{
	printf("Hello");
	main();
}
int volume() //14
{
	printf("Hello");
	main();
}
//////////////
int main()
{
	system("color 0");

	int which_one;
	char name[25];
	int cont_or_exit;
	printf("\t\t###Welcome bro###\n");
	printf("\n your name please: ");
	scanf("\n");
	scanf("%[^\n]%*c" , &name);
	printf("Hi %s" , name);
	printf("\n What do you want to do ???");
	printf("\n 1.Area");
	printf("\n 2.Data Transfer Rate");
	printf("\n 3.Digital Storage");
	printf("\n 4.Energy");
	printf("\n 5.Frequency");
	printf("\n 6.Fuel Economy");
	printf("\n 7.Length");
	printf("\n 8.Mass");
	printf("\n 9.Plane Angle");
	printf("\n 10.Pressue");
	printf("\n 11.Speed");
	printf("\n 12.Temperature");
	printf("\n 13.Time");
	printf("\n 14.Volume");
	printf("\n\n Enter Action: ");
	scanf("%d" , &which_one);

	if(which_one==1)
	{
		area();
	}
	else if(which_one==2)
	{
		data_transfer_rate();
	}
	else if(which_one==3)
	{
		digital_storage();
	}
	else if(which_one==4)
	{
		energy();
	}
	else if(which_one==5)
	{
		frequency();
	}
	else if(which_one==6)
	{
		fuel_economy();
	}
	else if(which_one==7)
	{
		length();
	}
	else if(which_one==8)
	{
		mass();
	}
	else if(which_one==9)
	{
		plane_angle();
	}
	else if(which_one==10)
	{
		pressue();
	}
	else if(which_one==11)
	{
		speed();
	}
	else if(which_one==12)
	{
		temperature();
	}
	else if(which_one==13)
	{
		time();
	}
	else if(which_one==14)
	{
		volume();
	}
	else
	{
		printf("Invalid Action!");
		printf("\nEnter [1] to try again or [0] to exit");
		scanf("%d" , &cont_or_exit);
		if(cont_or_exit==1)
		{
			main();
		}
		else if(cont_or_exit==0)
		{
			printf("Bye\n\t Thanks for using this Software###");
		}
		else
		{
			printf("\n\n\tYOU FUCKING DUMB PIECE OF SHIT......GO FUCK YOURSELF###\n\n\n");
		}
	}
	return 0;
}
