#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int arr[10];
    int x;
    bool found = false;

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Масив: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Введіть число для пошуку: ";
    cin >> x;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == x) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Число присутнє в масиві" << endl;
    } else {
        cout << "Число відсутнє в масиві" << endl;
    }

    return 0;
}