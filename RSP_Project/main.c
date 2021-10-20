#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <time.h> 
/* made by Cho tae
*/
char RSP_GAME[3][10] = {"가위","바위","보오"}; // 게임에서 단어를 이쁘게 맞추기 위해 보오로 했습니다.
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
	printf("*********가위,바위,보 게임**********\n");

	
	F_RSP = RSP();

	line();
	blank();
	blank();
	printf("***********추가 게임 선택***********\n");
	printf(" 1.3판2선승 2.하나빼기 3.묵찌빠 0.끝내기 => ");
	scanf("%d", &num);

	switch (num)
	{
		case 1:
		printf("------------- 3판 2선승 ------------- \n");
		F_TTTW = TTTW(); 
		break;

		case 2:
		printf("--------- 하나 빼기(2개 택) --------- \n");
		F_TMO = TMO(); 
		break;

		case 3:
		printf("-------------- 묵찌빠 --------------- \n");
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
		printf(" 1:가위  2:바위  3:보오  0:종료 => ");
		scanf("%d",&user);
		com = rand () % 3 + 1; 
		line();

		if (user == 0)
		{
			break;
		}
		else if (0 > user || user > 3)
		{
			printf("잘못 입력하였습니다.\n");
			continue;
		}

		printf("---사용자는 <%s>를 냈습니다.-------\n", RSP_GAME[user-1]);
		printf("---컴퓨터는 <%s>를 냈습니다.-------\n", RSP_GAME[com-1]);
		line();

		if ((com == 1 && user == 1) || (com == 2 && user == 2) || (com == 3 && user == 3))
		{
			printf("-------------비겼습니다.-------------\n");
		}
		else if ((com == 1 && user == 2) || (com == 2 && user == 3) || (com == 3 && user == 1))
		{
			printf("!!!!!!!!!!!!!사용자 승리!!!!!!!!!!!!!\n");
		}
		else
		{
			printf("~~~~~~~~~~~~~컴퓨터 승리~~~~~~~~~~~~~\n");
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
		printf(" 1:가위  2:바위  3:보오  => ");
		scanf("%d",&user);
		com = rand() % 3 + 1;
		line();

		if (0 > user || user > 3)
		{
			printf("잘못 입력하였습니다.\n");
			continue;
		}

		if ((com == 1 && user == 1) || (com == 2 && user == 2) || (com == 3 && user == 3))
		{
			printf("-------------비겼습니다.-------------\n");
			line();
			draw++;
			count++;
		}
		else if ((com == 1 && user == 2) || (com == 2 && user == 3) || (com == 3 && user == 1))
		{
			printf("!!!!!!!!!!!!!사용자 승리!!!!!!!!!!!!!\n");
			line();
			win++;
			count++;
		}
		else
		{
			printf("~~~~~~~~~~~~~컴퓨터 승리~~~~~~~~~~~~~\n");
			line();
			lose++;
			count++;
		}

		if (count == 3)
		{
			printf("%d판[사용자 %d승][%d무][사용자 %d패] \n", count, win, draw, lose);
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
		printf(" 1:가위  2:바위  3:보오 => ");
		scanf("%d,%d",&user1, &user2);

		com1 = rand() % 3 + 1;
		com2 = rand() % 3 + 1;
	
		if (0 > user1 || user1 > 3 && 0 > user2 || user2 > 3)
		{
			printf("잘못 입력하였습니다.\n");
			continue;
		}

		line();
		printf("사용자는 <%s>와 <%s>를 선택했습니다. \n",RSP_GAME[user1 - 1],RSP_GAME[user2 - 1]);
		printf("컴퓨터는 <%s>와 <%s>를 선택했습니다. \n",RSP_GAME[com1 - 1],RSP_GAME[com2 - 1]);
		line();

		comSEL = com1,com2 % 2;
		//userSEL = user1, user2 % 2;

		printf("<%s>중 <%s> 하나 선택해주세요.",RSP_GAME[user1 - 1],RSP_GAME[user2 - 1]);
		scanf("%d",&userSEL);
		line();

		printf("---사용자는 <%s>를 냈습니다.-------\n", RSP_GAME[userSEL-1]);
		printf("---컴퓨터는 <%s>를 냈습니다.-------\n", RSP_GAME[comSEL -1]);
		line();

		if ((comSEL == 1 && userSEL == 1) || (comSEL == 2 && userSEL == 2) || (comSEL == 3 && userSEL == 3))
		{
			printf("-------------비겼습니다.-------------\n");
		}
		else if ((comSEL == 1 && userSEL == 2) || (comSEL == 2 && userSEL == 3) || (comSEL == 3 && userSEL == 1))
		{
			printf("!!!!!!!!!!!!!사용자 승리!!!!!!!!!!!!!\n");
		}
		else
		{
			printf("~~~~~~~~~~~~~컴퓨터 승리~~~~~~~~~~~~~\n");
		}
		break;
	}
	return 0;
}

int MCB()
{
	int com;
	int user;

	printf("공격 결정권 1:가위  2:바위  3:보오 => ");
	scanf("%d", &user);
	printf("---사용자는 <%s>를 냈습니다.-------\n",RSP_GAME[user-1]);

	com = rand() % 3 + 1;
	printf("---컴퓨터는 <%s>를 냈습니다.-------\n",RSP_GAME[com - 1]);

	line();
	blank();

	switch(user)
	{
		case 1:
		{
			if (com == 1)
			{
				blank();
				printf(" ( 다시 )  \n");
				return MCB();
			}
			else if (com == 2)
			{
				line();
				printf("~~~~~~~~~~~컴퓨터의 공격!~~~~~~~~~~~~\n");
				line();
				break;
			}
			else if (com == 3)
			{
				line();
				printf("!!!!!!!!!!!사용자의 공격!!!!!!!!!!!!\n"); 
				line();
				break;
			}
			else
			{
				printf("안됩니다!\n");
			}
			break;
		}

		case 2:
		{
			if (com == 1)
			{
				line();
				printf("!!!!!!!!!!!사용자의 공격!!!!!!!!!!!!\n");
				line();
				break;
			}
			else if (com == 2)
			{
				blank();
				printf(" ( 다시 )  \n");
				return MCB();
			}
			else if (com == 3)
			{
				line();
				printf("~~~~~~~~~~~컴퓨터의 공격!~~~~~~~~~~~~\n");
				line();
				break;
			}
			else
			{
				printf("안됩니다!\n");
			}
			break;
		}

		case 3:
		{
			if (com == 1)
			{
				line();
				printf("~~~~~~~~~~~컴퓨터의 공격!~~~~~~~~~~~~\n"); 
				line();
				break;
			}
			else if (com == 2)
			{
				line();
				printf("!!!!!!!!!!!사용자의 공격!!!!!!!!!!!!\n"); 
				line();
				break;
			}
			else if (com == 3)
			{ 
				blank();
				printf(" ( 다시 ) \n");
				return MCB();
			}
			else
			{
				printf("안됩니다!\n");
			}
			break;
		}
		default:
		{
			printf("안됩니다!\n");
		}
	}

	while (com)
	{
		printf(" 1:가위 2:바위 3:보오 => ");
		scanf("%d", &user);
		line();
		printf("---사용자는 <%s>를 냈습니다.------- \n", RSP_GAME[user - 1]);
		 
		com = rand() % 3 + 1;
		printf("---컴퓨터는 <%s>를 냈습니다.------- \n", RSP_GAME[com - 1]);
		line();
		blank();

		switch (user)
		{
			case 1:
			{
				if (com == 1)
				{
					line();
					printf("*********공격한 사람의 승리*********\n");
					line();
					return;
				}
				else if (com == 2)
				{
					line();
					printf("~~~~~~~~~~~~컴퓨터의 턴~~~~~~~~~~~~~\n");
					printf("~~~~~~~~~~~~~방어하십쇼~~~~~~~~~~~~~\n");
					line();
					break;
				}
				else if (com == 3)
				{
					line();
					printf("!!!!!!!!!!!!사용자의 턴!!!!!!!!!!!!!!\n");
					printf("!!!!!!!!!!!!!공격하십쇼!!!!!!!!!!!!!!\n");
					line();
					break;
				}
				else
				{
					printf("안됩니다!\n");
				}
			}
			break;

			case 2:
			{
				if (com == 1)
				{
					line();
					printf("!!!!!!!!!!!!사용자의 턴!!!!!!!!!!!!!!\n"); 
					printf("!!!!!!!!!!!!!공격하십쇼!!!!!!!!!!!!!!\n");
					line();
					break;
				}
				else if (com == 2)
				{
					line();
					printf("*********공격한 사람의 승리*********\n");
					line();
					return;
				}
				else if (com == 3)
				{
					line();
					printf("~~~~~~~~~~~~컴퓨터의 턴~~~~~~~~~~~~~\n"); 
					printf("~~~~~~~~~~~~~방어하십쇼~~~~~~~~~~~~~\n");
					line();
					break;
				}
				else
				{
					printf("안됩니다!\n");
				}
			} 
			break;

			case 3:
			{
				if (com == 1)
				{
					line();
					printf("~~~~~~~~~~~~컴퓨터의 턴~~~~~~~~~~~~~\n"); 
					printf("~~~~~~~~~~~~~방어하십쇼~~~~~~~~~~~~~\n");
					line();
					break;
				}
				else if (com == 2)
				{
					line();
					printf("!!!!!!!!!!!!사용자의 턴!!!!!!!!!!!!!!\n"); 
					printf("!!!!!!!!!!!!!공격하십쇼!!!!!!!!!!!!!!\n");
					line();
					break;
				}
				else if (com == 3)
				{
					line();
					printf("*********공격한 사람의 승리*********\n");
					line();
					return;
				}
				else
				{
					printf("불가능합니다.\n");
				}
			} 
			break;

			default:
			{ 
				printf("안됩니다!\n"); 
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