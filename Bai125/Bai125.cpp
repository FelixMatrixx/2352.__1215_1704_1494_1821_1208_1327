#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[], int&);
int ktTang(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << ktTang(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}
int ktTang(float a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] > a[i + 1])
			flag = 0;
	return flag;
}