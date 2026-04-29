#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int arr[10];
    int x;

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 10;
    }

    cout << "Масив: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Введіть число для пошуку: ";
    cin >> x;

    int index = -1;
    int count = 0;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == x) {
            if (index == -1) {
                index = i; 
            }
            count++;
        }
    }

    cout << "Індекс першого входження: " << index << endl;
    cout << "Кількість входжень: " << count << endl;

    return 0;
}