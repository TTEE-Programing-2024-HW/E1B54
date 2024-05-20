// =============================================================================
// File Name: HW3.c
// Date: 2024/05/09 
// =============================================================================
// Who      When        Why
// XinRong  2024/05/09 Created HW3.c
// XinRong  2024/05/09 End of questions 1, 2 and 6
// XinRong  2024/05/10 Question 3: Initial test
// XinRong  2024/05/11 Question 4: Initial test
// XinRong  2024/05/20 Question 4 is completed and the rest is completed, and the annotations and lessons are added
// =============================================================================
#include <stdlib.h>
#include <stdio.h>
int ar[9][9],first = 0; //Declare 9*9 array 

void homework1 (void) //Declare function 1 
{

	printf("           11111111111111111111111111         \n");
	printf("          1111111111111111111111111111        \n");
	printf("        11111111111111111111111111111111      \n");
	printf("       1111111111111111111111111111111111     \n");
	printf("          1111         1         1111         \n");
	printf("          1111         1         1111         \n");
	printf("          1111         1         1111         \n");
	printf("          1  1         1         1  1         \n");
	printf("          1111111111111111111111111111        \n");
	printf("          11          111           11        \n");
	printf("          11          111           11        \n");
	printf("          11          111           11        \n");
	printf("          11  *****  11111   ****   11        \n");
	printf("         1____________________________1       \n");
	printf("        111__________________________111      \n");
	printf("       11111________________________11111     \n");
	printf("      1111111______________________1111111    \n");
	printf("     111111111____________________111111111   \n");
	printf("    11111111111------------------11111111111  \n");
	printf("    *  *  *  *  *  *  *  *  *  *  *  *  *  *  \n");
	printf("    |  |  |  |  |  |  |  |  |  |  |  |  |  |  \n");
	system("pause");
	system("cls");//Clear the screen 
	
	int a, count;
 
	for(a=0;a<3;a++) //Ask for your password up to three times
	{
		int input=0;

		printf("Please key in 4 numbers : ");
		scanf("%d", &input);                   //Input password
		printf("Your numbers is :%d\n",input);
		
		if(input==2024)
		{
			homework2(); //If the password is correct, skip to function 2 
			return 0;
		}
		else
		{
			printf("Key in numbers is error.\n");
			count++;
			if (count>=3)
			{
				printf("warning...\n"); //If you enter your password three times, it will be over 
			}
		}
	}
} 

void homework2(void) //Declare function 2 
{
	system("cls"); 

	printf("=========================\n");
	printf("|***[Booking System]****|\n");
	printf("|  a.Available seats    |\n");
	printf("|  b.Arrange for you    |\n"); //Show the Booking System 
	printf("|  c.Choose by yourself |\n");
	printf("|  d.Exit               |\n");
	printf("|***-----------------***|\n");
	printf("=========================\n");
	
	char input; //Declare character 

	printf("INPUT: A/a, B/b, C/c, D/d : ");
	fflush(stdin);  //Clear standard input 
	scanf("%c", &input);
	while(1)
	{
       switch(input)          
	  {
		case 'A':
		case 'a':
			system("cls");  //Input A/a to clear 
			homework3();    //Call function 3 
			break;
		case 'B':
		case 'b':
			homework4();   //Input B/b to call function 4 
			break;
		case 'C':
		case 'c':
			homework5();  //Input C/c to call function 5
			break;
		case 'D':
		case 'd':
			homework6();  //Input D/d to call function 6
	        break;
		default:
			printf("INPUT: A/a, B/b, C/c, D/d : ");
			fflush(stdin);  
			scanf("%c", &input);          
	  }
	}  
}

void homework3(void)   //Declare function 3 
{
   int i,j;
   int count = 0;
	
	if(first == 0)    //Only one random output (random run when first = 0), other output current seat chart (no random run when first = 1)
	{                   
		for(i=0; i<9; i++)          //Default each seat to '-'
		{                        
			for(j=0; j<9; j++)
			{
				ar[i][j] = '-';
			}
		}
		
		while(count < 10)
		{                        //10 random seats are generated from 9*9 seats 
			int x = rand() % 9;
			int y = rand() % 9;
			
			if(ar[x][y] == '-')
			{                     //Prevent duplication 
				ar[x][y] = '*';   //The resulting seat will change from '-' to '*'  
				count++;
			}
		}
		
		first = 1; //Prevent different seating charts
	}

	seat();
	
	system("pause");
	homework2();  //Back Booking System 
	return 0;        

}

