#include <stdio.h>

// inputs
float width, length, height;

// results
float wlFaceArea, lhFaceArea, whFaceArea; // Face Areas
float wlFaceCircum, lhFaceCircum, whFaceCircum; // Face Circumferences
float volume;

void RequestInput()
{
    printf("Width of Cube: ");
    scanf("%f", &width);

    printf("Lenght of Cube: ");
    scanf("%f", &length);

    printf("Height of Cube: ");
    scanf("%f", &height);
}

void CalculateAreas()
{
    wlFaceArea = width * length;
    lhFaceArea = length * height;
    whFaceArea = width * height;
}

void CalculateCircums()
{
    wlFaceCircum = 2 * width + 2 * length;
    lhFaceCircum = 2 * length + 2 * height;
    whFaceCircum = 2 * width + 2 * height;
}

void Output()
{
    printf("\nAreas: w l: %fAU, l h: %fAU, w h: %fAU\n", wlFaceArea, lhFaceArea, whFaceArea);
    printf("Circumferences : w l: %fLU, l h: %fLU, w h: %fLU\n", wlFaceCircum, lhFaceCircum, whFaceCircum);
    printf("Volume: %fVU\n", volume);
}

int main()
{
    printf("Widrolo Util: Cube Calculator\n");

    RequestInput();

    CalculateAreas();
    CalculateCircums();
    volume = wlFaceArea * height;

    Output();

    return 0;
}