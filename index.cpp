#include <iostream>
using namespace std;

class Pet {
    string name;
    bool isAdopted;

public:
    Pet(string n) : name(n), isAdopted(false) {}
    void adopt() { isAdopted = true; }
    void showDetails() {
        cout << "Name: " << name << ", Adopted: " << (isAdopted ? "Yes" : "No") << endl;
    }
};

int main() {
    // Dynamically allocating memory for a new Pet object
    Pet* pet1 = new Pet("Buddy");

    pet1->showDetails();
    pet1->adopt();
    pet1->showDetails();

    // Properly deallocating memory using delete
    delete pet1;

    return 0;
}
