// =============================================================================
// File Name: HW2.c
// Date: 2024/05/04 
// =============================================================================
// Who      When        Why
// XinRong  2024/05/04 Created HW2.c
// XinRong  2024/05/04 第一題結束 
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
	int a, count;

	for(a=0;a<3;a++) //最多詢問三次密碼 
	{
		int input=0;

		printf("Please key in 4 numbers :");
		scanf("%d", &input);
		printf("Your numbers is :%d\n",input);
		
		if(input==2024)
		{
			homework2(); //如果密碼正確則跳到函數 2 
		}
		else
		{
			printf("Key in numbers is error.\n");
			count++;
			if (count>=3)
			{
				printf("warning...\n"); //密碼輸入三次錯誤結束程式 
				return 0;
			}
		}
	}
} //第一題結束 

int main(void)
{
	homework1(); //主程式呼叫函數一 
}

