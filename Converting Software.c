#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <windows.h>
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
	printf("\n6.Main menu");
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
	else if(action==3)
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
			result=knot*1.852;
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
	else if(action==6)
	{
		action_bar();
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
	printf("\n 4. Main menu");
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
	else if(which_one==4)
	{
		action_bar();
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
	int action;
	int second_action;
	double nanosecond;
	double microsecond;
	double milisecond;
	double second;
	double minute;
	double hour;
	double day;
	double week;
	double month;
	double calender_year;
	double decade;
	double century;
	double result;
	int cont_or_exit;
	printf("\n........Time........\n");
	printf("\n1.Nanosecond");
	printf("\n2.Microsecond");
	printf("\n3.Milisecond");
	printf("\n4.second");
	printf("\n5.Minute");
	printf("\n6.Hour");
	printf("\n7.Day");
	printf("\n8.Week");
	printf("\n9.Month");
	printf("\n10.Calender Year");
	printf("\n11.Decade");
	printf("\n12.Century");
	printf("\n13.Main menu");
	printf("\n\n Enter Action: ");
	scanf("%d" , &action);
	if(action==1)
	{
		printf("\nNanosecond Convert to ..........");
		printf("\n1.Microsecond");
		printf("\n2.Milisecond");
		printf("\n3.second");
		printf("\n4.Minute");
		printf("\n5.Hour");
		printf("\n6.Day");
		printf("\n7.Week");
		printf("\n8.Month");
		printf("\n9.Calender Year");
		printf("\n10.Decade");
		printf("\n11.Century");
		printf("\n\n Enter Action: ");
		scanf("%d" , &second_action);
		if(second_action==1)
		{
			printf("\nNanosecond Convert to Microsecond");
			printf("\nEnter Nanosecond: ");
			scanf("%lf" , &nanosecond);
			result=nanosecond/1000;
			printf("\nMicrosecond: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###\n");
				time();
			}
		}
		else if(second_action==2)
		{
			printf("\nNanosecond Convert to Milisecond");
			printf("\nEnter Nanosecond: ");
			scanf("%lf" , &nanosecond);
			result=nanosecond/1e+6;
			printf("\nMilisecond: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###\n");
				time();
			}
		}
		else if(second_action==3)
		{
			printf("\nNanosecond Convert to Second");
			printf("\nEnter Nanosecond: ");
			scanf("%lf" , &nanosecond);
			result=nanosecond/1e+9;
			printf("\nSecond: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###\n");
				time();
			}
		}
		else if(second_action==4)
		{
			printf("\nNanosecond Convert to Minute");
			printf("\nEnter Nanosecond: ");
			scanf("%lf" , &nanosecond);
			result=nanosecond/6e+6;
			printf("\nMinute: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###\n");
				time();
			}
		}
		else if(second_action==5)
		{
			printf("\nNanosecond Convert to Hour");
			printf("\nEnter Nanosecond: ");
			scanf("%lf" , &nanosecond);
			result=nanosecond/3.6e+12;
			printf("\nHour: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###\n");
				time();
			}
		}
		else if(second_action==6)
		{
			printf("\nNanosecond Convert to Day");
			printf("\nEnter Nanosecond: ");
			scanf("%lf" , &nanosecond);
			result=nanosecond/8.64e+13;
			printf("\nDay: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###\n");
				time();
			}
		}
		else if(second_action==7)
		{
			printf("\nNanosecond Convert to Week");
			printf("\nEnter Nanosecond: ");
			scanf("%lf" , &nanosecond);
			result=nanosecond/6.048e+14;
			printf("\nWeek: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###\n");
				time();
			}
		}
		else if(second_action==8)
		{
			printf("\nNanosecond Convert to Month");
			printf("\nEnter Nanosecond: ");
			scanf("%lf" , &nanosecond);
			result=nanosecond/2.628e+15;
			printf("\nMonth: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###\n");
				time();
			}
		}
		else if(second_action==9)
		{
			printf("\nNanosecond Convert to Calender Year");
			printf("\nEnter Nanosecond: ");
			scanf("%lf" , &nanosecond);
			result=nanosecond/3.154e+16;
			printf("\nCalender Year: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###\n");
				time();
			}
		}
		else if(second_action==10)
		{
			printf("\nNanosecond Convert to Decade");
			printf("\nEnter Nanosecond: ");
			scanf("%lf" , &nanosecond);
			result=nanosecond/3.154e+17;
			printf("\nDecade: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###\n");
				time();
			}
		}
		else if(second_action==11)
		{
			printf("\nNanosecond Convert to Century");
			printf("\nEnter Nanosecond: ");
			scanf("%lf" , &nanosecond);
			result=nanosecond/3.154e+18;
			printf("\nCentury: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###\n");
				time();
			}
		}
		else{
			printf("\n\n\t###Invalid Action###\n");
			printf("\n##Try again##\n");
			time();
		}
	}
	else if(action==2)
	{
		printf("\nMicrosecond Convert to ..........");
		printf("\n1.Nanosecond");
		printf("\n2.Milisecond");
		printf("\n3.Second");
		printf("\n4.Minute");
		printf("\n5.Hour");
		printf("\n6.Day");
		printf("\n7.Week");
		printf("\n8.Month");
		printf("\n9.Calender Year");
		printf("\n10.Decade");
		printf("\n11.Century");
		printf("\n\n Enter Action: ");
		scanf("%d" , &second_action);
		if(second_action==1)
		{
			printf("\nMicrosecond Convert to Nanosecond");
			printf("\nEnter Microsecond: ");
			scanf("%lf" , &microsecond);
			result=microsecond*1000;
			printf("\nNanosecond: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###");
				printf("\n##Try Again##");
				time();
			}
		}
		else if(second_action==2)
		{
			printf("\nMicrosecond Convert to Milisecond");
			printf("\nEnter Microsecond: ");
			scanf("%lf" , &microsecond);
			result=microsecond/1000;
			printf("\nMilisecond: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###");
				printf("\n##Try Again##");
				time();
			}
		}
		else if(second_action==3)
		{
			printf("\nMicrosecond Convert to Second");
			printf("\nEnter Microsecond: ");
			scanf("%lf" , &microsecond);
			result=microsecond/1e+6;
			printf("\nSecond: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###");
				printf("\n##Try Again##");
				time();
			}
		}
		else if(second_action==4)
		{
			printf("\nMicrosecond Convert to Minute");
			printf("\nEnter Microsecond: ");
			scanf("%lf" , &microsecond);
			result=microsecond/6e+7;
			printf("\nMinute: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###");
				printf("\n##Try Again##");
				time();
			}
		}
		else if(second_action==5)
		{
			printf("\nMicrosecond Convert to Hour");
			printf("\nEnter Microsecond: ");
			scanf("%lf" , &microsecond);
			result=microsecond/3.6e+9;
			printf("\nHour: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###");
				printf("\n##Try Again##");
				time();
			}
		}
		else if(second_action==6)
		{
			printf("\nMicrosecond Convert to Day");
			printf("\nEnter Microsecond: ");
			scanf("%lf" , &microsecond);
			result=microsecond/8.64e+10;
			printf("\nDay: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###");
				printf("\n##Try Again##");
				time();
			}
		}
		else if(second_action==7)
		{
			printf("\nMicrosecond Convert to Week");
			printf("\nEnter Microsecond: ");
			scanf("%lf" , &microsecond);
			result=microsecond/6.048e+11;
			printf("\nWeek: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###");
				printf("\n##Try Again##");
				time();
			}
		}
		else if(second_action==8)
		{
			printf("\nMicrosecond Convert to Month");
			printf("\nEnter Microsecond: ");
			scanf("%lf" , &microsecond);
			result=microsecond/2.628e+12;
			printf("\nMonth: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###");
				printf("\n##Try Again##");
				time();
			}
		}
		else if(second_action==9)
		{
			printf("\nMicrosecond Convert to Calender Year");
			printf("\nEnter Microsecond: ");
			scanf("%lf" , &microsecond);
			result=microsecond/3.154e+13;
			printf("\nCalender Year: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###");
				printf("\n##Try Again##");
				time();
			}
		}
		else if(second_action==10)
		{
			printf("\nMicrosecond Convert to Decade");
			printf("\nEnter Microsecond: ");
			scanf("%lf" , &microsecond);
			result=microsecond/3.154e+14;
			printf("\nDecade: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###");
				printf("\n##Try Again##");
				time();
			}
		}
		else if(second_action==11)
		{
			printf("\nMicrosecond Convert to Century");
			printf("\nEnter Microsecond: ");
			scanf("%lf" , &microsecond);
			result=microsecond/3.154e+15;
			printf("\nCentury: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\n\n\t###Invalid Action###");
				printf("\n##Try Again##");
				time();
			}
		}
		else{
			printf("\n\n\t###Invalid Action###\n");
			printf("\n##Try again##");
			time();
		}
	}
	else if(action==3)
	{
		printf("\nMilisecond Convert to ..........");
		printf("\n1.Nanosecond");
		printf("\n2.Microsecond");
		printf("\n3.Second");
		printf("\n4.Minute");
		printf("\n5.Hour");
		printf("\n6.Day");
		printf("\n7.Week");
		printf("\n8.Month");
		printf("\n9.Calender Year");
		printf("\n10.Decade");
		printf("\n11.Century");
		printf("\n\n Enter Action: ");
		scanf("%d" , &second_action);
		if(second_action==1)
		{
			printf("\nMilisecond Convert to Nanosecond");
			printf("\nEnter Milisecond: ");
			scanf("%lf" , &milisecond);
			result=milisecond*1e+6;
			printf("\nNanosecond: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==2)
		{
			printf("\nMilisecond Convert to Microsecond");
			printf("\nEnter Milisecond: ");
			scanf("%lf" , &milisecond);
			result=milisecond*1000;
			printf("\nMicrosecond: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==3)
		{
			printf("\nMilisecond Convert to Second");
			printf("\nEnter Milisecond: ");
			scanf("%lf" , &milisecond);
			result=milisecond/1000;
			printf("\nSecond: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==4)
		{
			printf("\nMilisecond Convert to Minute");
			printf("\nEnter Milisecond: ");
			scanf("%lf" , &milisecond);
			result=milisecond/60000;
			printf("\nMinute: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==5)
		{
			printf("\nMilisecond Convert to Hour");
			printf("\nEnter Milisecond: ");
			scanf("%lf" , &milisecond);
			result=milisecond/3.6e+6;
			printf("\nHour: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==6)
		{
			printf("\nMilisecond Convert to Day");
			printf("\nEnter Milisecond: ");
			scanf("%lf" , &milisecond);
			result=milisecond/8.64e+7;
			printf("\nDay: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==7)
		{
			printf("\nMilisecond Convert to Week");
			printf("\nEnter Milisecond: ");
			scanf("%lf" , &milisecond);
			result=milisecond*6.048+8;
			printf("\nWeek: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==8)
		{
			printf("\nMilisecond Convert to Month");
			printf("\nEnter Milisecond: ");
			scanf("%lf" , &milisecond);
			result=milisecond/2.628e+9;
			printf("\nMonth: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==9)
		{
			printf("\nMilisecond Convert to Calender Year");
			printf("\nEnter Milisecond: ");
			scanf("%lf" , &milisecond);
			result=milisecond/3.154e+10;
			printf("\nCalender year: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==10)
		{
			printf("\nMilisecond Convert to Decade");
			printf("\nEnter Milisecond: ");
			scanf("%lf" , &milisecond);
			result=milisecond/3.154e+11;
			printf("\nDecade: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==11)
		{
			printf("\nMilisecond Convert to Century");
			printf("\nEnter Milisecond: ");
			scanf("%lf" , &milisecond);
			result=milisecond/3.154e+12;
			printf("\nCentury: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\n##Try Again##\n");
				time();
			}
		}
		else{
			printf("\t\n###Invalid Action###\n");
			printf("\n##Try Again##\n");
			time();
		}
	}
	else if(action==4)
	{
		printf("\nSecond Convert to ...........");
		printf("\n1.Nanosecond");
		printf("\n2.Microsecond");
		printf("\n3.Milisecond");
		printf("\n4.Minute");
		printf("\n5.Hour");
		printf("\n6.Day");
		printf("\n7.Week");
		printf("\n8.Month");
		printf("\n9.Calender Year");
		printf("\n10.Decade");
		printf("\n11.Century");
		printf("\n\n Enter Action: ");
		scanf("%d" , &second_action);
		if(second_action==1)
		{
			printf("\nSecond Convert to Nanosecond");
			printf("\nEnter Second: ");
			scanf("%lf" , &second);
			result=second*1e+9;
			printf("\nNanosecond: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==2)
		{
			printf("\nSecond Convert to Microsecond");
			printf("\nEnter Second: ");
			scanf("%lf" , &second);
			result=second*1e+6;
			printf("\nMicrosecond: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==3)
		{
			printf("\nSecond Convert to Milisecond");
			printf("\nEnter Second: ");
			scanf("%lf" , &second);
			result=second*1000;
			printf("\nMilisecond: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==4)
		{
			printf("\nSecond Convert to Minute");
			printf("\nEnter Second: ");
			scanf("%lf" , &second);
			result=second/60;
			printf("\nMinute: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==5)
		{
			printf("\nSecond Convert to Hour");
			printf("\nEnter Second: ");
			scanf("%lf" , &second);
			result=second/3600;
			printf("\nHour: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==6)
		{
			printf("\nSecond Convert to Day");
			printf("\nEnter Second: ");
			scanf("%lf" , &second);
			result=second/86400;
			printf("\nDay: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==7)
		{
			printf("\nSecond Convert to Week");
			printf("\nEnter Second: ");
			scanf("%lf" , &second);
			result=second/604800;
			printf("\nWeek: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==8)
		{
			printf("\nSecond Convert to Month");
			printf("\nEnter Second: ");
			scanf("%lf" , &second);
			result=second/2.628e+6;
			printf("\nMonth: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==9)
		{
			printf("\nSecond Convert to Calender Year");
			printf("\nEnter Second: ");
			scanf("%lf" , &second);
			result=second/3.154e+7;
			printf("\nCalender Year: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==10)
		{
			printf("\nSecond Convert to Decade");
			printf("\nEnter Second: ");
			scanf("%lf" , &second);
			result=second/3.154e+8;
			printf("\nDecade: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==11)
		{
			printf("\nSecond Convert to Century");
			printf("\nEnter Second: ");
			scanf("%lf" , &second);
			result=second/3.154e+9;
			printf("\nCentury: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else{
			printf("\t\n\n###Invalid Action###\n");
			printf("\t\n##Try Again##\n");
			time();
		}
	}
	else if(action==5)
	{
		printf("\nMinute Convert to ............");
		printf("\n1.Nanosecond");
		printf("\n2.Microsecond");
		printf("\n3.Milisecond");
		printf("\n4.Second");
		printf("\n5.Hour");
		printf("\n6.Day");
		printf("\n7.Week");
		printf("\n8.Month");
		printf("\n9.Calender Year");
		printf("\n10.Decade");
		printf("\n11.Century");
		printf("\n\n Enter Action: ");
		scanf("%d" , &second_action);
		if(second_action==1)
		{
			printf("\nMinute Convert to Nanosecond");
			printf("\n\nEnter Minute: ");
			scanf("%lf" , &minute);
			result=minute*6e+10;
			printf("\nNanosecond: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==2)
		{
			printf("\nMinute Convert to Microsecond");
			printf("\n\nEnter Minute: ");
			scanf("%lf" , &minute);
			result=minute*6e+7;
			printf("\nMicrosecond: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==3)
		{
			printf("\nMinute Convert to Milisecond");
			printf("\n\nEnter Minute: ");
			scanf("%lf" , &minute);
			result=minute*60000;
			printf("\nMilisecond: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==4)
		{
			printf("\nMinute Convert to Second");
			printf("\n\nEnter Minute: ");
			scanf("%lf" , &minute);
			result=minute*60;
			printf("\nSecond: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==5)
		{
			printf("\nMinute Convert to Hour");
			printf("\n\nEnter Minute: ");
			scanf("%lf" , &minute);
			result=minute/60;
			printf("\nHour: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==6)
		{
			printf("\nMinute Convert to Day");
			printf("\n\nEnter Minute: ");
			scanf("%lf" , &minute);
			result=minute/1440;
			printf("\nDay: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==7)
		{
			printf("\nMinute Convert to Week");
			printf("\n\nEnter Minute: ");
			scanf("%lf" , &minute);
			result=minute/10080;
			printf("\nWeek: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==8)
		{
			printf("\nMinute Convert to Month");
			printf("\n\nEnter Minute: ");
			scanf("%lf" , &minute);
			result=minute/43800;
			printf("\nMonth: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==9)
		{
			printf("\nMinute Convert to Calender Year");
			printf("\n\nEnter Minute: ");
			scanf("%lf" , &minute);
			result=minute/525600;
			printf("\nCalender Year: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==10)
		{
			printf("\nMinute Convert to Decade");
			printf("\n\nEnter Minute: ");
			scanf("%lf" , &minute);
			result=minute/5.256e+6;
			printf("\nDecade: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else if(second_action==11)
		{
			printf("\nMinute Convert to Century");
			printf("\n\nEnter Minute: ");
			scanf("%lf" , &minute);
			result=minute/5.256e+7;
			printf("\nCentury: %lf" , result);
			printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
		}
		else{
			printf("\t\b\n###Invalid Action###\n");
			printf("\t\n##Try Again##\n");
			time();
		}
	}
	else if(action==6)
	{
        printf("\nHour Convert to ..........");
        printf("\n1.Nanosecond");
        printf("\n2.Microsecond");
        printf("\n3.Milisecond");
        printf("\n4.Second");
        printf("\n5.Minute");
        printf("\n6.Day");
        printf("\n7.Week");
        printf("\n8.Month");
        printf("\n9.Calender Year");
        printf("\n10.Decade");
        printf("\n11.Century");
        printf("\n\n Enter Action: ");
        scanf("%d" , &second_action);
        if(second_action==1)
        {
            printf("\nHour Convert to Nanosecond");
            printf("\n\nEnter Hour: ");
            scanf("%lf" , &hour);
            result=hour*3.6e+12;
            printf("\nNanosecond: %lf" , result);
            printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
        }
        else if(second_action==2)
        {
            printf("\nHour Convert to Microsecond");
            printf("\n\nEnter Hour: ");
            scanf("%lf" , &hour);
            result=hour*3.6e+9;
            printf("\nmicrosecond: %lf" , result);
            printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
        }
        else if(second_action==3)
        {
            printf("\nHour Convert to Milisecond");
            printf("\n\nEnter Hour: ");
            scanf("%lf" , &hour);
            result=hour*3.6e+6;
            printf("\nMilisecond: %lf" , result);
            printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
        }
        else if(second_action==4)
        {
            printf("\nHour Convert to Second");
            printf("\n\nEnter Hour: ");
            scanf("%lf" , &hour);
            result=hour*3600;
            printf("\nSecond: %lf" , result);
            printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
        }
        else if(second_action==5)
        {
            printf("\nHour Convert to Minute");
            printf("\n\nEnter Hour: ");
            scanf("%lf" , &hour);
            result=hour*60;
            printf("\nMinute: %lf" , result);
            printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
        }
        else if(second_action==6)
        {
            printf("\nHour Convert to Day");
            printf("\n\nEnter Hour: ");
            scanf("%lf" , &hour);
            result=hour/24;
            printf("\nDay: %lf" , result);
            printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
        }
        else if(second_action==7)
        {
            printf("\nHour Convert to Week");
            printf("\n\nEnter Hour: ");
            scanf("%lf" , &hour);
            result=hour/168;
            printf("\nWeek: %lf" , result);
            printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
        }
        else if(second_action==8)
        {
            printf("\nHour Convert to Month");
            printf("\n\nEnter Hour: ");
            scanf("%lf" , &hour);
            result=hour/730;
            printf("\nMonth: %lf" , result);
            printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
        }
        else if(second_action==9)
        {
            printf("\nHour Convert to Calender Year");
            printf("\n\nEnter Hour: ");
            scanf("%lf" , &hour);
            result=hour/8760;
            printf("\nCalender Year: %lf" , result);
            printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
        }
        else if(second_action==10)
        {
            printf("\nHour Convert to Decade");
            printf("\n\nEnter Hour: ");
            scanf("%lf" , &hour);
            result=hour/87600;
            printf("\nDecade: %lf" , result);
            printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
        }
        else if(second_action==11)
        {
            printf("\nHour Convert to Century");
            printf("\n\nEnter Hour: ");
            scanf("%lf" , &hour);
            result=hour/876000;
            printf("\nCentury: %lf" , result);
            printf("\n\nIf you want to try again enter [1] or enter [0] to main menu");
			scanf("%d" , &cont_or_exit);
			if(cont_or_exit==1)
			{
				time();
			}
			else if(cont_or_exit==0)
			{
				action_bar();
			}
			else{
				printf("\t\n\n###Invalid Action###\n");
				printf("\t\n##Try Again##\n");
				time();
			}
        }
        else{
            printf("\t\n\n###Invalid Action###\n");
			printf("\t\n##Try Again##\n");
			time();
        }
	}
	else if(action==7)
	{

	}
	else if(action==8)
	{

	}
	else if(action==9)
	{

	}
	else if(action==10)
	{

	}
	else if(action==11)
	{

	}
	else if(action==12)
	{

	}
	else if(action==13)
	{
		action_bar();
	}
	else{
		printf("\n\n\t###Invalid Action###\n");
		printf("\n##Try Again##\n");
		time();
	}
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
	printf("\nEnter your first number: ");
	scanf("%lf" , &num1);
	printf("\nEnetr your oparetor: ");
	scanf(" %c" , &op);
	printf("\nEnter your second number: ");
	scanf("%lf" , &num2);
	if(op=='+')
	{
		answer=num1+num2;
		printf("\n\tAnswer: %lf" , answer);
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
		printf("\n\tAnswer: %lf" , answer);
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
		printf("\n\tAnswer: %lf" , answer);
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
		printf("\n\tAnswer: %lf" , answer);
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
	system("color 00");

	int which_one;
	int cont_or_exit;

	//greatings();       /*now what wil i do ??*/
	printf("\n\n");
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
	printf("\n 11.Speed"); //done
	printf("\n 12.Temperature"); //done
	printf("\n 13.Time");
	printf("\n 14.Volume");
	printf("\n 15.Number Conversion");
	printf("\n 16.Calculator"); //done
	//printf("\n 17.")
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
