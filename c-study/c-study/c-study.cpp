// c-study.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

struct point
{
	int x;
	int y;

};

int equal(point a, point b)
{
	if (a.x == b.x && a.y == b.y)
		return 1;
	else
		return 0;

}

int main()
{

	point a = { 1,2 };
	point b = { 3,4 };

	if (equal(a, b) == 1)
		printf("���� �� \n");
	else
		printf("�ٸ� �� \n");

	getchar();

	return 0;
}



