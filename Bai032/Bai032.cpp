#include <iostream>
using namespace std;
void Nhap(float[], int&);

int main()
{
	float a[100];
	int k;
	Nhap(a, k);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]=";
		cin >> a[i];
	}
}





