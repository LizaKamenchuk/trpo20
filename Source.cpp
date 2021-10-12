#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int s = 1000, m = 9999, a, b, c, d, r, t, x;
	srand(time(NULL));
	int secret_number = rand() % (m + 1 - s) + s;
	r = secret_number;
	t = secret_number;
	cout << r << endl;
	d = r % 10;
	r = r / 10;
	c = r % 10;
	r = r / 10;
	b = r % 10;
	x = b;
	a = r / 10;
	if (a == d and b == c)
	{
		cout << "Палиндрoм";

	}

	cout << "Cреднее арифметическое цифр числа = " << (a + b + d + c) / 4 << endl;

	int sum = 0, f;
	do {

		f = secret_number % 10;
		secret_number = secret_number / 10;
		if (f % 2 != 0) sum = sum + f;
	} while (secret_number != 0);
	cout << "Cумма неч цифр = " << sum << endl;

	int p;
	p = t / 100;
	if (p <= 20)
	{
		switch (p)
		{
		case 5:case 1:case 6:case 7:case 8:case 9:case 10:case 11:case 12:case 13:case 14:case 15:cout << " Рублей ";
		case 16:case 18:case 19:case 20:cout << p << " Рублей " << endl;
			break;

		}

		switch (x)
		{
		case 2:case 3:case 4:cout << p << " Рубля ";
			break;
		}
	}
	else
	{
		switch (b)
		{
		case 5:case 6:case 7:case 8:case 9:case 0: cout << p << " Рублей ";
			break;
		case 1: cout << p << " Рубль ";
			break;

		}

		switch (x)
		{
		case 2:case 3:case 4:cout << p << " Рубля " << endl;
			break;
		}
	}
	int y;
	y = t % 100;
	p = t / 100;
	if (y <= 20)
	{
		switch (y)
		{
		case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:case 13:case 14:case 15:case 16:case 18:case 19:case 20:cout << y << " Копеек " << endl;
			break;
		case 1: cout << y << " Копейка";
			break;
		case 2: case 3: case 4: cout << y << " Копейки";
			break;

		}
	}
	else
	{
		switch (d)
		{
		case 1: cout << y << " Копейка";
			break;
		case 2: case 3: case 4: cout << y << " Копейки";
			break;
		case 5: case 6: case 7: case 8: case 9: case 0: cout << y << " Копеек";
			break;
		}
	}
		cout << endl;


		int u, ab, cd, i = 0;
		ab = t / 100;
		cd = t % 100;
		if (ab < cd) i = cd;
		else i = ab;
		u = 0;
		do {
			i++;
			if (i % ab == 0 and i % cd == 0) u = i;
		} while (u != i);
		cout << "НОК = " << i << endl;

		return 0;
	}



