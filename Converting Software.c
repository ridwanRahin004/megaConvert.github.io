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
	double square_yard;
	double square_foot;
	double square_inch;
	double hectare;
	int cont_or_menu;
	printf("\n\n...........Area...........\n\n");
	printf("\n 1.Square kilometer");
	printf("\n 2.Square meter");
	printf("\n 3.Square mile");
	printf("\n 4.Square yard");
	printf("\n 5.Square foot");
	printf("\n 6.Square inch");
	printf("\n 7.Hectare");
	printf("\n 8.main menu");
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
				printf("\nEnter Square kilometer: ");
				scanf("%lf" , &square_kilometer);
				printf("\nSquare meter: %lf" , square_kilometer*1*pow(10,9)+6);          ////
				printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==2)
		{
				printf("\n\tSquare kilometer Convert to Square mile\n");
				printf("\nEnter Square kilometer: ");
			 scanf("%lf" , &square_kilometer);
			 printf("\nSquare mile: %lf" , square_kilometer/2.59);
			 printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==3)
		{
				printf("\n\tSquare kilometer Convert to Square yard\n");
				printf("\nEnter Square kilometer: ");
			 scanf("%lf" , &square_kilometer);
			 printf("\nSquare yard: %lf" , square_kilometer*1.196*pow(10,9)+6);       ////
			 printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==4)
		{
				printf("\n\tSquare kilometer Convert to Square foot\n");
				printf("\nEnter Square kilometer: ");
			 scanf("%lf" , &square_kilometer);
			 printf("\nSquare foot: %lf" , square_kilometer*1.076*pow(10,9)+7);       ////
			 printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==5)
		{
				printf("\n\tSquare kilometer Convert to Square inch\n");
				printf("\nEnter Square kilometer: ");
			 scanf("%lf" , &square_kilometer);
			 printf("\nSquare inch: %lf" , square_kilometer*1.55*pow(10,9)+9);          ////////
			 printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==6)
		{
				printf("\n\tSquare kilometer Convert to Hectare\n");
				printf("\nEnter Square kilometer: ");
			 scanf("%lf" , &square_kilometer);
			 printf("\nHectare: %lf" , square_kilometer*100);
			 printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==7)
		{
				printf("\n\tSquare kilometer Convert to Acre\n");
				printf("\nEnter Square kilometer: ");
			 scanf("%lf" , &square_kilometer);
			 printf("\nAcre: %lf" , square_kilometer*247);
			 printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
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
			printf("\nEnter Square meter: ");
			scanf("%lf" , &square_meter);
			printf("\nSquare kilometer: %lf" , square_meter/pow(10,9)+6);
			printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==2)
		{
			printf("\nSquare meter Convert to Square mile\n");
			printf("\nEnter Square meter: ");
			scanf("%lf" , &square_meter);
			printf("\nSquare mile: %lf" , square_meter/2.59*pow(10,9)+6);
			printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==3)
		{
			printf("\nSquare meter Convert to Square yard\n");
			printf("\nEnter Square meter: ");
			scanf("%lf" , &square_meter);
			printf("\nSquare yard: %lf" , square_meter/2.59*pow(10,9)+6);
			printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==4)
		{
			printf("\nSquare meter Convert to Square foot\n");
			printf("\nEnter Square meter: ");
			scanf("%lf" , &square_meter);
			printf("\nSquare foot: %lf" , square_meter*10.764);
			printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==5)
		{
			printf("\nSquare meter Convert to Square inch\n");
			printf("\nEnter Square meter: ");
			scanf("%lf" , &square_meter);
			printf("\nSquare inch: %lf" , square_meter*1550);
			printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==6)
		{
			printf("\nSquare meter Convert to Hectare\n");
			printf("\nEnter Square meter: ");
			scanf("%lf" , &square_meter);
			printf("\nHectare: %lf" , square_meter/10000);
			printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==7)
		{
			printf("\nSquare meter Convert to Acre\n");
			printf("\nEnter Square meter: ");
			scanf("%lf" , &square_meter);
			printf("\nAcre: %lf" , square_meter/4047);
			printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
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
			printf("\nEnter Square meter: ");
			scanf("%lf" , &square_mile);
			printf("\nSquare kilometer: %lf" , square_mile/pow(10,9)+6);
			printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==2)
		{
			printf("\nSquare mile Convert to Square meter\n");
			printf("\nEnter Square meter: ");
			scanf("%lf" , &square_mile);
			printf("\nSquare meter: %lf" , square_mile/2.59*pow(10,9)+6);
			printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==3)
		{
			printf("\nSquare mile Convert to Square yard\n");
			printf("\nEnter Square meter: ");
			scanf("%lf" , &square_mile);
			printf("\nSquare yard: %lf" , square_mile/2.59*pow(10,9)+6);
			printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==4)
		{
			printf("\nSquare mile Convert to Square foot\n");
			printf("\nEnter Square meter: ");
			scanf("%lf" , &square_mile);
			printf("\nSquare foot: %lf" , square_mile*10.764);
			printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==5)
		{
			printf("\nSquare mile Convert to Square inch\n");
			printf("\nEnter Square meter: ");
			scanf("%lf" , &square_mile);
			printf("\nSquare inch: %lf" , square_mile*1550);
			printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==6)
		{
			printf("\nSquare mile Convert to Hectare\n");
			printf("\nEnter Square meter: ");
			scanf("%lf" , &square_mile);
			printf("\nHectare: %lf" , square_mile/10000);
			printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
		else if(which_one_point_two==7)
		{
			printf("\nSquare mile Convert to Acre\n");
			printf("\nEnter Square meter: ");
			scanf("%lf" , &square_mile);
			printf("\nAcre: %lf" , square_mile/4047);
			printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
	}
	else if(which_one==4)
	{
		printf("\n Square yard Convert to........");
		printf("\n 1.Square kilometer");
		printf("\n 2.Square meter");
		printf("\n 3.Square mile");
		printf("\n 4.Square foot");
		printf("\n 5.Square inch");
		printf("\n 6.Hectare");
		printf("\n 7.Hectare");
		scanf("%d" , &which_one_point_two);
		if(which_one_point_two==1)
		{
			printf("\nSquare yard Convert to Square kilometer");
			printf("\nEnter Square yard: ");
			scanf("%lf" , &square_yard);
			printf("\nSquare kilometer: %lf" , square_yard/1.196e+6);  //AIJAGA THIKE KLK SORU KORBO
			printf("\nIf you want to want to try again enter [1] or [0] to main menu");
				scanf("%d" , &cont_or_menu);
				if(cont_or_menu==1)
				{
					area();
				}
				else if(cont_or_menu==0)
				{
					action_bar();
				}
		}
	}
	//main();
}
int data_transfer_rate() //2
{
	printf("Hello");
	action_bar();
}
int digital_storage()	//3
{
	printf("Hello");
	action_bar();
}
int energy() //4
{
	printf("Hello");
	action_bar();
}
int frequency() //5
{
	printf("Hello");
	action_bar();
}
int fuel_economy() //6
{
	printf("Hello");
	action_bar();
}
int length() //7
{
	printf("Hello");
	action_bar();
}
int mass() //8
{
	printf("Hello");
	action_bar();
}
int plane_angle() //9
{
	printf("Hello");
	action_bar();
}
int pressue() //10
{
	printf("Hello");
	action_bar();
}
int speed() //11
{
	int try_again_or_main_menu;
	int action;
	int second_chosse;
	double result;
	double miles_per_hour;
	double foot_per_second;
	double meter_per_second;
	double kilometer_per_hour;
	double knot;
	printf("\n\n\t Which Speed do you want to Convert..");
	printf("\n1.Miles per hour");
	printf("\n2.Foot per second");
	printf("\n3.Meter per second");
	printf("\n4.Kilometer per hour");
	printf("\n5.Knot");
	printf("\n\n Enter Acotion: ");
	scanf("%d" , &action);
	if(action==1)
	{
		printf("\n\nMiles per hour Convert to .......");
		printf("\n1.Foot per second");
		printf("\n2.Meter per second");
		printf("\n3.Kilometre per hour");
		printf("\n4.Kont");
		printf("\n\nEnter Action: ");
		scanf("%d" , &second_chosse);
		if(second_chosse==1)
		{
			printf("\n\nMiles per hour Convert to Foot per second");
			printf("\nEnter Miles per hour: ");
			scanf("%lf" , &miles_per_hour);
			result=miles_per_hour*1.467;
			printf("\nFoot per second: %lf" , result);
			printf("\n\n If you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Invalid Answer###\n");
				speed();
			}
		}
		else if(second_chosse==2)
		{
			printf("\n\nMiles per hour Convert to Meter per second");
			printf("\nEnter Miles per hour: ");
			scanf("%lf" , &miles_per_hour);
			result=miles_per_hour/2.237;
			printf("\nMeter per second: %lf" , result);
			printf("\n\n If you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Invalid Answer###\n");
				speed();
			}
		}
		else if(second_chosse==3)
		{
			printf("\n\nMiles per hour Convert to Kilometer per hour");
			printf("\nEnter Miles per hour: ");
			scanf("%lf" , &miles_per_hour);
			result=miles_per_hour*1.609;
			printf("\nKilometer per hour: %lf" , result);
			printf("\n\n If you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Invalid Answer###\n");
				speed();
			}
		}
		else if(second_chosse==4)
		{
			printf("\n\nMiles per hour Convert to Kont");
			printf("\nEnter Miles per hour: ");
			scanf("%lf" , &miles_per_hour);
			result=miles_per_hour/1.151;
			printf("\nKont: %lf" , result);
			printf("\n\n If you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
		}
		else{
			printf("\n\t###Invalid Action###\n");
			speed();
		}
	}
	else if(action==2)
	{
		printf("\n\nFoot per second Convert to ..........");
		printf("\n1.Miles per hour");
		printf("\n2.Meter per second");
		printf("\n3.Kilometer per hour");
		printf("\n4.Knot");
		printf("\n\nEnter Action: ");
		scanf("%d" , &second_chosse);
		if(second_chosse==1)
		{
			printf("Foot per second Convert to Miles per hour");
			printf("\nEnter Foot per second: ");
			scanf("%lf" , &foot_per_second);
			result=foot_per_second/1.467;
			printf("\nMilse per hour: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Invalid Answer###\n");
				speed();
			}
		}
		else if(second_chosse==2)
		{
			printf("Foot per second Convert to Meter per second");
			printf("\nEnter Foot per second: ");
			scanf("%lf" , &foot_per_second);
			result=foot_per_second/3.281;
			printf("\nMeter per second: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Invalid Answer###\n");
				speed();
			}
		}
		else if(second_chosse==3)
		{
			printf("Foot per second Convert to Kilometer per hour");
			printf("\nEnter Foot per second: ");
			scanf("%lf" , &foot_per_second);
			result=foot_per_second*1.097;
			printf("\nKilometer per hour: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Inavlid Answer###\n");
				speed();
			}
		}
		else if(second_chosse==4)
		{
			printf("Foot per second Convert to Knot");
			printf("\nEnter Foot per second: ");
			scanf("%lf" , &foot_per_second);
			result=foot_per_second/1.688;
			printf("\nKnot: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
		}
		else{
			printf("\n\t\n###Invalid Answer###\n");
			speed();
		}
	}
	else if(action=3)
	{
		printf("\n\nMeter per second Convert to .........");
		printf("\n1.Miles per hour");
		printf("\n2.Foot per second");
	 	printf("\n3.Kilometer per hour");
	  	printf("\n4.Knot");
		printf("\n\nEnter Action: ");
		scanf("%d" , &second_chosse);
		if(second_chosse==1)
		{
			printf("\n\nMeter per second Convert to Miles per hour");
			printf("\nEnter Meter per second: ");
			scanf("%lf" , &meter_per_second);
			result=meter_per_second*2.237;
			printf("\nMiles per hour: %lf" , result);
			printf("\n\n If you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Invalid Answer###\n");
				speed();
			}
		}
		else if(second_chosse==2)
		{
			printf("\n\nMeter per second Convert to Foot per second");
			printf("\nEnter Meter per second: ");
			scanf("%lf" , &meter_per_second);
			result=meter_per_second*3.281;
			printf("\nFoot per second: %lf" , result);
			printf("\n\n If you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Invalid Answer###\n");
				speed();
			}
		}
		else if(second_chosse==3)
		{
			printf("\n\nMeter per second Convert to Kilometer per hour");
			printf("\nEnter Meter per second: ");
			scanf("%lf" , &meter_per_second);
			result=meter_per_second*3.6;
			printf("\nKilometer per hour: %lf" , result);
			printf("\n\n If you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Invalid Answer###\n");
				speed();
			}
		}
		else if(second_chosse==4)
		{
			printf("\n\nMeter per second Convert to Knot");
			printf("\nEnter Meter per second: ");
			scanf("%lf" , &meter_per_second);
			result=meter_per_second*1.944;
			printf("\nKnot: %lf" , result);
			printf("\n\n If you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Invalid Answer###\n");
				speed();
			}
		}
		else{
			printf("\n\n\t###Invalid Answer###\n");
			speed();
		}
	}
	else if(action==4)
	{
		printf("\n\nKilometer per hour Convert to .........");
		printf("\n1.Miles per hour");
		printf("\n2.Foot per second");
		printf("\n3.Meter per second");
		printf("\n4.Knot");
		printf("\n\nEnter Action: ");
		scanf("%d" , &second_chosse);
		if(second_chosse==1)
		{
			printf("\n\nKilometer per hour Convert to Miles per hour");
			printf("\nEnter Kilometer per hour: ");
			scanf("%lf" , &kilometer_per_hour);
			result=kilometer_per_hour/1.609;
			printf("\nMilse per hour: %lf" , result);
			printf("\n\n If you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Invalid Answer###\n");
				speed();
			}
		}
		else if(second_chosse==2)
		{
			printf("\n\nKilometer per hour Convert to Foot per second");
			printf("\nEnter Kilometer per hour: ");
			scanf("%lf" , &kilometer_per_hour);
			result=kilometer_per_hour/1.097;
			printf("\n Foot per second: %lf" , result);
			printf("\n\n If you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Invalid Answer###\n");
				speed();
			}
		}
		else if(second_chosse==3)
		{
			printf("\n\nKilometer per hour Convert to Meter per second");
			printf("\nEnter Kilometer per hour: ");
			scanf("%lf" , &kilometer_per_hour);
			result=kilometer_per_hour/3.6;
			printf("\nMeter per second: %lf" , result);
			printf("\n\n If you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Invalid Answer###\n");
				speed();
			}
		}
		else if(second_chosse==4)
		{
			printf("\n\nKilometer per hour Convert to Knot");
			printf("\nEnter Kilometer per hour: ");
			scanf("%lf" , &kilometer_per_hour);
			result=kilometer_per_hour/1.852;
			printf("\nKnot: %lf" , result);
			printf("\n\n If you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Invalid Answer###\n");
				speed();
			}
		}
		else{
			printf("\n\n\t###Invalid Action###\n");
			speed();
		}
	}
	else if(action==5)
	{
		printf("\n\nKnot Convert to .........");
		printf("\n1.Miles per hour");
		printf("\n2.Foot per second");
		printf("\n3.Meter per second");
		printf("\n4.Kilometer per hour");
		printf("\n\nEnter Action: ");
		scanf("%d" , &second_chosse);
		if(second_chosse==1)
		{
			printf("\n\nKnot Convert to Miles per hour");
			printf("\nEnter Knot: ");
			scanf("%lf" , &knot);
			result=knot*1.151;
			printf("\nMilse per hour: %lf" , result);
			printf("\n\n If you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Invalid Answer###\n");
				speed();
			}
		}
		else if(second_chosse==2)
		{
			printf("\n\nKnot Convert to Foot per second");
			printf("\nEnter Knot: ");
			scanf("%lf" , &knot);
			result=knot*1.688;
			printf("\nFoot per second: %lf" , result);
			printf("\n\n If you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Invalid Answer###\n");
				speed();
			}
		}
		else if(second_chosse==3)
		{
			printf("\n\nKnot Convert to Meter per second");
			printf("\nEnter Knot: ");
			scanf("%lf" , &knot);
			result=knot*1.944;
			printf("\nMeter per second: %lf" , result);
			printf("\n\n If you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Invalid Answer###\n");
				speed();
			}
		}
		else if(second_chosse==4)
		{
			printf("\n\nKnot Convert to Kilometer per hour");
			printf("\nEnter knot: ");
			scanf("%lf" , &knot);
			result=Knot*1.852;
			printf("\nKilometer per hour: %lf" , result);
			printf("\n\n If you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &try_again_or_main_menu);
			if(try_again_or_main_menu==1)
			{
				speed();
			}
			else if(try_again_or_main_menu==0)
			{
				action_bar();
			}
			else{
				printf("\n\t\n###Invalid Answer###\n");
				speed();
			}
		}
		else{
			printf("\n\n\t###Invalid Action###\n");
			speed();
		}
	}
	else{
		printf("\n\t\n###Invalid Action###\n");
		printf("\n\t\n##Continue again##\n");
		speed();
	}
}
int temperature() //12
{
	int which_one;
	int convert_to;
	double centrigrade;
	double farenheite;
	double kelvin;
	//char again[4];
	int main_or_exit;
	printf("\n\t\nWhich Temperature do you want to Convert \?\n");
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
			printf("\n if you want to try again enter [1] or enter [0] to go to main menu");
			scanf("%d" , &main_or_exit);
			if(main_or_exit==1)
			{
				temperature();
			}
			else if(main_or_exit==0)
			{
				action_bar();
			}
		}
		else if(convert_to==2)
		{
			printf("\n Enter Centrigrade: ");
			scanf("%lf" , &centrigrade);
			centrigrade=centrigrade+273.15;
			printf("\n Kelvin: %lf" , centrigrade);
			printf("\n if you want to try again enter [1] or enter [0] to go to main menu");
			scanf("%d" , &main_or_exit);
			if(main_or_exit==1)
			{
				temperature();
			}
			else if(main_or_exit==0)
			{
				action_bar();
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
			printf("\n if you want to try again enter [1] or enter [0] to go to main menu");
			scanf("%d" , &main_or_exit);
			if(main_or_exit==1)
			{
				temperature();
			}
			else if(main_or_exit==0)
			{
				action_bar();
			}
		}
		else if(convert_to==2)
		{
			printf("\n Enter Farenheite: ");
			scanf("%lf" , &farenheite);
			farenheite=((farenheite-32)*(5/9))+273.15;
			printf("\n Kelvin: %lf" , farenheite);
			printf("\n if you want to try again enter [1] or enter [0] to go to main menu");
			scanf("%d" , &main_or_exit);
			if(main_or_exit==1)
			{
				temperature();
			}
			else if(main_or_exit==0)
			{
				action_bar();
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
			printf("\n if you want to try again enter [1] or enter [0] to go to main menu");
			scanf("%d" , &main_or_exit);
			if(main_or_exit==1)
			{
				temperature();
			}
			else if(main_or_exit==0)
			{
				action_bar();
			}
		}
		else if(convert_to==2)
		{
			printf("\n Enter Kelvin: ");
			scanf("%lf" , &kelvin);
			kelvin=((kelvin-273.15)*(9/5))+32;
			printf("\n Farenheite: %lf" , kelvin);
			printf("\n if you want to try again enter [1] or enter [0] to go to main menu");
			scanf("%d" , &main_or_exit);
			if(main_or_exit==1)
			{
				temperature();
			}
			else if(main_or_exit==0)
			{
				action_bar();
			}
		}
	}
	else{
		printf("\n Invalid Action");
		printf("\n If you want to try again Enter [1] or enter any key to open main menu");
		scanf("%d" , &main_or_exit);
		if(main_or_exit==1)
		{
			temperature();
		}
		else{
			action_bar();
		}
	}
	//main();
}
int time() //13
{
	printf("Hello");
	action_bar();
}
int volume() //14
{
	printf("Hello");
	action_bar();
}
int numbercoversion()
{
	printf("Hello");
	action_bar();
}
int calculator()
{
	double num1;
	double num2;
	char op;
	double answer;
	int cont_or_menu;
	printf("Enter your first number: ");
	scanf("%lf" , &num1);
	printf("Enetr your oparetor: ");
	scanf(" %c" , &op);
	printf("Enter your second number: ");
	scanf("%lf" , &num2);
	if(op=='+')
	{
		answer=num1+num2;
		printf("Answer: %lf" , answer);
		printf("\n\n If you want to continue enter [1] or [0] to main menu");
		scanf("%d" , &cont_or_menu);
		if(cont_or_menu==1)
		{
			calculator();
		}
		else if(cont_or_menu==0)
		{
			action_bar();
		}
		else{
			printf("\n\n\t###YOU FUCKING DUMB###");
		}
	}
	else if(op=='-')
	{
		answer=num1-num2;
		printf("Answer: %lf" , answer);
		printf("\n\n If you want to continue enter [1] or [0] to main menu");
		scanf("%d" , &cont_or_menu);
		if(cont_or_menu==1)
		{
			calculator();
		}
		else if(cont_or_menu==0)
		{
			action_bar();
		}
		else{
			printf("\n\n\t###YOU FUCKING DUMB###");
		}
	}
	else if(op=='*')
	{
		answer=num1*num2;
		printf("Answer: %lf" , answer);
		printf("\n\n If you want to continue enter [1] or [0] to main menu");
		scanf("%d" , &cont_or_menu);
		if(cont_or_menu==1)
		{
			calculator();
		}
		else if(cont_or_menu==0)
		{
			action_bar();
		}
		else{
			printf("\n\n\t###YOU FUCKING DUMB###");
		}
	}
	else if(op=='/')
	{
		answer=num1/num2;
		printf("Answer: %lf" , answer);
		printf("\n\n If you want to continue enter [1] or [0] to main menu");
		scanf("%d" , &cont_or_menu);
		if(cont_or_menu==1)
		{
			calculator();
		}
		else if(cont_or_menu==0)
		{
			action_bar();
		}
		else{
			printf("\n\n\t###YOU FUCKING DUMB###");
		}
	}
	else if(op=='%')
	{
		//answer=num1 % num2;
		//printf("Answer: %lf" , answer);
		printf("This thing is under Construction");
		printf("\n\n If you want to Continue Enter [1] or enter [0] to go to main menu");
		scanf("%d" , &cont_or_menu);
		if(cont_or_menu==1)
		{
			calculator();
		}
		else if(cont_or_menu==0)
		{
			action_bar();
		}
		else{
			printf("\n\n\t###YOU FUCKING DUMB###");
		}
	}
}
//////////////
int main()
{
	char name[30];
	char how_are_u[100];
	printf("\t\t###Welcome bro###\n");
	printf("\n Enter your name please: ");
	scanf("\n");
	scanf("%[^\n]%*c" , &name);
	printf("Hi %s" , name);
	printf("\n How are you ?\n");
	scanf("\n");
	scanf("%[^\n]%*c" , &how_are_u);
	printf("\nThats %s" , how_are_u);
	printf("\n");
	action_bar();
}
int action_bar()
{
	system("color 06");

	int which_one;
	int cont_or_exit;

	//greatings();       /*now what wil i do ??*/

	printf("...........................................................");
	printf("\t\t\n Which Action do you want to take \?\?\?\?");
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
	printf("\n 15.Number Conversion");
	printf("\n 16.Calculator");
	printf("\n 17.Exit");
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
	else if(which_one==15)
	{
		numbercoversion();
	}
	else if(which_one==16)
	{
		calculator();
	}
	else if(which_one==17)
	{
		printf("\n\n\t Bye ###");
		printf("\n \t Thanks for using this Software");
		printf("\n\t\t made by ridwan rahin");
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
