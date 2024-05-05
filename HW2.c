// =============================================================================
// File Name: HW2.c
// Date: 2024/05/04 
// =============================================================================
// Who      When        Why
// XinRong  2024/05/04 Created HW2.c
// XinRong  2024/05/04 第一題結束 
// XinRong  2024/05/05 第245題結束
// XinRong  2024/05/05 第3題結束  
// =============================================================================

#include <stdio.h>

void homework1 (void) //宣告函數 1 
{
	//step1
	printf(" 111111111111111111111111111                   \n");
	printf("11111111111111111111111111111                  \n");
	printf("111111111111   111111111111111                 \n");
	printf("1111111111       1111111111111                 \n");
	printf("1111                    1111                   \n");
	printf("11  ||||||||    ||||||||| 11       00    00    \n");
	printf("11    11111       11111   11      00  00  00   \n");
	printf("11    11 11       11 11   11      00      00   \n");
	printf("11     111         111    11       00    00    \n");
	printf("11            111         11         0000      \n");
	printf("11            111         11                   \n");
	printf("11            111         11     EEEE  11  BBBB\n");
	printf("11  *****   11111   ****  11     E     11  B  B\n");
	printf("11                        11     EEEE  11  BBBB\n");
	printf("11                        11     E     11  B  B\n");
	printf("11        1111111        111     EEEE  11  BBBB\n");
	printf("111    11         11    1111                   \n");
	printf("1111     11     11     111111    55555  44   44\n");
	printf("11111       11111     1111111    55     44   44\n");
	printf("1111111              111111111   55555  4444444\n");
	printf("111111111   1 1 1   1111111111      55       44\n");
	printf("1111111111          11111111111  55555       44\n");
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

	printf("-------------------\n");
	printf("| *************** |\n");
	printf("|  a.畫出三角形   |\n");
	printf("|  b.顯示乘法表   |\n"); //出現主選單 
	printf("|  c.結束         |\n");
	printf("| *************** |\n");
	printf("-------------------\n");
	
	char input; //宣告字元 

	printf("輸入A/a, B/b, C/c : ");
	fflush(stdin);  //清除暫存區 
	scanf("%c", &input);
	switch(input)          //判斷輸入字元 
	{
		case 'A':
		case 'a':
			system("cls");  //按A a則清除 
			homework3();  //再呼叫函數 3 
			return 0;   
			break;
		case 'B':
		case 'b':
			homework4();   //輸入B b則呼叫函數 4 
			return 0;
			break;
		case 'C':
		case 'c':
			homework5();   //輸入C c則呼叫函數 5
			return 0;
			break;
		default:
			break;         
	}
}

void homework3(void)   //宣告函數 3 
{
    char input,k;
    int i,j;

    printf("請輸入a-n : ");
    fflush(stdin);  //清除暫存區 
	scanf("%c",&input);
	for(i=input;i>='a';i--) //i=input一開始輸入的字元,若i>=a跑進迴圈,每層字母由右到左遞減至a(控制印出的行數) 
	{
		for(j=0;j<=i-'a';j++) //控制空白數量  
		{
			printf(" ");
		}
		for(k=i;k<=input;k++) //控制印出的字元 
		{
			printf("%c",k);
		}
		printf("\n");
	}
	system("pause");
	homework2(); //跑回主選單 
	return 0;        
}

void homework4(void) //宣告函數 4
{
	int input;
	int a,b;

	for(;;)
	{
		printf("輸入數字 1~9 :");
		scanf("%d", &input);
		if (input>=1&&input<=9) //判斷輸入要是1-9 
		{
			for(a=1;a<=input;a++) //a初始值=1;當a<=input,跑進迴圈 
			{
				b=a;
				printf("%d*%d=%d ",a,b,a*b);
				printf("\n");
			}
			system("pause");
			homework2(); //跑回主選單 
			return 0;
		}
		else
		{
			continue;  //若不是1-9則要求重新輸入 
		}
	}
}

void homework5(void)  //宣告函數 5 
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

