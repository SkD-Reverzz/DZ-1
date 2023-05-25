#include <iostream>
#include <conio.h>
#include "Point.h"
#include "Save_and_Load.h"

int main() 
{
    Point point;

    point.setX(-4.53);
    point.setY(2.84);
    point.setZ(7.15);

    cout << "1. Save coordinates" << endl;
    cout << "\n2. Load coordinates" << endl;
    cout << "\n3 Show Show_Coordinates" << endl;
    int choice_menu = _getch();

    switch (choice_menu)
    {
    case '1':
        point.saveToFile();
        point.Show_Coordinates();
        break;
    case '2':
        point.loadFromFile("coordinates.txt");
        point.showCoordinates_file("coordinates.txt");
        break;
    case '3':
        point.showCoordinates_file("coordinates.txt");
        break;
    }
}
