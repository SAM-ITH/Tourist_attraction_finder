#include <iostream>
#include <vector>
#include "Attraction.h"

const int OPENING_TIME_THRESHOLD = 1900; // 7 PM
const double PRICE_THRESHOLD = 5.0; // £5

int main() {
    // Create some sample attractions
    Attraction ferrisWheel("Ferris Wheel", Time(1000, 2200), Admission(8.00)); // Open 10 AM - 10 PM, £8
    Attraction hauntedHouse("Haunted House", Time(1200, 0000), Admission(6.00)); // Open 12 PM - midnight, £6
    Attraction laserTag("Laser Tag", Time(0900, 2100), Admission(4.00)); // Open 9 AM - 9 PM, £4

    // Create a vector of attractions
    std::vector<Attraction> attractions = {ferrisWheel, hauntedHouse, laserTag};

    // Print header
    std::cout << "Open after " << OPENING_TIME_THRESHOLD << " and under £" << PRICE_THRESHOLD << ":" << std::endl;

    // Iterate over attractions and find matching ones
    for (const Attraction& attraction : attractions) {
        if (attraction.getTime().getOpeningTime() < OPENING_TIME_THRESHOLD &&
            attraction.getAdmission().getPrice() < PRICE_THRESHOLD) {
            std::cout << "- " << attraction.getName() << std::endl;
        }
    }

    return 0;
}
