#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int dwarfs[9] = { 0, }; //������ ���� �迭
	int sum = 0;

	//������ �� �Է�
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &dwarfs[i]);
		sum += dwarfs[i];
	}

	//������ ���� 2���� ���� ���տ��� 100�� �� �Ͱ� ������ Ȯ��
	//�ϰ� �����̰� �ƴ� �������� ���� 0���� �����
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (dwarfs[i] + dwarfs[j] == sum - 100)
			{
				dwarfs[i] = 0;
				dwarfs[j] = 0;
				break;
			}
		}
		if (dwarfs[i] == 0)
			break;
	}

	//��¥ �ϰ������� �� ���
	for (int i = 0; i < 9; i++)
	{
		if (dwarfs[i] != 0)
			printf("%d\n", dwarfs[i]);
	}

	return 0;
}
