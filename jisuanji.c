#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("***1.addd     2.sub***\n");
	printf("***3.mul      4.div***\n");
	printf("********0.exit********\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void cala(int (*p)(int,int))
{
	int x, y;
	
	printf("输入计算的值<:");
	scanf_s("%d,%d", &x, &y);
	printf("%d\n", p(x,y));
}

int main()
{
	int ch;
	do
	{
		menu();
		printf("选择方式<:");
		scanf_s("%d", &ch);
		switch (ch)
		{
			case 0:
				printf("退出\n");
				break;
			case 1:
				cala(Add);
				break;
			case 2:
				cala(Sub);
				break;
			case 3:
				cala(Mul);
				break;
			case 4:
				cala(Div);
				break;
			default:
				printf("输入错误\n");
				break;
		}
	} while (1);
	return 0;
}