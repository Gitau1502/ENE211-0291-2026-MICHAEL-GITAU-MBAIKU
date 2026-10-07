#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, surface_area;

    // Take the radius of a sphere as input
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculate the surface area (A = 4 * pi * r^2)
    surface_area = 4 * PI * radius * radius;

    // Display the result
    printf("Surface Area: %.2f\n", surface_area);

    return 0;
}
