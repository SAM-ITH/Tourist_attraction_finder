//
// Created by Samith on 2023-12-17.
//

#ifndef PARK_H
#define PARK_H

#include <string>
#include "Attraction.h"

class Park : public Attraction {
public:
    // Optional: Constructor that takes additional park-specific arguments
    Park(const std::string& name, const Time& time, const Admission& admission);

private:
    // Park-specific data members

};

#endif
