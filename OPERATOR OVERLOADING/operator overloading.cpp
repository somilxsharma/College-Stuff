
#include <iostream>
using namespace std;

class computation {
public:
    int compute(int a, int b) {
        return a + b;
    }

    float compute(int a, float b) {
        return a + b;
    }

    double compute(int a, double b) {
        return a + b;
    }

    int compute(char a, char b) {
        return int(a) + int(b);
    }

    int compute(char a, int b) {
        return int(a) + b;
    }

    int compute() {
        return 0;
    }
};

int main() {
    computation obj;
    return 0;
}
