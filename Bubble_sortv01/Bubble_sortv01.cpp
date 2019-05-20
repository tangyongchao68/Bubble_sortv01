// Bubble_sortv01.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int i, j, t;
	int a[10];
	//从键盘上为数组元素赋值
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
	cout << "输出数组：" << "\n";
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

