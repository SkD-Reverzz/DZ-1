#pragma once
#include<iostream>
#include "Point.h"


using namespace std;

bool Point::saveToFile()
{
    FILE* file;
    fopen_s(&file, "coordinates.txt", "w");
    if (file == nullptr) {
        return false;
    }

    fprintf(file, "%.2f\n", x);
    fprintf(file, "%.2f\n", y);
    fprintf(file, "%.2f\n", z);

    fclose(file);
    return true;
}


bool Point::loadFromFile(const char* filename)
{
    FILE* file;
    fopen_s(&file, filename, "r");
    if (file != nullptr)
    {
        double ValueX, ValueY, ValueZ;
        if (fscanf_s(file, "%lf %lf %lf", &ValueX, &ValueY, &ValueZ) == 3)
        {
            x = ValueX;
            y = ValueY;
            z = ValueZ;
            fclose(file);

            fopen_s(&file, filename, "w");
            if (file != nullptr)
            {
                fprintf_s(file, "%lf %lf %lf", x, y, z);
                fclose(file);
                return true;
            }
            else
            {
                printf("Error opening file for writing.\n");
            }
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
    return false;
}