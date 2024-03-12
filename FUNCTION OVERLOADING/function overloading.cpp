#include <iostream>
using namespace std;

class User {
private:
    string name;
    int birth_year;
    int birth_day;
    int birth_month;
    double salary;
public:
    int operator==(const User& other) const {
        if (birth_year < other.birth_year) {
            return 1;
        } else if (birth_year > other.birth_year) {
            return -1;
        } else {
            if (birth_month < other.birth_month) {
                return 1;
            } else if (birth_month > other.birth_month) {
                return -1;
            } else {
                if (birth_day < other.birth_day) {
                    return 1;
                } else if (birth_day > other.birth_day) {
                    return -1;
                } else {
                    return 0;
                }
            }
        }
    }

    double operator+(const User& other) const {
        return (salary + other.salary) / 2.0;
    }

    User operator+(int percent) {
        salary *= (1 + percent / 100.0);
        return *this;
    }
};

int main() {
    User user1;
    User user2 = user1;
    return 0;
}
