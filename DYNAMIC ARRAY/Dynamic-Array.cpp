#include <iostream>

using namespace std;

class DynamicArray {
private:
    int *arr;
    int size;
public:
    DynamicArray(int s) : size(s) {
        arr = new int[size];
    }

    ~DynamicArray() {
        delete[] arr;
    }

    void insert(int element, int index) {
        if (index >= 0 && index < size) {
            arr[index] = element;
        } else {
            cout << "Invalid index!" << endl;
        }
    }

    void display() {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DynamicArray dynArray(5); // Initial size of dynamic array is 5
    dynArray.insert(1, 0);
    dynArray.insert(2, 1);
    dynArray.insert(3, 2);
    dynArray.insert(4, 3);
    dynArray.insert(5, 4);

    dynArray.display();

    return 0;
}