void homework4(void) //Declare function 4
{
	int i,j,input,p=0;
	int a,b,count=0;
	char ok;

	for(;;)
	{
		printf("INPUT　SEATS : (1-4)");
		fflush(stdin);
		scanf("%d", &input);
		if (input>=1&&input<=4) //Judgment input should be 1~4
		{
			if(input>=1&&input<=3)
			{
			
				int x = rand() % 9;   //Randomly select seats
				int y = rand() % 9;
				
				if(ar[x][y] != '*')   //If you are satisfied,the seat will change from'@'to'*' 
				{
					while(count < input)
					{
						
						if(ar[x][y] == '-') //Prevent duplication 
						{                   
							ar[x][y] = '@';   //Continuous @ appears when there are 1~3 seats 
							count++;
							y++;
						}
						else
						{
							count = 0;
							x = rand() % 9;  //When a seat has already been selected, a different seat will be created  
							y = rand() % 9;
						}
					}
				}
			}
			
			else if(input==4) //When there are 4 seats
			{
				p=rand()%2; //Have 2 situation 
				
				if(p=0)
				{
					int x = rand() % 9;
					int y = rand() % 9;  //Randomly select seats
					
					if(ar[x][y] != '*')   //If you are satisfied,the seat will change from'@'to'*' 
					{
						while(count < input)
						{
							
							if(ar[x][y] == '-' && ar[x][y+1] == '-' && ar[x][y+2] == '-' && ar[x][y+3] == '-') //Prevent duplication 
							{                                                        
								ar[x][y] = '@';    //4 seats in a row
								count++;
								y++;
							}
							else
							{
								count = 0;
								x = rand() % 9;  //When the seat has been selected,other seats will be regenerated 
								y = rand() % 9;
							}
						}
					}
				}
				else if(p=1)
				{
					int x = rand() % 9;
					int y = rand() % 9;
					
					if(ar[x][y] != '*')    //If you lose, the seat will change from '@' to '*'  
					{
						while(count < input)
						{							
							ar[x][y] = '@';
							ar[x][y+1] = '@';        //4 seats arranged in 2 rows,2 in the front and 2 in the back 
							ar[x+1][y] = '@';
							ar[x+1][y+1] = '@';
							count++;
						}
					}	
				}
				else
			   {
				continue;  //If not 1~4,re-enter 
			   }

            }
				seat();
				
				for(;;)
				{
					printf("Are you satisfied with the seats?(Y/N) ");
					fflush(stdin);
					scanf("%c", &ok);
					
					if(ok == 'Y' || ok == 'y')      //If input Y/y to express satisfaction,the seat will change from'@'to'*' 
					{
						for(i=0; i<9; i++)
						{
							for(j=0; j<9; j++)
							{
								if(ar[i][j] == '@')
								{
									ar[i][j] = '*';
								}
							}
						}
						break;
					}
					else if(ok == 'N' || ok == 'n')   //If you enter N/n, you will be not satisfied and will jump back to Available seats
					{
						for(i=0; i<9; i++)
						{
							for(j=0; j<9; j++)
							{
								if(ar[i][j] == '@')   //The selected seat will change from '@' back to '-'  
								{
									ar[i][j] = '-';
								}
							}
						}
						break;
					}
					else
					{
						printf("Input error, please re-enter\n");
						continue;
					}
				}
				
				seat(); //Call seat function 
				
				system("pause");
				homework2(); //Back Booking System 
			    return 0;
			
		}	
	}

}

void homework5(void)  //Declare function 5 
{
	char input[4];   
	int x,y;
	
for(;;)
{
	do
	{ 
	 	printf("INPUT SEATS:[column-row],Enter 0 to finish ");
		fflush(stdin);
		scanf("%s", &input);
		
		y = (int)input[0] - 48 -1;      //Convert ASCII into numbers to calculate columns and rows 
		x = 10 - ((int)input[2] - 48)-1;
		
		if(ar[x][y] == '-')
		{
			ar[x][y] = '@';   //Change from '-' to '@' after choosing your seat 
			printf("Seat selected\n");
			seat();
			system("pause");
			ar[x][y] = '*';   //Change from '@' to '*' after determing your seat
			seat();
			system("pause");
			system("cls");

		}
		else
		{
			printf("Non-vacant seats\n");  //Non-vacant seats are re-elected 
			seat();
		}
    }   
	    while(input[0] != '0'); //Enter 0 to finish
        homework2();  
}
}

void homework6(void)  //Declare function 6 
{
	char input;

	for(;;)
	{
		printf("Continue? (y/n) "); 
		fflush(stdin);  
		scanf("%c", &input);
		if((input=='Y')||(input=='y'))  
		{
			homework2(); //If input Y/y,back Booking System 
			return 0;
		}
		else if((input=='N')||(input=='n'))
		{
	    	exit(EXIT_FAILURE); //If input N/n,finish
		}
		else
		{
			printf("Warring...\n"); //If the input is incorrect, it warns and asks for re-entry 
			continue;   
		}
	}
}
void seat(void)  //Declare seat function 
{
	int i,j,q=9;  //This sub-program displays the columns and rows of the seating chart
	
	printf("\\");
	
	for(i=1; i<=9; i++) //The horizontal section is increased from left to right 
	{
		printf("%d", i);
	}
	printf("\n");
	
	for(i=0; i<9; i++)
	{
		printf("%d", q);
		for(j=0; j<9; j++)
		{
			printf("%c", ar[i][j]);
		}
		printf("\n");
		q--; //The vertical section decreases from top to bottom
	}
}

int main(void)
{
	homework1(); 
}
/*我覺得這次最難的地方就是C選項的部分，
因為我卡在四個位子要排成兩種的排列方式那邊卡很久但後面我就想到了，感覺很有成就感，
然後第二個困難的部分就是要用全英文，因為我覺得我英文不太好，
所以有一些部分我用翻譯但大部分是我自己打的，所以有的語法可能怪怪的，
但我相信之後多打幾次英文應該也會變好*/

