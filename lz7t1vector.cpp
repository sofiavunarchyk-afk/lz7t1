#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

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

    int max = vec[0];
    int maxIndex = 0;
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] > max) {
            max = vec[i];
            maxIndex = i;
        }
    }

    cout << "Найбільший елемент: " << max << " (індекс " << maxIndex << ")" << endl;

    return 0;
}