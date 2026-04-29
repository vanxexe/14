#include <iostream>
#include <string>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    string students[5] = {"Іваненко", "Петренко", "Шевченко", "Коваль", "Бондар"};
    string target;

    cout << "Список студентів: ";
    for (int i = 0; i < 5; i++) {
        cout << students[i] << " ";
    }
    cout << endl;

    cout << "Введіть прізвище: ";
    cin >> target;

    int index = -1;

    for (int i = 0; i < 5; i++) {
        if (students[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "Знайдено на позиції: " << index << endl;
    } else {
        cout << "Не знайдено" << endl;
    }

    return 0;
}