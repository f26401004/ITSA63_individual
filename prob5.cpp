#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char list[15];
	while(fgets(list, sizeof(list), stdin))
	{
		int index = 0, count = 0;
		char after[9];
		char check;
		while(list[index])
		{
			if (list[index] == '-')
			{
				++index;
				continue;
			}
			if (count == 9)
			{
				check = list[index];
				break;
			}
			after[count++] = list[index++];
		}
		int result = 0;
		for (int i = 0 ; i < 9 ; ++i)
			result += (after[i] - '0') * (i + 1);
		result = result % 11;
		if (result == check - '0')
			cout << "Pass" << endl;
		else
			cout << "Fail" << endl;
	}
	return 0;
}
