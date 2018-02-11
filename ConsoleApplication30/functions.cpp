#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include "Header.h"

using namespace std;

int happy(int* arr)
{
	int f, s;
	f = arr[0] + arr[1] + arr[2];
	s = arr[3] + arr[4] + arr[5];
	if (f == s)
		return 1;
	else
		return 0;
}

int NewNumber(int a)
{
	int i = 0, q = 1000, mas[4];
	do {
		mas[i] = a / q;
		a = a - (mas[i])*q;
		q = q / 10;
		i++;
	} while (i < 4);

	int nn = mas[1] * 1000 + mas[0] * 100 + mas[3] * 10 + mas[2];
	return nn;
}

void zp(int*arr)
{
	//200$ + процент от продаж. 
	//продажи до 500$ - 3%, 
	//от 500 до 1000 – 5%, 
	//свыше 1000 – 8%. 
	int ZP[3];
	for (int i = 0; i < 3; i++)
	{
		if (arr[i] < 500)
			ZP[i] = 200 + (arr[i]) / 100 * 3;
		else if (arr[i] > 500 && arr[i] <= 1000)
			ZP[i] = 200 + (arr[i]) / 100 * 5;
		else if (arr[i] > 1000)
			ZP[i] = 200 + (arr[i]) / 100 * 8;
		cout << "зарплата " << i + 1 << " менеджера: " << ZP[i] << endl;
	}

	if ((ZP[0] > ZP[1]) && (ZP[0] > ZP[2]))
		cout << "первый менеджер получает премию и его зп составляет: " << ZP[0] + 200 << endl;
	else if ((ZP[1] > ZP[0]) && (ZP[1] > ZP[2]))
		cout << "второй менеджер получает премию и его зп составляет: " << ZP[1] + 200 << endl;
	else if ((ZP[2] > ZP[0]) && (ZP[2] > ZP[1]))
		cout << "третий менеджер получает премию и его зп составляет: " << ZP[2] + 200 << endl;

}

void CountString(int &d, int &o)
{
	//и получает 50$ за каждые 100 строк кода.
	//За каждое третее опоздание Васю штрафуют на 20$.Реализовать меню
	int late = o / 3, s;

	s = (d - late * 20) / 2;
	cout << "Васе надо написать " << s << " строк\n";
}

void CountLate(int &d, int &s)
{
	//и получает 50$ за каждые 100 строк кода.
	//За каждое третее опоздание Васю штрафуют на 20$.Реализовать меню

	int late = (s * 2 - d) / 20;

	if (d > s * 2)
		cout << "Васе надо больше трудиться, чтобы получить желаемый доход! \nи нельзя опаздывать вообще \n";
	else
		cout << "Васе можно опоздать " << late << " раз\n";

}

void CountZP(int &o, int &s)
{
	int zp = s * 2 - o / 3 * 20;

	if (zp > 0)
		cout << "ЗП Васи: " << zp << endl;
	else if (zp <= 0)
		cout << "Вася не получит ЗП" << endl;
}

int SameNumbers()
{
	//100-999
	int s, d, e;
	int count = 0;
	for (int i = 100; i < 1000; i++)
	{
		s = i / 100;
		d = (i - s * 100) / 10;
		e = i - s * 100 - d * 10;
		if (s == d || s == e || d == e)
			count++;
	}
	return count;
}

int DifferentNumbers()
{
	int s, d, e;
	int count = 0;
	for (int i = 100; i < 1000; i++)
	{
		s = i / 100;
		d = (i - s * 100) / 10;
		e = i - s * 100 - d * 10;
		if (s != d && s != e && d != e)
			count++;
	}
	return count;
}

void Delete36(int &b)
{
	int a = 0;
	while (b > 0)
	{
		if (b % 10 != 3 && b % 10 != 6)
		{
			a *= 10;
			a += b % 10;
		}
		b /= 10;
	}
	while (a > 0)
	{
		cout << a % 10;
		a /= 10;
	}
	cout << endl;
}

void chisla(int &a)
{
	cout << "диапазон будет от 1 до 1000\n\n";
	for (int i = 1; i < 1000; i++)
	{
		if (i%a == 0)
			cout << i << "\t";
	}

	cout << endl;
}

void star1()
{
	char mas[8][8];
	int a = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (j < a&&j != 0)
				cout << " ";
			else if (j == 0)
				cout << "*";
			else
				cout << "*";
		}
		cout << endl;
		a++;
	}
}
