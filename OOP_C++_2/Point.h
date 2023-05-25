#pragma once
#include <iostream>

using namespace std;

class Point {
private:
    double x;
    double y;
    double z;

public:
    void setX(double ValueX);
    void setY(double ValueY);
    void setZ(double ValueZ);

    double getX();
    double getY();
    double getZ();

    bool saveToFile();
    bool loadFromFile(const char* filename);

    void Show_Coordinates();
    void showCoordinates_file(const char* filename);
};

#pragma region Sets
void Point::setX(double ValueX) 
{
    x = ValueX;
}

void Point::setY(double ValueY) 
{
    y = ValueY;
}

void Point::setZ(double ValueZ) 
{
    z = ValueZ;
}
#pragma endregion

#pragma region Show_Coordinates
void Point::showCoordinates_file(const char* filename)
{
    FILE* file;
    fopen_s(&file, filename, "r");
    if (file != nullptr)
    {
        double x, y, z;
        if (fscanf_s(file, "%lf %lf %lf", &x, &y, &z) == 3)
        {
            printf("Coordinates:\n");
            printf("x: %lf\n", x);
            printf("y: %lf\n", y);
            printf("z: %lf\n", z);
        }
        else
        {
            printf("Error reading coordinates from file.\n");
        }
        fclose(file);
    }
    else
    {
        printf("Error opening file for reading.\n");
    }
}

void Point::Show_Coordinates()
{
    cout << "Coordinates: (" << x << ", " << y << ", " << z << ")" << endl;
}
#pragma endregion
