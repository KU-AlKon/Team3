#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int time_arr[2000000] = { 0, }; //폭죽쇼 시간 배열

int main()
{

	//int ar[5];

	int st_num = 0;
	int time = 0;
	int student[100] = { 0, }; //학생들의 폭죽쇼 주기 배열
	int count = 0;
	
	//학생수, 폭죽쇼 시간, 학생들의 폭죽쇼 주기 입력
	scanf("%d %d", &st_num, &time);
	for (int i = 0; i < st_num; i++)
	{
		scanf("%d", &student[i]);
	}

	//학생의 폭죽쇼 주기의 배수들의 시간에 1씩 더한다.
	for (int i = 0; i < st_num; i++)
	{
		int k = 1;
		while (1)
		{
			if (student[i] * k > time)
				break;
			time_arr[student[i] * k] += 1;
			k++;
		}
	}

	//폭죽이 터진 시간 더하기
	for (int i = 0; i <= time; i++)
	{
		if (time_arr[i] != 0)
			count++;
	}
  
	printf("%d", count);
	return 0;
}
