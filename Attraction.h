//
// Created by Samith on 2023-12-17.
//

#ifndef ATTRACTION_H
#define ATTRACTION_H

#include "Time.h"
#include "Admission.h"

class Attraction {
public:
    // Getter and setter methods for name
    std::string getName() const;
    void setName(const std::string& name);

    // Getter and setter methods for Time component
    const Time& getTime() const;
    Time& getTime();

    // Getter and setter methods for Admission component
    const Admission& getAdmission() const;
    Admission& getAdmission();

    Attraction(const std::string& name, const Time& time, const Admission& admission);


private:
    // Attraction name
    std::string name_;

    // Time component (composition)
    Time time_;

    // Admission component (composition)
    Admission admission_;
};

#endif

