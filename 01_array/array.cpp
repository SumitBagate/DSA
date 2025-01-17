#include<iostream>
using namespace std;

struct Array {
    int A[20];
    int length;
};

// Function to perform linear search
//Linear Search compare each numder in an array   to given key
int Linear_search(struct Array arr, int key) {
    for (int i = 0; i < arr.length; i++) {
        if (key == arr.A[i])
            return i;
    }
    return -1;
}

// Function to display the array
void Display(struct Array arr) {
    for (int i = 0; i < arr.length; i++) {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

int main() {
    struct Array arr = {{2, 3, 4, 5, 6, 10, 5}, 7}; // Array initialization

    int index = Linear_search(arr, 4);
    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    Display(arr);

    return 0;
}
