
#include<iostream>
using namespace std;

int a[] = {21, 14, 5, 6, 9, 8, 6, 4, 6};
int n = sizeof(a) / sizeof(a[0]);

void selectionsort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        if (min != i) {
            swap(a[min], a[i]);
        }
    }
}

void print(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "Original array: ";
    print(a, n);

    selectionsort(a, n);

    cout << "Sorted array: ";
    print(a, n);

    return 0;
}
