//
// Created by Samith on 2023-12-17.
//

#ifndef THEATRE_H
#define THEATRE_H

#include <string>
#include "Attraction.h"

class Theatre : public Attraction {
public:
    // Optional: Constructor that takes additional park-specific arguments
    Theatre(const std::string& name, const Time& time, const Admission& admission);

private:
    // Park-specific data members

};

#endif