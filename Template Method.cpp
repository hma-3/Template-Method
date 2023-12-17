#include <iostream>

using namespace std;

class AbstractClass {
    virtual void step1() {
        cout << "Abstract Step 1" << endl;
    }

    virtual void step2() = 0;

    virtual void step3() {
        cout << "Abstract Step 3" << endl;
    }
public:
    void templateMethod() {
        step1();
        step2();
        step3();
    }
};

class ConcreteClass : public AbstractClass {
    void step2() override {
        cout << "Concrete Step 2" << endl;
    }
};

int main() {
    ConcreteClass concreteObject;
    concreteObject.templateMethod();

    return 0;
}
