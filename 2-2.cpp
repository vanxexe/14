#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    
    int arr[10];
    int x;

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

    int index = -1;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == x) {
            index = i;
            break;
        }
    }

    cout << "Індекс: " << index << endl;

    return 0;
}