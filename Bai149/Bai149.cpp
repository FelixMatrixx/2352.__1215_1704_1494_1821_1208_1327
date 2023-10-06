#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[], int&);
void NguyenHoa(float[], int);
void Xuat(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	NguyenHoa(a, n);
	Xuat(a, n);
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
void NguyenHoa(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			a[i] = int(a[i] + 0.5);
		else
			a[i] = int(a[i] - 0.5);
	}
}
void Xuat(float a[], int n)
{
	cout << "Mang duoc nguyen hoa: ";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}