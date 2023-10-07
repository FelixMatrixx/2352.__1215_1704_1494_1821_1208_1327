#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float LonNhat(float[], int);
float NhoNhat(float[], int);
void BienDoi(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang da nhap la: ";
	Xuat(b, k);
	cout << "\nSau sap xep: ";
	BienDoi(b, k);
	Xuat(b, k);
	return 0;
}

void Nhap(float  a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}

void BienDoi(float a[], int n)
{
	float ln = LonNhat(a, n);
	float nn = NhoNhat(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == ln)
			a[i] = nn;
		else
			if (a[i] == nn)
				a[i] = ln;
	}
}

// void BienDoi(float a[], int n)
//{
// float ln = LonNhat(a, n);
//float nn = NhoNhat(a, n);
//for (int i = 0; i < n; i++);
//    if (a[i} == ln || a[i] == nn)
// a[i]=ln+nn-a[i];
//}


