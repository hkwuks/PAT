#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a, b;
	cin >> a>> b;
	string s = to_string(a + b);
	int len = s.length();
	int l = len % 3;
	for (int i = 1; i <=len; ++i)
	{
		cout << s[i - 1];
		if (s[i-1] == '-')
			continue;
		if (i % 3 == l && i != len)
			cout << ',';
	}
	system("pause");
	return 0;
}