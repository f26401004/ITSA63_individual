#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int n;
int list[25];
bool visited[25];

bool check(int length, int side, int list[], int index, int count)
{
	if (count == length)
	{
		count = 0;
		++side;
	}
	if (side == 4)
		return true;
	for (int i = 0 ; i < n ; ++i)
	{
		if (visited[i])
			continue;
		if (count + list[i] <= length)
		{
			visited[i] = true;
			if (check(length, side, list, i, count + list[i]))
				return true;
			else
				visited[i] = false;
		}
	}
	return false;
	
	
}

int main()
{
	while(cin >> n)
	{
		if (n <= 3)
		{
			cout << "no" << endl;
			continue;
		}
		memset(visited, false, sizeof(visited));
		double total = 0;
		for (int i = 0 ; i < n ; ++i)
		{
			cin >> list[i];
			total = total + list[i];
		}
		int length = total / 4;
		if (total / 4 - length > 0)
			cout << "no" << endl;
		else
		{
			if (check(length, 0, list, 0, 0))
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
	}
	return 0;
}
