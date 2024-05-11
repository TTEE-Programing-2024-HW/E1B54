// =============================================================================
// File Name: HW3.c
// Date: 2024/05/09 
// =============================================================================
// Who      When        Why
// XinRong  2024/05/09 Created HW3.c
// XinRong  2024/05/09 ��126�D����
// XinRong  2024/05/10 ��3�D�즸����
// XinRong  2024/05/10 ��4�D�즸����(��������) 
// =============================================================================

#include <stdio.h>
int ar[9][9]; //�ŧi9*9�}�C 

void homework1 (void) //�ŧi��� 1 
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

	printf("=========================\n");
	printf("|***[Booking System]****|\n");
	printf("|  a.Available seats    |\n");
	printf("|  b.Arrange for you    |\n"); //�X�{�D��� 
	printf("|  c.Choose by yourself |\n");
	printf("|  d.Exit               |\n");
	printf("|***-----------------***|\n");
	printf("=========================\n");
	
	char input; //�ŧi�r�� 

	printf("��JA/a, B/b, C/c, D/d : ");
	fflush(stdin);  //�M���Ȧs�� 
	scanf("%c", &input);
	switch(input)          //�P�_��J�r�� 
	{
		case 'A':
		case 'a':
			system("cls");  //��A a�h�M�� 
			homework3();    //�A�I�s��� 3 
			return 0;   
			break;
		case 'B':
		case 'b':
			homework4();   //��JB b�h�I�s��� 4 
			return 0;
			break;
		case 'C':
		case 'c':
			homework5();  //��JC c�h�I�s��� 5
			return 0;
			break;
		case 'D':
		case 'd':
			homework6();  //��JD d�h�I�s��� 6
			return 0;
			break;
		default:
			break;         
	}
}

void homework3(void)   //�ŧi��� 3 
{
    int i,j;
	int count = 0;
	
	for(i=0; i<9; i++)
	{                        //�N�C�Ӧ�l�w�]��'-' 
		for(j=0; j<9; j++)
		{
			ar[i][j] = '-';
		}
	}
	
	while(count < 10)
	{                       //�H������10�� 
		int x = rand() % 9;
		int y = rand() % 9;
		
		if(ar[x][y] == '-')
		{                   //����� 
			ar[x][y] = '*';
			count++;
		}
	}

	seat();
	
	system("pause");
	homework2();          //�]�^�D��� 
	return 0;        
}

void homework4(void) //�ŧi��� 4
{
	int i,j,input;
	int a,b,count=0;

	for(;;)
	{
		printf("�п�J�H�� : (1-4)");
		fflush(stdin);
		scanf("%d", &input);
		if (input>=1&&input<=4) //�P�_��J�n�O1-4
		{
			
			int x = rand() % 9;
			int y = rand() % 9;
			
			if(ar[x][y] != '*')
			{
				while(count < input)
				{
					
					if(ar[x][y] == '-')
					{                     //����� 
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
			homework2(); //�]�^�D��� 
			return 0;
		}
		else
		{
			continue;  //�Y���O1-4�h�n�D���s��J 
		}
	}
}

void homework5(void)  //�ŧi��� 5 
{
	
	
	
	
}

void homework6(void)  //�ŧi��� 6 
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

