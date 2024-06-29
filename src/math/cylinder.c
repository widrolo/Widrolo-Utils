#include <stdio.h>
#include "mathconstants.h"

// inputs
float radius, height;

// results
float areaOfBase, circumferenceOfBase; // Base
float latSurfaceCylinder, volumeCylinder; // Cylinder

void RequestInput()
{
    printf("Radius of Base: ");
    scanf("%f", &radius);

    printf("Height of Cylinder: ");
    scanf("%f", &height);
}

void CalculateBase()
{
    areaOfBase = PI * radius * radius;
    circumferenceOfBase = PI * radius * 2;
}

void CalculateCylinder()
{
    latSurfaceCylinder = circumferenceOfBase * height;
    volumeCylinder = areaOfBase * height;
}

void Output()
{
    printf("\nBase circumference: %fLU\n", circumferenceOfBase);
    printf("Base area: %fAU\n", areaOfBase);
    printf("Lateral surface area: %fAU\n", latSurfaceCylinder);
    printf("Cylinder volume: %fVU\n", volumeCylinder);
}

int main()
{
    printf("Widrolo Util: Cylinder Calculator\n");

    RequestInput();
    CalculateBase();
    CalculateCylinder();
    Output();

    return 0;
}