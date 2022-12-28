#include "color.h"
#include "vec3.h"

#include <iostream>

int main() {
    // Image
    const int image_width = 256;
    const int image_height = 256;

    // Render
    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = image_height - 1; j >= 0; --j) {
        std::cerr << "\rScanlines remaining: " << j << ' ' << std::flush;
        for (int i = 0; i < image_width; ++i) {
            Color pixelColor(double(i) / (image_width - 1), double(j) / (image_height - 1), 0.25);
            writeColor(std::cout, pixelColor);
        }
    }

    return 0;
}