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
		printf("請輸入四位密碼: ");
		fflush(stdin);
		scanf("%d", &ip);
	
		if(ip == password)
		{
			printf("歡迎!\n");
			system("pause");
			break;
		}
		else
		{
			printf("密碼錯誤\n");
		}
		
		if(i>=3)
		{
			printf("\a錯誤超過三次");
			return 0;
		}
	}
	
	system("cls");
	
	while(1)
	{
	
		home();
		
		printf("請輸入A-E: ");
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
					printf("確定離開? (y/n)");
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
						printf("輸入錯誤，請重新輸入\n");
					}
				}
				
				break;
				
			default :
				printf("輸入錯誤\n");
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
		printf("請輸入n(5-10): ");
		fflush(stdin);
		scanf("%d", &input);
		
		if(input>=5 && input <=10)
		{
			return input;
			break;
		}
		else
		{
			printf("輸入錯誤\n");
		}
	}
	
}

void data1(struct data* student)
{
	
	int i;
	
	for(i=0; i<input; i++)
	{
		printf("輸入第 %d 筆學生資料: \n", i+1);
		
		printf("姓名: ");
		fflush(stdin);
		gets(student[i].name);
		
		printf("學號: ");
		scanf("%d", &student[i].num);
		
		printf("數學成績: ");
		scanf("%d", &student[i].math);
		
		printf("物理成績: ");
		scanf("%d", &student[i].phy);
		
		printf("英文成績: ");
		scanf("%d", &student[i].eng);
		
		student[i].avg = (student[i].math + student[i].phy + student[i].eng) / 3.0;
	}
	
}

void show(struct data* student)
{													 
	int i;
	
	for(i=0; i<input; i++)
	{
		printf("姓名: %s 學號: %d \n數學成績: %d 物理成績: %d 英文成績: %d\n個人成績平均: %.1f\n\n", 
				student[i].name, student[i].num, student[i].math, student[i].phy, student[i].eng,
				(student[i].math + student[i].phy + student[i].eng) / 3.0
				);
	}
	
}

void search(struct data* student)
{												 
	int i, j, search = 0;
	char i_name[100];
	
	printf("輸入要尋找的姓名: ");
	fflush(stdin);
	scanf("%s", &i_name);
	
	for(i=0; i<input; i++)
	{
		for(j=1; i_name[j]!='\0' && student[i].name[j]!='\0'; j++)
		{
			if(i_name[j] == student[i].name[j])
			{
				printf("姓名: %s 學號: %d \n數學成績: %d 物理成績: %d 英文成績: %d\n個人成績平均: %.1f\n", 
					student[i].name, student[i].num, student[i].math, student[i].phy, student[i].eng, student[i].avg
					);
				search = 1;
			}
		}
	}
	
	if(search == 0)
	{
		printf("資料不存在\n");
	}
	
}

void show_h(struct data* student)
{													//排序資料 

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
		printf("姓名: %s 學號: %d \n數學成績: %d 物理成績: %d 英文成績: %d\n個人成績平均: %.1f\n\n", 
				student[i].name, student[i].num, student[i].math, student[i].phy, student[i].eng, student[i].avg
				);
	}
	
}
