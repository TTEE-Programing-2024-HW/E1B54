// =============================================================================
// File Name: HW3.c
// Date: 2024/05/09 
// =============================================================================
// Who      When        Why
// XinRong  2024/05/09 Created HW3.c
// XinRong  2024/05/09 第126題結束
// XinRong  2024/05/10 第3題初次測試
// XinRong  2024/05/10 第4題初次測試(未打完整) 
// =============================================================================

#include <stdio.h>
int ar[9][9]; //宣告9*9陣列 

void homework1 (void) //宣告函數 1 
{
	//step1
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
	system("pause");//暫停畫面等待使用者案任意鍵
	system("cls");//清除螢幕 
	//step2
	int a, count;
 
	for(a=0;a<3;a++) //最多詢問三次密碼 
	{
		int input=0;

		printf("Please key in 4 numbers : ");
		scanf("%d", &input);              //輸入密碼 
		printf("Your numbers is :%d\n",input);
		
		if(input==2024)
		{
			homework2(); //如果密碼正確則跳到函數 2 
			return 0;
		}
		else
		{
			printf("Key in numbers is error.\n");
			count++;
			if (count>=3)
			{
				printf("warning...\n"); //密碼輸入三次錯誤結束程式 
			}
		}
	}
} //第一題結束 

void homework2(void) //宣告函數 2 
{
	system("cls"); //清除第一題畫面 

	printf("=========================\n");
	printf("|***[Booking System]****|\n");
	printf("|  a.Available seats    |\n");
	printf("|  b.Arrange for you    |\n"); //出現主選單 
	printf("|  c.Choose by yourself |\n");
	printf("|  d.Exit               |\n");
	printf("|***-----------------***|\n");
	printf("=========================\n");
	
	char input; //宣告字元 

	printf("輸入A/a, B/b, C/c, D/d : ");
	fflush(stdin);  //清除暫存區 
	scanf("%c", &input);
	switch(input)          //判斷輸入字元 
	{
		case 'A':
		case 'a':
			system("cls");  //按A a則清除 
			homework3();    //再呼叫函數 3 
			return 0;   
			break;
		case 'B':
		case 'b':
			homework4();   //輸入B b則呼叫函數 4 
			return 0;
			break;
		case 'C':
		case 'c':
			homework5();  //輸入C c則呼叫函數 5
			return 0;
			break;
		case 'D':
		case 'd':
			homework6();  //輸入D d則呼叫函數 6
			return 0;
			break;
		default:
			break;         
	}
}

void homework3(void)   //宣告函數 3 
{
    int i,j;
	int count = 0;
	
	for(i=0; i<9; i++)
	{                        //將每個位子預設為'-' 
		for(j=0; j<9; j++)
		{
			ar[i][j] = '-';
		}
	}
	
	while(count < 10)
	{                       //隨機產生10個 
		int x = rand() % 9;
		int y = rand() % 9;
		
		if(ar[x][y] == '-')
		{                   //防止重複 
			ar[x][y] = '*';
			count++;
		}
	}

	seat();
	
	system("pause");
	homework2();          //跑回主選單 
	return 0;        
}

void homework4(void) //宣告函數 4
{
	int i,j,input;
	int a,b,count=0;

	for(;;)
	{
		printf("請輸入人數 : (1-4)");
		fflush(stdin);
		scanf("%d", &input);
		if (input>=1&&input<=4) //判斷輸入要是1-4
		{
			
			int x = rand() % 9;
			int y = rand() % 9;
			
			if(ar[x][y] != '*')
			{
				while(count < input)
				{
					
					if(ar[x][y] == '-')
					{                     //防止重複 
						ar[x][y] = '@';
						count++;
						y++;
					}
					else
					{
						x = rand() % 9;
						y = rand() % 9;
					}
				}
			}
			
			seat();
			
			system("pause");
			homework2(); //跑回主選單 
			return 0;
		}
		else
		{
			continue;  //若不是1-4則要求重新輸入 
		}
	}
}

void homework5(void)  //宣告函數 5 
{
	
	
	
	
}

void homework6(void)  //宣告函數 6 
{
	char input;

	for(;;)
	{
		printf("Continue? (y/n) "); //詢問是否繼續 
		fflush(stdin);  //清除暫存區 
		scanf("%c", &input);
		if((input=='Y')||(input=='y'))  
		{
			homework2(); //若輸入Y或y則回到主選單 
			return 0;
		}
		else if((input=='N')||(input=='n'))
		{
			return 0; //若輸入N或n則結束 
		}
		else
		{
			printf("Warring...\n"); //輸入錯誤則警告並要求重新輸入 
			continue;   
		}
	}
}


int main(void)
{
	homework1(); //主程式呼叫函數 1 
}

