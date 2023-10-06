#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[], int&);
float Trungbinhnhan(float[], int);
int main()
{
	int n;
	float a[ 100];
	Nhap(a, n);
	cout<< "Gia tri la "<<Trungbinhnhan(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap mang a[" << i << "] ";
		cin >> a[i];
	}
}
float Trungbinhnhan(float a[], int n)
{
	int dem = 0; //dem cac so duong
	float tich = 1; // tich cac so duong
	float trungbinhnhan = 1; // tim trung binh nhan cuar so duong
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			tich = tich * a[i];
			dem++;
		}
	}
	if (dem == 0)
		return 0;
	trungbinhnhan = pow(tich, (float)1 / dem);
	return trungbinhnhan;
}