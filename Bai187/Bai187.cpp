#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
int ViTriDuongDau(float[], int);
int ktToanDuong(float[], int, int);
float TongCon(float[], int, int);
void DuongLonNhat(float[], int n, int&, int&);

int main()
{
	float a[500];
	int n;
	int vtd, vtc;
	Nhap(a, n);
	DuongLonNhat(a, n, vtd, vtc);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "\nNhap a[" << i << "]:";
		cin >> a[i];
	}
}
int ViTriDuongDau(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
			return i;
	return -1;
}
int ktToanDuong(float a[], int l, int vt)
{
	int flag = 1;
	for (int i = 0; i <= l - 1; i++)
		if (a[i + vt] <= 0)
			flag = 0;
	return flag;
}
float TongCon(float a[], int l, int vt)
{
	float s = 0;
	for (int i = 0; i <= l - 1; i++)
		s += a[i + vt];
	return s;
}
void DuongLonNhat(float a[], int n, int& vtd, int& vtc)
{
	int vt = ViTriDuongDau(a, n);
	if (vt == -1)
	{
		vtd = vtc = vt;
		return;
	}
	float smax = a[0];
	vtd = vtc = vt;
	for (int l = 1; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (ktToanDuong(a, l, vt) == 1 && TongCon(a, l, vt) > smax)
			{
				vtd = vt;
				vtc = vt + l - 1;
				smax = TongCon(a, l, vt);
			}
		}
	}
	cout << "Tong duong lon nhat: " << smax;
	cout << "\nDay con co tong duong lon nhat: ";
	for (int i = vtd; i <= vtc; i++)
		cout << a[i] << setw(8);
}
