#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(0, "");
    int nizm, ncst;
    string result = "";
    int num_at_mom;

    cout << "Введите число: ";
    cin >> nizm;
    ncst = nizm;
    while (nizm != 0) {
        num_at_mom = nizm % 2;
        result = to_string(num_at_mom) + result;
        nizm /= 2; //n=n/2
    }

    cout << "Число " << ncst << " из системы счисления 10 в системе счисления 2 равно " << result << endl;

    return 0;
}