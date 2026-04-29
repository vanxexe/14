#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    double arr[5] = {1.2, 3.05, 4.001, 7.008, 9};
    double x;
    const double eps = 0.001;

    cout << "Масив: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Введіть число для пошуку: ";
    cin >> x;

    int index = -1;

    for (int i = 0; i < 5; i++) {
        if (arr[i] > x - eps && arr[i] < x + eps) {
            index = i;
            break;
        }
    }

    cout << "Індекс: " << index << endl;

    return 0;
}