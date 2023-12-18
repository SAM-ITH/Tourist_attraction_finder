//
// Created by Samith on 2023-12-17.
//

#ifndef MUSEUM_H
#define MUSEUM_H

#include <string>
#include "Attraction.h"

class Museum : public Attraction {
public:
    // Optional: Constructor that takes additional park-specific arguments
    Museum(const std::string& name, const Time& time, const Admission& admission);

private:
    // Park-specific data members

};

#endif