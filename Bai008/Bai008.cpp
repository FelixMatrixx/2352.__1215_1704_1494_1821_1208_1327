#include <iostream>
using namespace std;
void Nhap(int[], int&);
int ChuSoDau(int);
void LietKe(int[], int);
int main()
{
	int a[300], k;
	Nhap(a, k);
	LietKe(a, k);
	return 0;

}
void Nhap(int a[], int &n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
int ChuSoDau(int n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}
void LietKe(int a[], int n)
{
	for (int i=0; i<=n-1; i++)
		if (ChuSoDau(a[i])%2!=0)
			cout << a[i];
}