#include <iostream>
#include <vector>
#include "Attraction.h"
#include "Park.h"
#include "Museum.h"
#include "Theatre.h"

using namespace std;

int main() {
    // Create some example attractions
    Park park1("Central Park", Time(10, 18), Admission(10.0));
    Museum museum1("National Museum", Time(9, 17), Admission(8.0));
    Theatre theater1("Grand Theater", Time(12, 22), Admission(15.0));

    // Store attractions in a vector
    vector<Attraction*> attractions;
    attractions.push_back(&park1);
    attractions.push_back(&museum1);
    attractions.push_back(&theater1);

    // Find attractions open after 1900 and costing less than £5
    cout << "Attractions open after 7 PM and costing less than £5:" << endl;
    for (const Attraction* attraction : attractions) {
        if (attraction->getTime().getClosingTime() > 19 && attraction->getAdmission().getPrice() < 5.0) {
            cout << "- " << attraction->getName() << endl;
        }
    }

    return 0;
}
