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


struct data   //建立名為data的結構 
{
					
	char name[10];
	int num;         //宣告變數 
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

	printf("##############################################\n");
	printf("#       @@@                    *             #\n");
	printf("#      @@@@@     **           <|>            #\n");
	printf("#    @@@   @@@                               #\n");
	printf("#    @@@   @@@                 **      *     #\n");
	printf("#      @@@@@           *              <|>    #\n");
	printf("#        |            <|>                    #\n");
	printf("#        |                       *       **  #\n");
	printf("#       <|>                     <|>          #\n");
	printf("#            *                               #\n");
	printf("#  *        <|>       **               *     #\n");
	printf("#                               *     <|>    #\n");
	printf("#                        @                   #\n");
	printf("#   *      **           @@@                  #\n");
	printf("#  <|>               @@@   @@@       *       #\n");
	printf("#                    @@@   @@@     <|>       #\n");
	printf("#                      @@@@@            *    #\n");
	printf("#        *      **       |             <|>   #\n");
	printf("#       <|>              |          *        #\n");
	printf("#                       <|>        <|>       #\n");
	printf("#     **                       **            #\n");
	printf("##############################################\n");
	system("pause");
	
    for(i=1;i<=3;i++)       //Ask for your password up to three times
	{
		printf("請輸入四位密碼: ");
		fflush(stdin);
		scanf("%d",&ip);    //Input password
	
		if(ip==password)
		{
			printf("歡迎!\n");
			system("pause");     //If the password is correct, show "歡迎 " 
			break;
		}
		else
		{
			printf("密碼錯誤\n");
		}
		
		if(i>=3)
		{
			printf("錯誤超過三次");     //If you enter your password three times, it will be over
			return 0;
		}
	}
	
	system("cls");  //Clear the screen
	
	while(1)
	{
	
		home();   //Show the Grade System
		
		printf("請輸入A-E: ");
		fflush(stdin);    //Clear standard input
		scanf("%c",&x);
		
		switch(x)
		{
			
			case 'A':
			case 'a':
				
				system("cls");		//Input A/a to clear 							 
				
				data();             //Call function 
				
				data1(student);
				
				system("pause");
				system("cls");
				break;
				
			case 'B':              //Input B/b to clear
			case 'b':
				
				system("cls");

				show(student);		//Call function										
				
				system("pause");
				system("cls");
				break;
				
			case 'C':
			case 'c':
				
				system("cls");      //Input C/c to clear
				
				search(student);	//Call function										
				
				system("pause");
				system("cls");
				break;
				
			case 'D':
			case 'd':
				                    //Input D/d to clear
				system("cls");
				
				show_h(student);	//Call function										
				
				system("pause");
				system("cls");
				break;

			case 'E':
			case 'e':               //Input E/e and ask if you want to leave
				
				while(1)
				{
					printf("確定離開? (y/n)");
					fflush(stdin);
					scanf("%c",&ct);
					
					if(ct=='N'||ct=='n')   //If input N/n,back Grade System 
					{
						system("cls");
						break;
					}
					else if(ct=='Y'||ct=='y')  //If input Y/y,finish
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
	
	printf("############[Grade System]###########\n");			
	printf("| a.Enter student grades            |\n");
	printf("| b.Display student grades          |\n");    //program that declares the main screen
	printf("| c.Search for student grades       |\n");
	printf("| d.Grades ranking                  |\n");
	printf("| e.Exit system                     |\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	
}

int data()
{			
										
	int i=0;
	
	while(1)
	{
		printf("請輸入n(5-10): ");  //要求輸入n（5~10）的整數
		fflush(stdin);
		scanf("%d",&input);
		
		if(input>=5&&input<=10)
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

void data1(struct data*student)
{
	
	int i;
	
	for(i=0;i<input;i++)
	{                                                 //根據n值 依序讀入n筆學生姓名 學號 數學 物理 英文的成績
		printf("輸入第 %d 筆學生資料: \n",i+1);
		
		printf("姓名: ");
		fflush(stdin);
		gets(student[i].name);
		
		printf("學號: ");
		scanf("%d",&student[i].num);
		
		printf("數學成績: ");
		scanf("%d",&student[i].math);
		
		printf("物理成績: ");
		scanf("%d",&student[i].phy);
		
		printf("英文成績: ");
		scanf("%d",&student[i].eng);
		
		student[i].avg=(student[i].math+student[i].phy+student[i].eng)/3.0;   //平均分數 
	}
	
}

void show(struct data*student)
{													 //顯示所有學生的姓名、學號、各科成績，及個人的平均成績(取至一位小數)
	int i;
	
	for(i=0;i<input;i++)
	{
		printf("姓名: %s 學號: %d \n數學成績: %d 物理成績: %d 英文成績: %d\n個人成績平均: %.1f\n\n", 
				student[i].name,student[i].num,student[i].math,student[i].phy,student[i].eng,
				(student[i].math+student[i].phy+student[i].eng)/3.0);
	}
	
}

void search(struct data*student)
{												 
	int i,j,search=0;
	char i_name[100];
	
	printf("輸入要尋找的姓名: ");    //要求輸入要搜尋的姓名。
	fflush(stdin);
	scanf("%s",&i_name);
	
	for(i=0;i<input;i++)                    //若找到該姓名，則列出該生姓名、學號、各科成績及個人平均成績。
	{
		for(j=1;i_name[j]!='\0'&&student[i].name[j]!='\0';j++)
		{
			if(i_name[j]==student[i].name[j])
			{
				printf("姓名: %s 學號: %d \n數學成績: %d 物理成績: %d 英文成績: %d\n個人成績平均: %.1f\n", 
					student[i].name,student[i].num,student[i].math,student[i].phy,student[i].eng,student[i].avg);
				search=1;
			}
		}
	}
	
	if(search==0)
	{
		printf("資料不存在\n");
	}
	
}

void show_h(struct data*student)
{													//依平均成績的高低順序列出學生的姓名、學號及平均成績。 

	int i,j;
	struct data temp;
	
    for(i=0;i<input-1;i++) 
	{
        for(j=0;j<input-1-i;j++) 
		{
            if(student[j].avg<student[j+1].avg) 
			{
                temp=student[j];
                student[j]=student[j+1];
                student[j+1]=temp;
            }
        }
    }
    
    for(i=0;i<input;i++)
	{
		printf("姓名: %s 學號: %d \n數學成績: %d 物理成績: %d 英文成績: %d\n個人成績平均: %.1f\n\n", 
				student[i].name,student[i].num,student[i].math,student[i].phy,student[i].eng,student[i].avg);
	}
	
}
/*這次的作業我覺得蠻有難度,因為會用到些以前沒有常用的工具,還有結構型別宣告等等都是我比較少練習到的,所以會想很久,但是打出來還是很有成就感,
不過我覺得我也慢慢熟悉git hub 的用法了,雖然常常打到快結束才想到要commit 但多用幾次後就會記得了吧哈哈,希望我對程式這塊能快點上手,能像其他同學一樣厲害*/ 
