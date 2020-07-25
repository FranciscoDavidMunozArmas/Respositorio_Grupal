#include <iostream>
#include <string>

#include "Libraries/Input.cpp"

#include "Reverse_Polish.cpp"
#include "Controller.cpp"

using namespace std;

int main()
{
    Controller _control;
    do {
        _control.menu();
    } while (true);

    return 0;
}
