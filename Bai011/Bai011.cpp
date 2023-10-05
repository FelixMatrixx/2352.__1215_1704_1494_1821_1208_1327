#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau:";
	Xuat(b, k);
	LietKe(b, k);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}
void LietKe(int a[], int n)
{
	int flag, t, du;
	flag = 1;
	cout << "\nCac so dang 3^m co trong mang: ";
	for (int i = 0; i < n; i++)
	{
		t = a[i];
		while (t > 1)
		{
			du = t % 3;
			if (du != 0)
				flag = 0;
			t = t / 3;
		}
		if (flag == 1)
			cout << setw(8) << a[i];
	}
}