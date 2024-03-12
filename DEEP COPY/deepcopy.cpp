
#include <iostream>
#include <cstring>
using namespace std;

class sample {
public:
    char *name;
    sample(const char *str, int length) {
        name = new char[length + 1];
        strcpy(name, str);
    }
    sample(const sample& other) {
        int length = strlen(other.name);
        name = new char[length + 1];
        strcpy(name, other.name);
    }
    ~sample() {
        delete[] name;
    }
};

int main(int argc, char *argv[]) {
    sample user1("chitkara", 8);
    sample user2 = user1;
    strcpy(user2.name, "dummy");
    cout << "User 1 name: " << user1.name << endl;
    cout << "User 2 name: " << user2.name << endl;
    return 0;
}
