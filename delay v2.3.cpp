#include <stdio.h>
#include <iostream>

//using namespace std;

void delay(unsigned int x) //delay function
{
	x *= 1000000000 / 2;
	for (int time(0); time < x; time++)
		;
}
int user_name;
int slow = 1; //delay cost
bool close_program(1);
main()
{
	int cnc[1], random_num{}, time_random = 1; //random mumber function
	int showaddress;
	//user
	printf("Arikato's program!\n");
	printf("Hello! What is your name?\n");
	scanf("%[^\n]", &user_name);		 //user
	int password = 1528, input_password; //password of Arikato
	switch (user_name)
	{ // unuse delay if user_name = Arikato
	case 1802072641:
		printf("Hi Mr.Yamauchi\n");
		printf("Please enter password.\n");

		printf("%s:", &user_name);	  //user
		scanf("%d", &input_password); //enter password
		if (input_password == password)
		{ //check password
			slow = 0;
			printf("password = true\n");
			break;
		}
		else
		{
			printf("password = wrong!\n"); //if password is wrong
		}

	default:
		printf("Hello! %s.\n", &user_name);
	}

	while (close_program)
	{ //go back point
		bool exit_function = 1;
		printf("What can I do for you?\n");
		printf("::time:: time function\n");
		printf("::calt:: Calculator function\n");
		printf("::random:: random number function\n");

		if (slow == 0)
			printf("::hack:: Hack function\n"); //show hiden function if user name is Arikato

		printf("::exit:: close program\n");
		int commond;
		printf("%s:", &user_name); //user
		scanf("%s", &commond);	   //choose function
		printf("code=");
		printf("%d\n", commond);
		switch (commond)
		{
		case 1953259875:
			printf("loading function"); //Calculator function begin
			delay(slow);
			printf(".");
			delay(slow);
			printf(".");
			delay(slow);
			printf(".\n");
			delay(slow);

			printf("Wellcome to 'Calculator function'\n");

			while (exit_function)
			{

				printf("::start:: start function\n");
				printf("::exit:: exit function\n");
				printf("%s:", &user_name);
				int answer_calt;
				scanf("%s", &answer_calt);

				switch (answer_calt)
				{
				case 1918989427:
					int number1, number2;
					char action_calt;
					printf("Enter number :");
					scanf("%d", &number1);

					printf("+ - * / \n");
					scanf("%s", &action_calt);

					printf("Enter number :");
					scanf("%d", &number2);
					switch (action_calt)
					{
					case '+':
						printf("%d %c %d = %d \n", number1, action_calt, number2, number1 + number2);
						continue;
					case '-':
						printf("%d %c %d = %d \n", number1, action_calt, number2, number1 - number2);
						continue;
					case '*':
						printf("%d %c %d = %d \n", number1, action_calt, number2, number1 * number2);
						continue;
					case '/':
						printf("%d %c %d = %d \n", number1, action_calt, number2, number1 / number2);
						continue;
					}
				case 1953069157:
					exit_function = 0;
					break;

				} //end of Calculator function begin
			}
			break;
		case 1701669236:
			printf("loading function"); //time function begin
			delay(slow);
			printf(".");
			delay(slow);
			printf(".");
			delay(slow);
			printf(".\n");
			delay(slow);
			printf("Wellcome to 'time function'\n");
			while (exit_function)
			{
				printf("::start:: start function\n");
				printf("::exit:: exit function\n");

				int answer_time;
				printf("%s:", &user_name); //user
				scanf("%s", &answer_time); //choose function

				switch (answer_time)
				{

				case 1953069157:
					exit_function = 0;
					break;

				case 1918989427:
					printf("Has limit of time?(Y/N)\n");
					printf("%s:", &user_name); //user
					char answer_timelimit;
					scanf("%s", &answer_timelimit);

					unsigned int hours_limit, minute_limit, second_limit, allof_limit(24 * 60 * 60);
					if (answer_timelimit == 'Y' || answer_timelimit == 'y')
					{
						printf("hours:"); //enter time limit
						scanf("%d", &hours_limit);
						printf("minute:");
						scanf("%d", &minute_limit);
						printf("second:");
						scanf("%d", &second_limit);

						allof_limit = (hours_limit * 60 * 60) + (minute_limit * 60) + second_limit;
					}

					for (int hours(0), min(0), second(0), second_all(0); second_all <= allof_limit; second_all++, second++)
					{
						if (min == 60)
						{
							hours++;
							min = 0;
						}
						if (hours > 0)
							printf("%d hours \t", hours);

						if (second == 60)
						{
							min++;
							second = 0;
						}

						if (min > 0)
							printf("%d minute\t", min);
						printf("%d second\n", second);
						delay(1);
						system("CLS");
					}
					continue;
				}
			} //end of time function
			break;
		case 1953069157:
			close_program = 0; //out of all
			break;

		case 1684955506:
			printf("loading function"); //random number function begin
			delay(slow);
			printf(".");
			delay(slow);
			printf(".");
			delay(slow);
			printf(".\n");
			delay(slow);
			printf("Wellcome to 'random number function'\n");

			while (exit_function)
			{
				printf("::start:: start function\n");
				printf("::exit:: exit function\n");

				int answer_random;		   //keep answer of random fanction
				printf("%s:", &user_name); //show username
				scanf("%s", &answer_random);

				switch (answer_random)
				{ //check user's answer of function
				case 1953069157:
					exit_function = 0; //exit function
					break;

				case 1918989427:
					int many_random; //keep how many of random number
					do
					{
						printf("How many of number? (1 - 10)\n"); //start random
						printf("%s:", &user_name);				  //show username

						scanf("%d", &many_random);

					} while (many_random > 10 || many_random < 1); //check many

					for (int mr = 0; mr < many_random; mr++)
					{ //do many time
						random_num = 0;
						for (int time = 0; time < 100; time++)
						{
							if (cnc[time] < 0)
								cnc[time] *= -1;
							random_num += cnc[time] * time_random % 100;
							//										printf("random number = %d \n", random_num);
						}
						int random_num2 = random_num;
						while (random_num2 < 100)
						{
							random_num += random_num2 % 10;
							random_num2 / 10;
						}
						while (random_num > 99)
							random_num %= 100;

						printf("%d Number is ::%d::\n", mr + 1, random_num); //end of random and return number
						time_random++;
					}

					continue;
				}
			}
			break; //end of random punction

		case 1801675112:
			if (slow == 1)
				continue; //hack function begin
			while (exit_function)
			{
				printf("::start:: Hack function\n");
				printf("::exit:: exit function\n");

				printf("!!Warning!! this program may error if start this function\n");

				int answer_hack;		   //keep answer of Hack fanction
				printf("%s:", &user_name); //show username
				scanf("%s", &answer_hack);

				switch (answer_hack)
				{ //check user's answer of function
				case 1953069157:
					exit_function = 0; //exit function
					break;

				case 1918989427:
					unsigned int limit_hack = 100000; // limit of loop hack
					int x_hack[1];
					unsigned int num_hack[10] = {};
					for (int time = 0; time < limit_hack; time++)
					{ //loop hack
						if (x_hack[time] % 10 >= 0)
						{									 //check num !< 0
							printf("%d", x_hack[time] % 10); //show number
							num_hack[x_hack[time] % 10]++;	 //keep number
						}
						else
							time++;
					}
					printf("\ncode=");
					for (int time = 0; time < 10; time++)
					{ //show all number
						printf("%x", num_hack[time]);
					}

					printf("\n");
				}
				//		break;s
			}
		}
		if (close_program)
		{
			printf("::going back::\n");
			delay(slow);
			printf(" please wait");
			delay(slow);
			printf(".");
			delay(slow);
			printf(".");
			delay(slow);
			printf(".\n");
			delay(slow);
			printf("\nSearching ");
			delay(slow);
			printf("=");
			delay(slow);
			printf("0x7846f");
			delay(slow);
			printf("\nuser code ");
			delay(slow);
			printf("= ");
			delay(slow);
			printf("%d", &showaddress);
			delay(slow);
			system("CLS");
			continue; //go back point
		}
		if (!(close_program))
		{
			printf("::close the program::");
			delay(slow);
			printf("\nplease ");
			delay(slow);
			printf("wait");
			delay(slow);
			printf(".");
			delay(slow);
			printf(".");
			delay(slow);
			printf(".");
			delay(slow);
			printf(".");
			delay(slow);
			printf("\nuser code");
			delay(slow);
			printf("=");
			delay(slow);
			printf("%d", &user_name);
			delay(slow);
			printf("\ncode");
			delay(slow);

			printf("=");
			delay(slow);
			printf("0x475631");
			delay(slow);
			printf("\nending sore");
			delay(slow);
			printf("=");
			delay(slow);
			printf("7");
			delay(slow);
			printf("3");
			delay(slow);
			printf("8");
			delay(slow);
			printf("t");
			delay(slow);
			printf("\nclosed...");
			delay(slow);
			delay(slow);
			delay(slow);
			delay(slow);
		}
	}
}
