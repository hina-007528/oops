#include <iostream>
using namespace std;

class Geometry {
public:
    float length;
    float width;
    
    void checkShape() {
        if (length == width) {
            cout << "Square" << endl;
        } else {
            cout << "Rectangle" << endl;
        }
    }
};

int main() {
    Geometry shape;

   
    cout << "Enter the length: ";
    cin >> shape.length;

    cout << "Enter the width: ";
    cin >> shape.width;

    shape.checkShape();

    return 0;
}
