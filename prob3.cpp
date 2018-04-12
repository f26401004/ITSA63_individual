#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	double height, weight, year;
	while(1)
	{
		cin >> height >> weight >> year;
		double a = weight / height * 41.2;
		double b = height * weight / 634.4;
		double c = weight * 0.4;
		if (year > 30)
			b = b + (((int)year - 30) / 5) * 0.15;
		if (year > 28)
			c = c + (((int)year - 28)) / 2 * 0.25;
		printf("%.2f %.2f %.2f\n", a, b, c);
		int order;
		cin >> order;
		if (order == 0)
			continue;
		else if (order == -1)
			break;
	}
	return 0;
}
