#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
    Circle* c = new Circle(0, 0, 2);
    cout << "Площадь окружности:" << c->Area() << endl;
    return 0;
}
