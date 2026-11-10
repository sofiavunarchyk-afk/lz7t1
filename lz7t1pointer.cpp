#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Введіть розмір масиву: ";
    cin >> size;

    int* arr = new int[size];            // виділення пам'яті під масив

    for (int i = 0; i < size; i++) {
        cout << "Введіть елемент " << i << ": ";
        cin >> arr[i];
    }

    int max = *arr;                      // перший елемент - поточний максимум
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {          // доступ до елемента через арифметику вказівників
            max = *(arr + i);
            maxIndex = i;
        }
    }

    cout << "Масив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Найбільший елемент: " << max << " (індекс " << maxIndex << ")" << endl;

    delete[] arr;                        // звільнення пам'яті

    return 0;
}