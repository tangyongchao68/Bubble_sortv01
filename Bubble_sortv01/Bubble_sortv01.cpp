// Bubble_sortv01.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int i, j, t;
	int a[10];
	//�Ӽ�����Ϊ����Ԫ�ظ�ֵ
	for ( i = 0; i < 10; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	for ( i = 0; i < 9; i++)
	{
		for ( j = 0; j < 9-i; j++)
		{
			if (a[j]>a[j+1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	cout << "������飺" << "\n";
	for (i = 0; i < 10; i++)
	{
		cout << a[i]<<"\t";
		if ((i+1)%3==0)
		{
			cout << "\n";
		}
	}
	cout << "\n";
    return 0;
}

