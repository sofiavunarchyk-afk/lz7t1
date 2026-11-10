#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int rows = 3;
    int cols = 4;

    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 21 - 10;   // випадкові числа від -10 до 10
        }
    }

    cout << "Матриця:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    int sum = 0;
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > 0) {
                sum += arr[i][j];
                count++;
            }
        }
    }

    if (count > 0) {
        cout << "Середнє арифметичне додатних елементів: "
             << (double)sum / count << endl;
    } else {
        cout << "Додатних елементів немає." << endl;
    }

    // Звільнення пам'яті
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}