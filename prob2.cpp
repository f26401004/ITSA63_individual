#include <iostream>
#include <cstdio>
#include <stack>
#include <cstring>
using namespace std;

bool check(char* list)
{
	stack<char> s;
	for (int i = 0 ; i < strlen(list); ++i)
	{
		if (list[i] == '(')
			s.push('(');
		if (list[i] == ')')
		{
			if (s.empty() || s.top() != '(')
				return false;
			else
				s.pop();
		}
	}
	if (s.size() == 0)
		return true;
	else
		return false;

}

int main()
{
	int n;
	cin >> n;
	cin.get();
	while(n--)
	{
		char list[110];
		fgets(list, sizeof(list), stdin);
		if (check(list))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
