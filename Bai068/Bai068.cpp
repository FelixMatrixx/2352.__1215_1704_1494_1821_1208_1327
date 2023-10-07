#include <iostream>
using namespace std;
void Nhap(int [], int& );
int TanSuat(int[], int, int);
void LietKe(int[], int);
int main()
{
	int a[100];
	int k;
	Nhap(a, k);
	LietKe(a, k);
	return 0;
}
void Nhap(int a[], int &n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 0;
		if (flag == 1)
		{
			int dem = TanSuat(a, n, a[i]);
			cout << "\nGia tri: " << a[i];
			cout <<"(" << dem << ")";
		}
	}
}