#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int test_num = 0;
	char q_arr[80] = { 0, }; //���� ��� �迭
	int count = 0;
	int mid_sum = 0;
	int sum = 0;

	scanf("%d%*c", &test_num);

	char a = 0;
	for (int i = 0; i < test_num; i++)
	{
		scanf("%[^\n]s", q_arr); //���� ��� �Է¹ޱ�
		scanf("%c", &a);

		/*
		'O' : count 1����
		'X' : ���ݱ��� ���ӵ� ���� �� ���ϱ�
		'0' : ���ӵ� ���� �� ���ϰ� break
		*/
		for (int j = 0; j < 80; j++)
		{
			if (q_arr[j] == 'O')
			{
				count++;
			}

			else if (q_arr[j] == 'X')
			{
				for (int k = count; k > 0; k--)
				{
					mid_sum += k;
				}
				count = 0;
				sum += mid_sum;
				mid_sum = 0;
			}
			else if (q_arr[j] == 0)
			{
				for (int k = count; k > 0; k--)
				{
					mid_sum += k;
				}
				count = 0;
				sum += mid_sum;
				mid_sum = 0;
				break;
			}
		}
		printf("%d\n", sum);
		sum = 0;
	}

	return 0;
}
