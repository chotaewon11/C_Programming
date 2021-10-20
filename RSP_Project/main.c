#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <time.h> 
/* made by Cho tae
*/
char RSP_GAME[3][10] = {"����","����","����"}; // ���ӿ��� �ܾ �̻ڰ� ���߱� ���� ������ �߽��ϴ�.
int RSP(); 
int TTTW();
int TMO();
int MCB();

void line(); 
void blank();

int main(void)
{
	int F_RSP,F_TTTW,F_TMO,F_MCB;
	int num;

	srand((unsigned int)time(NULL)); 

	printf("***********CTW_RSP_ver01************\n");
	printf("*********����,����,�� ����**********\n");

	
	F_RSP = RSP();

	line();
	blank();
	blank();
	printf("***********�߰� ���� ����***********\n");
	printf(" 1.3��2���� 2.�ϳ����� 3.����� 0.������ => ");
	scanf("%d", &num);

	switch (num)
	{
		case 1:
		printf("------------- 3�� 2���� ------------- \n");
		F_TTTW = TTTW(); 
		break;

		case 2:
		printf("--------- �ϳ� ����(2�� ��) --------- \n");
		F_TMO = TMO(); 
		break;

		case 3:
		printf("-------------- ����� --------------- \n");
		F_MCB = MCB();  
		break;

		case 0:
		break;
	}
		
}

int RSP() 
{
	int user;
	int com;

	while (1)
	{
		printf(" 1:����  2:����  3:����  0:���� => ");
		scanf("%d",&user);
		com = rand () % 3 + 1; 
		line();

		if (user == 0)
		{
			break;
		}
		else if (0 > user || user > 3)
		{
			printf("�߸� �Է��Ͽ����ϴ�.\n");
			continue;
		}

		printf("---����ڴ� <%s>�� �½��ϴ�.-------\n", RSP_GAME[user-1]);
		printf("---��ǻ�ʹ� <%s>�� �½��ϴ�.-------\n", RSP_GAME[com-1]);
		line();

		if ((com == 1 && user == 1) || (com == 2 && user == 2) || (com == 3 && user == 3))
		{
			printf("-------------�����ϴ�.-------------\n");
		}
		else if ((com == 1 && user == 2) || (com == 2 && user == 3) || (com == 3 && user == 1))
		{
			printf("!!!!!!!!!!!!!����� �¸�!!!!!!!!!!!!!\n");
		}
		else
		{
			printf("~~~~~~~~~~~~~��ǻ�� �¸�~~~~~~~~~~~~~\n");
		}
		break;
	}
	return 0;
}

int TTTW()
{
	int user;
	int com;
	int count = 0;
	int win = 0, draw = 0, lose = 0;

	while (1)
	{
		printf(" 1:����  2:����  3:����  => ");
		scanf("%d",&user);
		com = rand() % 3 + 1;
		line();

		if (0 > user || user > 3)
		{
			printf("�߸� �Է��Ͽ����ϴ�.\n");
			continue;
		}

		if ((com == 1 && user == 1) || (com == 2 && user == 2) || (com == 3 && user == 3))
		{
			printf("-------------�����ϴ�.-------------\n");
			line();
			draw++;
			count++;
		}
		else if ((com == 1 && user == 2) || (com == 2 && user == 3) || (com == 3 && user == 1))
		{
			printf("!!!!!!!!!!!!!����� �¸�!!!!!!!!!!!!!\n");
			line();
			win++;
			count++;
		}
		else
		{
			printf("~~~~~~~~~~~~~��ǻ�� �¸�~~~~~~~~~~~~~\n");
			line();
			lose++;
			count++;
		}

		if (count == 3)
		{
			printf("%d��[����� %d��][%d��][����� %d��] \n", count, win, draw, lose);
			break;
		}
	}
	return 0;
}

int TMO()
{
	int user1,user2;
	int com1,com2;
	int userSEL=0;
	int comSEL;
	while (1)
	{
		printf(" 1:����  2:����  3:���� => ");
		scanf("%d,%d",&user1, &user2);

		com1 = rand() % 3 + 1;
		com2 = rand() % 3 + 1;
	
		if (0 > user1 || user1 > 3 && 0 > user2 || user2 > 3)
		{
			printf("�߸� �Է��Ͽ����ϴ�.\n");
			continue;
		}

		line();
		printf("����ڴ� <%s>�� <%s>�� �����߽��ϴ�. \n",RSP_GAME[user1 - 1],RSP_GAME[user2 - 1]);
		printf("��ǻ�ʹ� <%s>�� <%s>�� �����߽��ϴ�. \n",RSP_GAME[com1 - 1],RSP_GAME[com2 - 1]);
		line();

		comSEL = com1,com2 % 2;
		//userSEL = user1, user2 % 2;

		printf("<%s>�� <%s> �ϳ� �������ּ���.",RSP_GAME[user1 - 1],RSP_GAME[user2 - 1]);
		scanf("%d",&userSEL);
		line();

		printf("---����ڴ� <%s>�� �½��ϴ�.-------\n", RSP_GAME[userSEL-1]);
		printf("---��ǻ�ʹ� <%s>�� �½��ϴ�.-------\n", RSP_GAME[comSEL -1]);
		line();

		if ((comSEL == 1 && userSEL == 1) || (comSEL == 2 && userSEL == 2) || (comSEL == 3 && userSEL == 3))
		{
			printf("-------------�����ϴ�.-------------\n");
		}
		else if ((comSEL == 1 && userSEL == 2) || (comSEL == 2 && userSEL == 3) || (comSEL == 3 && userSEL == 1))
		{
			printf("!!!!!!!!!!!!!����� �¸�!!!!!!!!!!!!!\n");
		}
		else
		{
			printf("~~~~~~~~~~~~~��ǻ�� �¸�~~~~~~~~~~~~~\n");
		}
		break;
	}
	return 0;
}

