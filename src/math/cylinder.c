#include <stdio.h>
#include "mathconstants.h"

// inputs
float radius, height;

// results
float areaOfBase, circumferenceOfBase; // Base
float latSurfaceCylinder, volumeCylinder; // Cylinder


int main()
{
    printf("Widrolo Util: Cylinder Calculator\n");

    printf("Radius of Base: ");
    scanf("%f", &radius);

    printf("Height of Cylinder: ");
    scanf("%f", &height);

    printf("\nThe Cylinder with the radius of %f, and height of %f has these properties:\n\n", radius, height);

    areaOfBase = PI * radius * radius;
    circumferenceOfBase = PI * radius * 2;

    latSurfaceCylinder = circumferenceOfBase * height;
    volumeCylinder = areaOfBase * height;

    printf("Base circumference: %f LU\n", circumferenceOfBase);
    printf("Base area: %f AU\n", areaOfBase);
    printf("Lateral surface area: %f AU\n", latSurfaceCylinder);
    printf("Cylinder volume: %f VU\n", volumeCylinder);

    return 0;
}