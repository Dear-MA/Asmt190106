#include <iostream>
using namespace std;
#define N 8
int main()
{
	char shuRu;
	int sum(0), X, Y;//Y=X-X0+Y0;  Y=-X+X0+Y0;用于对角线查重 
	int i(0), zuoBiao[N] = { 0 };
	int flag (1);
	for (; i < N; i++)
	{
		cin >> shuRu;
		if (shuRu != '*') {
			X = shuRu - 48; sum += X;
			zuoBiao[i] = X;
		}
		else Y = i;//*的纵坐标 
	}
	X = 36 - sum;//计算*的横坐标， 
	zuoBiao[Y - 1] = X;
	for (i = 0; i < N; i++)
		if ( ( i - Y ==  zuoBiao[i] - X && i != Y ) ||
			 ( i - Y == -zuoBiao[i] + X && i + Y != 0 ) )//舍去自身这一情况 
			flag = 0;
	if (flag) cout << X << endl;
	else cout << "No Answer" << endl;
	return 0;
}
