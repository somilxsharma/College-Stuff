#include <iostream>

using namespace std;

class ArraySum {
private:
    int arr1[5], arr2[5];
public:
    ArraySum(int a[], int b[]) {
        for (int i = 0; i < 5; ++i) {
            arr1[i] = a[i];
            arr2[i] = b[i];
        }
    }

    void findMaxSumArray() {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 5; ++i) {
            sum1 += arr1[i];
            sum2 += arr2[i];
        }
        if (sum1 > sum2)
            cout << "Array 1 has a higher sum." << endl;
        else if (sum2 > sum1)
            cout << "Array 2 has a higher sum." << endl;
        else
            cout << "Both arrays have the same sum." << endl;
    }
};

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};

    ArraySum arrSum(arr1, arr2);
    arrSum.findMaxSumArray();

    return 0;
}
