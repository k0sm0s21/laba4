#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    unsigned long long int num1 = 1, num2 = 0, s;
    int n;

    cout << "Введите количество чисел: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        s = num1 + num2;
        num1 = num2;
        num2 = s;
        cout << s << " \n";
    }

    return 0;
}