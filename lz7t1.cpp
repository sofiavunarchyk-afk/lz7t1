#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    cout << "=== Вказівник ===\n";
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

    // ---------- Частина 2. Реалізація за допомогою vector ----------
    cout << "\n=== Vector ===\n";
    vector<int> vec;

    for (int i = 0; i < 10; i++) {
        int randomNum = rand() % 21 - 10;   // випадкові числа від -10 до 10
        vec.push_back(randomNum);
    }

    cout << "Початковий масив:\n";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    int maxVec = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] > maxVec) {
            maxVec = vec[i];
        }
    }

    cout << "Найбільший елемент: " << maxVec << endl;

    return 0;
}