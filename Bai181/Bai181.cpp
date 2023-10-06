#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[], int&);
int ViTriDuongDau(float[], int);
float TongCon(float[], int, int);
int ktCon(float[], int, int);
void DuongLonNhat(float[], int, int&, int&);

int main()
{
	float a[500];
	int n, vtd, vtc;
	Nhap(a, n);
	DuongLonNhat(a, n, vtd, vtc);
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
int ViTriDuongDau(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
			return i;
	return -1;
}
float TongCon(float a[], int l, int vt)
{
	float s = 0;
	for (int i = 0; i <= l - 1; i++)
		s += a[i + vt];
	return s;
}
int ktCon(float a[], int l, int vt)
{
	int flag = 1;
	for (int i = 0; i <= l - 1; i++)
		if (a[i + vt] <= 0)
			flag = 0;
	return flag;
}
void DuongLonNhat(float a[], int n, int& vtd, int& vtc)
{
	int vt = ViTriDuongDau(a, n);
	if (vt == -1)
	{
		vtd = vtc = vt;
		return;
	}
	float smax = a[vt];
	vtd = vtc = vt;
	for (int l = 1; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (ktCon(a, l, vt) == 1 && TongCon(a, l, vt) > smax)
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
		cout << setw(8) << a[i];
}
