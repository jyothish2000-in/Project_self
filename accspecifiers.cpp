#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;

public:
    void setData(string, int);

    void display() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car c;
    // c.model = "Tesla"; ❌ Error: model is private
    c.setData("Tesla", 2025);   // ✅ Accessed through public function
    c.display();                // ✅
}

void Car::setData(string a, int b)
{
    model=a;
    year=b;

}
