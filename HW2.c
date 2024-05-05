// =============================================================================
// File Name: HW2.c
// Date: 2024/05/04 
// =============================================================================
// Who      When        Why
// XinRong  2024/05/04 Created HW2.c
// XinRong  2024/05/04 �Ĥ@�D���� 
// XinRong  2024/05/05 ��245�D����
// XinRong  2024/05/05 ��3�D����  
// =============================================================================

#include <stdio.h>

void homework1 (void) //�ŧi��� 1 
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
	system("pause");//�Ȱ��e�����ݨϥΪ̮ץ��N��
	system("cls");//�M���ù� 
	//step2
	int a, count;
 
	for(a=0;a<3;a++) //�̦h�߰ݤT���K�X 
	{
		int input=0;

		printf("Please key in 4 numbers : ");
		scanf("%d", &input);              //��J�K�X 
		printf("Your numbers is :%d\n",input);
		
		if(input==2024)
		{
			homework2(); //�p�G�K�X���T�h������ 2 
			return 0;
		}
		else
		{
			printf("Key in numbers is error.\n");
			count++;
			if (count>=3)
			{
				printf("warning...\n"); //�K�X��J�T�����~�����{�� 
			}
		}
	}
} //�Ĥ@�D���� 

void homework2(void) //�ŧi��� 2 
{
	system("cls"); //�M���Ĥ@�D�e�� 

	printf("-------------------\n");
	printf("| *************** |\n");
	printf("|  a.�e�X�T����   |\n");
	printf("|  b.��ܭ��k��   |\n"); //�X�{�D��� 
	printf("|  c.����         |\n");
	printf("| *************** |\n");
	printf("-------------------\n");
	
	char input; //�ŧi�r�� 

	printf("��JA/a, B/b, C/c : ");
	fflush(stdin);  //�M���Ȧs�� 
	scanf("%c", &input);
	switch(input)          //�P�_��J�r�� 
	{
		case 'A':
		case 'a':
			system("cls");  //��A a�h�M�� 
			homework3();  //�A�I�s��� 3 
			return 0;   
			break;
		case 'B':
		case 'b':
			homework4();   //��JB b�h�I�s��� 4 
			return 0;
			break;
		case 'C':
		case 'c':
			homework5();   //��JC c�h�I�s��� 5
			return 0;
			break;
		default:
			break;         
	}
}

void homework3(void)   //�ŧi��� 3 
{
    char input,k;
    int i,j;

    printf("�п�Ja-n : ");
    fflush(stdin);  //�M���Ȧs�� 
	scanf("%c",&input);
	for(i=input;i>='a';i--) //i=input�@�}�l��J���r��,�Yi>=a�]�i�j��,�C�h�r���ѥk�쥪�����a(����L�X�����) 
	{
		for(j=0;j<=i-'a';j++) //����ťռƶq  
		{
			printf(" ");
		}
		for(k=i;k<=input;k++) //����L�X���r�� 
		{
			printf("%c",k);
		}
		printf("\n");
	}
	system("pause");
	homework2(); //�]�^�D��� 
	return 0;        
}

void homework4(void) //�ŧi��� 4
{
	int input;
	int a,b;

	for(;;)
	{
		printf("��J�Ʀr 1~9 :");
		scanf("%d", &input);
		if (input>=1&&input<=9) //�P�_��J�n�O1-9 
		{
			for(a=1;a<=input;a++) //a��l��=1;��a<=input,�]�i�j�� 
			{
				b=a;
				printf("%d*%d=%d ",a,b,a*b);
				printf("\n");
			}
			system("pause");
			homework2(); //�]�^�D��� 
			return 0;
		}
		else
		{
			continue;  //�Y���O1-9�h�n�D���s��J 
		}
	}
}

void homework5(void)  //�ŧi��� 5 
{
	char input;

	for(;;)
	{
		printf("Continue? (y/n) "); //�߰ݬO�_�~�� 
		fflush(stdin);  //�M���Ȧs�� 
		scanf("%c", &input);
		if((input=='Y')||(input=='y'))  
		{
			homework2(); //�Y��JY��y�h�^��D��� 
			return 0;
		}
		else if((input=='N')||(input=='n'))
		{
			return 0; //�Y��JN��n�h���� 
		}
		else
		{
			printf("Warring...\n"); //��J���~�hĵ�i�ín�D���s��J 
			continue;   
		}
	}
}

int main(void)
{
	homework1(); //�D�{���I�s��� 1 
}

