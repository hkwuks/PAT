#include<iostream>
using namespace std;
int main()
{
	int rp=0, num, a, b;
	float n;
	float m[1001] = { 0 };
	cin >> num;
	for (int i = num; i > 0; --i)
	{
		cin >> a >> n;
		m[a] += n;
	}
	cin >> num;
	for (int i = num; i> 0; --i)
	{
		cin >> b >> n;
		m[b] += n;
	}
	for (int i = 0; i < 1001; ++i)
		if (m[i] != 0)++rp;
	cout << rp;
	for (int i =1000; i>=0; --i)
		if (m[i] != 0) printf(" %d %.1f", i, m[i]);
	system("pause");
	return 0;
}