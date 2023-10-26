#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
		int n;
		cout << "Введите число n: "<< endl; 	
		cin >> n;
		if (n < 1)
			cout << "Ошибка" << endl;
		else
		{
			int sum = 0;
			for (int i = 1; i <= n; i++)
				sum += i;
			cout << "Сумма ровна " << sum << endl;
		}

		return 0;
	}

