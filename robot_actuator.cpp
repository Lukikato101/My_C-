#include <iostream>
using namespace std;

using namespace std;
class Actuator {
    public:
        virtual void activate() = 0;

};

class Motor : public Actuator {
    public:
        void activate() override {
            cout << "Motor is running" << endl;
        }
};

class Servo : public Actuator {
    public:
        void activate() override {
            cout << "Servo adjusting Posistion" << endl;
        }
};