int MCB()
{
	int com;
	int user;

	printf("���� ������ 1:����  2:����  3:���� => ");
	scanf("%d", &user);
	printf("---����ڴ� <%s>�� �½��ϴ�.-------\n",RSP_GAME[user-1]);

	com = rand() % 3 + 1;
	printf("---��ǻ�ʹ� <%s>�� �½��ϴ�.-------\n",RSP_GAME[com - 1]);

	line();
	blank();

	switch(user)
	{
		case 1:
		{
			if (com == 1)
			{
				blank();
				printf(" ( �ٽ� )  \n");
				return MCB();
			}
			else if (com == 2)
			{
				line();
				printf("~~~~~~~~~~~��ǻ���� ����!~~~~~~~~~~~~\n");
				line();
				break;
			}
			else if (com == 3)
			{
				line();
				printf("!!!!!!!!!!!������� ����!!!!!!!!!!!!\n"); 
				line();
				break;
			}
			else
			{
				printf("�ȵ˴ϴ�!\n");
			}
			break;
		}

		case 2:
		{
			if (com == 1)
			{
				line();
				printf("!!!!!!!!!!!������� ����!!!!!!!!!!!!\n");
				line();
				break;
			}
			else if (com == 2)
			{
				blank();
				printf(" ( �ٽ� )  \n");
				return MCB();
			}
			else if (com == 3)
			{
				line();
				printf("~~~~~~~~~~~��ǻ���� ����!~~~~~~~~~~~~\n");
				line();
				break;
			}
			else
			{
				printf("�ȵ˴ϴ�!\n");
			}
			break;
		}

		case 3:
		{
			if (com == 1)
			{
				line();
				printf("~~~~~~~~~~~��ǻ���� ����!~~~~~~~~~~~~\n"); 
				line();
				break;
			}
			else if (com == 2)
			{
				line();
				printf("!!!!!!!!!!!������� ����!!!!!!!!!!!!\n"); 
				line();
				break;
			}
			else if (com == 3)
			{ 
				blank();
				printf(" ( �ٽ� ) \n");
				return MCB();
			}
			else
			{
				printf("�ȵ˴ϴ�!\n");
			}
			break;
		}
		default:
		{
			printf("�ȵ˴ϴ�!\n");
		}
	}

	while (com)
	{
		printf(" 1:���� 2:���� 3:���� => ");
		scanf("%d", &user);
		line();
		printf("---����ڴ� <%s>�� �½��ϴ�.------- \n", RSP_GAME[user - 1]);
		 
		com = rand() % 3 + 1;
		printf("---��ǻ�ʹ� <%s>�� �½��ϴ�.------- \n", RSP_GAME[com - 1]);
		line();
		blank();

		switch (user)
		{
			case 1:
			{
				if (com == 1)
				{
					line();
					printf("*********������ ����� �¸�*********\n");
					line();
					return;
				}
				else if (com == 2)
				{
					line();
					printf("~~~~~~~~~~~~��ǻ���� ��~~~~~~~~~~~~~\n");
					printf("~~~~~~~~~~~~~����Ͻʼ�~~~~~~~~~~~~~\n");
					line();
					break;
				}
				else if (com == 3)
				{
					line();
					printf("!!!!!!!!!!!!������� ��!!!!!!!!!!!!!!\n");
					printf("!!!!!!!!!!!!!�����Ͻʼ�!!!!!!!!!!!!!!\n");
					line();
					break;
				}
				else
				{
					printf("�ȵ˴ϴ�!\n");
				}
			}
			break;

			case 2:
			{
				if (com == 1)
				{
					line();
					printf("!!!!!!!!!!!!������� ��!!!!!!!!!!!!!!\n"); 
					printf("!!!!!!!!!!!!!�����Ͻʼ�!!!!!!!!!!!!!!\n");
					line();
					break;
				}
				else if (com == 2)
				{
					line();
					printf("*********������ ����� �¸�*********\n");
					line();
					return;
				}
				else if (com == 3)
				{
					line();
					printf("~~~~~~~~~~~~��ǻ���� ��~~~~~~~~~~~~~\n"); 
					printf("~~~~~~~~~~~~~����Ͻʼ�~~~~~~~~~~~~~\n");
					line();
					break;
				}
				else
				{
					printf("�ȵ˴ϴ�!\n");
				}
			} 
			break;

			case 3:
			{
				if (com == 1)
				{
					line();
					printf("~~~~~~~~~~~~��ǻ���� ��~~~~~~~~~~~~~\n"); 
					printf("~~~~~~~~~~~~~����Ͻʼ�~~~~~~~~~~~~~\n");
					line();
					break;
				}
				else if (com == 2)
				{
					line();
					printf("!!!!!!!!!!!!������� ��!!!!!!!!!!!!!!\n"); 
					printf("!!!!!!!!!!!!!�����Ͻʼ�!!!!!!!!!!!!!!\n");
					line();
					break;
				}
				else if (com == 3)
				{
					line();
					printf("*********������ ����� �¸�*********\n");
					line();
					return;
				}
				else
				{
					printf("�Ұ����մϴ�.\n");
				}
			} 
			break;

			default:
			{ 
				printf("�ȵ˴ϴ�!\n"); 
			}
		}
	}
	return 0;
}


void line()
{
	printf("-------------------------------------\n");
}

void blank()
{
	printf("\n");
}