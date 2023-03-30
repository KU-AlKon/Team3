#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int dwarfs[9] = { 0, }; //난쟁이 숫자 배열
	int sum = 0;

	//난쟁이 수 입력
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &dwarfs[i]);
		sum += dwarfs[i];
	}

	//낸장이 수를 2개씩 더해 총합에서 100을 뺀 것과 같은지 확인
	//일곱 난쟁이가 아닌 난쟁이의 수는 0으로 만든다
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

	//진짜 일곱난쟁이 수 출력
	for (int i = 0; i < 9; i++)
	{
		if (dwarfs[i] != 0)
			printf("%d\n", dwarfs[i]);
	}

	return 0;
}
