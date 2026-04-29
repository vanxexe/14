#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int arr[6] = {1, 3, 5, 7, 9};
    int n = 5;
    int x;

    cout << "Введіть число: ";
    cin >> x;

    arr[n] = x; 

    int i = 0;
    while (arr[i] != x) {
        i++;
    }

    if (i < n) {
        cout << "Знайдено, індекс: " << i << endl;
    } else {
        cout << "Не знайдено" << endl;
    }

    return 0;
}