#include <iostream>
#include <sstream>
#include <cstdio>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.get();
	for (int i = 0 ; i < n ; ++i)
	{
		int mon, day;
		char str[20];
		fgets(str, sizeof(str), stdin);
		stringstream sin(str);
		sin >> mon >> day;
		switch(mon)
		{
			case 1:
				if (day >= 21)
					cout << "Aquarius";
				if (day <= 20)
					cout << "Capricorn";
				break;
			case 2:
				if (day <= 18)
					cout << "Aquarius";
				if (day >= 19)
					cout << "Pisces";
				break;
			case 3:
				if (day >= 21)
					cout << "Aries";
				if (day <= 20)
					cout << "Pisces";
				break;
			case 4:
				if (day >= 21)
					cout << "Taurus";
				if (day <= 20)
					cout << "Aries";
				break;
			case 5:
				if (day >= 22)
					cout << "Gemini";
				if (day <= 21)
					cout << "Taurus";
				break;

			case 6:
				if (day >= 22)
					cout << "Cancer";
				if (day <= 21)
					cout << "Gemini";
				break;

			case 7:
				if (day >= 23)
					cout << "Leo";
				if (day <= 22)
					cout << "Cancer";
				break;

			case 8:
				if (day >= 24)
					cout << "Virgo";
				if (day <= 23)
					cout << "Leo";
				break;

			case 9:
				if (day >= 24)
					cout << "Virgo";
				if (day <= 23)
					cout << "Libra";
				break;

			case 10:
				if (day >= 24)
					cout << "Scorpio";
				if (day <= 23)
					cout << "Libra";
				break;

			case 11:
				if (day >= 23)
					cout << "Sagittarius";
				if (day <= 22)
					cout << "Scorpio";
				break;

			case 12:
				if (day >= 22)
					cout << "Capricorn";
				if (day <= 21)
					cout << "Sagittarius";
				break;

		}
		cout << endl;
	}
	return 0;
}
