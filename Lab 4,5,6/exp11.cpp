#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class IntArray {
private:
    int* arr;
    int size;

public:
    IntArray(int n) : size(n) {
        arr = new int[size];
        cout << "Memory allocated for " << size << " integers." << endl;
    }

    ~IntArray() {
        delete[] arr;
        cout << "Memory deallocated for " << size << " integers." << endl;
    }

    void setValues() {
        for (int i = 0; i < size; ++i) {
            arr[i] = i * 10;
        }
    }

    void display() {
        cout << "Array contents: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;
    
    IntArray myArray(arraySize);

    myArray.setValues();

    myArray.display();

    return 0;
}
