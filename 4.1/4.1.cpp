#include <iostream>
using namespace std; 
int main()
{
	setlocale(0, "");
	const int n=10;

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Введите число: " << endl;
		cin >> a[i];
	}
	int min_num = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min_num) {
			min_num = a[i];
		}

	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == min_num) {
			count++;

		}
	}
	cout << "Минимальное число: " << min_num << endl;
	cout << "Количество повторений: " << count << endl;





	
	return 0;
}