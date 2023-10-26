#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int max_count =99, min_count = -99, max_ind, min_ind;
    int const N = 10;
    int x[N] = {17, 26, 33, 46, 55, 68, 71, 80, 92, 97};
    for (int i = 0; i < N; i++) {
        cout << x[i];
    }
    for (int j = 0; j < N; j++) {
        if (x[j] < max_count) {
            max_count = x[j];
            min_ind = j;
        }
    }
    for (int a = 0; a < N; a++) {
        if (x[a] > min_count) {
            min_count = x[a];
            max_ind = a;
        }
    }
    cout << endl << "минимальный элемент массива: " << max_count << " индекс: " << min_ind;
    cout << endl << "максимальный элемент массива: " << min_count << " индекс: " << max_ind;
    return 0;
}