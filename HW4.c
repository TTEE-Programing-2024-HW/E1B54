// =============================================================================
// File Name: HW4.c
// Date: 2024/06/01 
// =============================================================================
// Who      When        Why
// XinRong  2024/06/01 Created HW4.c
// XinRong  2024/06/01 Show personal style pictures
// XinRong  2024/06/02 complete items 1 to 7 and test successfully
// =============================================================================
#include <stdlib.h>
#include <stdio.h>

int input;
int data();


struct data
{
					
	char name[10];
	int num;
	int math;
	int phy;
	int eng;
	float avg;
		
};


int main(void)
{
	int i, ip, password = 2024;
	char x, ct;
	struct data student[10];

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
	
    for(i=1; i<=3; i++)
	{
		printf("�п�J�|��K�X: ");
		fflush(stdin);
		scanf("%d", &ip);
	
		if(ip == password)
		{
			printf("�w��!\n");
			system("pause");
			break;
		}
		else
		{
			printf("�K�X���~\n");
		}
		
		if(i>=3)
		{
			printf("\a���~�W�L�T��");
			return 0;
		}
	}
	
	system("cls");
	
	while(1)
	{
	
		home();
		
		printf("�п�JA-E: ");
		fflush(stdin);
		scanf("%c", &x);
		
		switch(x)
		{
			
			case 'A':
			case 'a':
				
				system("cls");									 
				
				data();
				
				data1(student);
				
				system("pause");
				system("cls");
				break;
				
			case 'B':
			case 'b':
				
				system("cls");

				show(student);												
				
				system("pause");
				system("cls");
				break;
				
			case 'C':
			case 'c':
				
				system("cls");
				
				search(student);												
				
				system("pause");
				system("cls");
				break;
				
			case 'D':
			case 'd':
				
				system("cls");
				
				show_h(student);											
				
				system("pause");
				system("cls");
				break;

			case 'E':
			case 'e':
				
				while(1)
				{
					printf("�T�w���}? (y/n)");
					fflush(stdin);
					scanf("%c", &ct);
					
					if(ct == 'N' || ct == 'n')
					{
						system("cls");
						break;
					}
					else if(ct == 'Y' || ct == 'y')
					{
						return 0;
					}
					else
					{
						printf("��J���~�A�Э��s��J\n");
					}
				}
				
				break;
				
			default :
				printf("��J���~\n");
				system("pause");
				system("cls");
		}
	}
}
void home()
{
	
	printf("------------[Grade System]-----------\n");			
	printf("| a.Enter student grades            |\n");
	printf("| b.Display student grades          |\n");
	printf("| c.Search for student grades       |\n");
	printf("| d.Grades ranking                  |\n");
	printf("| e.Exit system                     |\n");
	printf("-------------------------------------\n");
	
}

int data()
{			
										
	int i = 0;
	
	while(1)
	{
		printf("�п�Jn(5-10): ");
		fflush(stdin);
		scanf("%d", &input);
		
		if(input>=5 && input <=10)
		{
			return input;
			break;
		}
		else
		{
			printf("��J���~\n");
		}
	}
	
}

void data1(struct data* student)
{
	
	int i;
	
	for(i=0; i<input; i++)
	{
		printf("��J�� %d ���ǥ͸��: \n", i+1);
		
		printf("�m�W: ");
		fflush(stdin);
		gets(student[i].name);
		
		printf("�Ǹ�: ");
		scanf("%d", &student[i].num);
		
		printf("�ƾǦ��Z: ");
		scanf("%d", &student[i].math);
		
		printf("���z���Z: ");
		scanf("%d", &student[i].phy);
		
		printf("�^�妨�Z: ");
		scanf("%d", &student[i].eng);
		
		student[i].avg = (student[i].math + student[i].phy + student[i].eng) / 3.0;
	}
	
}

void show(struct data* student)
{													 
	int i;
	
	for(i=0; i<input; i++)
	{
		printf("�m�W: %s �Ǹ�: %d \n�ƾǦ��Z: %d ���z���Z: %d �^�妨�Z: %d\n�ӤH���Z����: %.1f\n\n", 
				student[i].name, student[i].num, student[i].math, student[i].phy, student[i].eng,
				(student[i].math + student[i].phy + student[i].eng) / 3.0
				);
	}
	
}

void search(struct data* student)
{												 
	int i, j, search = 0;
	char i_name[100];
	
	printf("��J�n�M�䪺�m�W: ");
	fflush(stdin);
	scanf("%s", &i_name);
	
	for(i=0; i<input; i++)
	{
		for(j=1; i_name[j]!='\0' && student[i].name[j]!='\0'; j++)
		{
			if(i_name[j] == student[i].name[j])
			{
				printf("�m�W: %s �Ǹ�: %d \n�ƾǦ��Z: %d ���z���Z: %d �^�妨�Z: %d\n�ӤH���Z����: %.1f\n", 
					student[i].name, student[i].num, student[i].math, student[i].phy, student[i].eng, student[i].avg
					);
				search = 1;
			}
		}
	}
	
	if(search == 0)
	{
		printf("��Ƥ��s�b\n");
	}
	
}

void show_h(struct data* student)
{													//�ƧǸ�� 

	int i,j;
	struct data temp;
	
    for (i = 0; i < input - 1; i++) 
	{
        for (j = 0; j < input - 1 - i; j++) 
		{
            if (student[j].avg < student[j + 1].avg) 
			{
                temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
        }
    }
    
    for(i=0; i<input; i++)
	{
		printf("�m�W: %s �Ǹ�: %d \n�ƾǦ��Z: %d ���z���Z: %d �^�妨�Z: %d\n�ӤH���Z����: %.1f\n\n", 
				student[i].name, student[i].num, student[i].math, student[i].phy, student[i].eng, student[i].avg
				);
	}
	
}
