#include <iostream>
#include <iomanip>

using namespace std;

void Create(int* a, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

void Print(const int* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

int Sum(const int* a, int size) {
    if (size == 0) {
        return 0;
    }
    else {
        return a[size - 1] + Sum(a, size - 1);
    }
}

int main() {
    srand((unsigned)time(NULL));

    const int n = 10;
    int a[n];
    int Low = -10;
    int High = 10;

    Create(a, n, Low, High);
    cout << "Original array: ";
    Print(a, n);

    int sum = Sum(a, n);
    cout << "Sum of elements: " << sum << endl;

    return 0;
}