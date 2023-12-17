//
// Created by Samith on 2023-12-17.
//

#include <iostream>
#include "Time.h"

int Time::getOpeningTime() const {
    return openingTime_;
}

void Time::setOpeningTime(int openingTime) {
    if (openingTime < 0 || openingTime > 23) {
        std::cerr << "Error: Opening time must be between 0 and 23." << std::endl;
    } else {
        openingTime_ = openingTime;
    }
}

int Time::getClosingTime() const {
    return closingTime_;
}

void Time::setClosingTime(int closingTime) {
    if (closingTime < 0 || closingTime > 23) {
        std::cerr << "Error: Closing time must be between 0 and 23." << std::endl;
    } else if (closingTime < openingTime_) {
        std::cerr << "Error: Closing time cannot be before opening time." << std::endl;
    } else {
        closingTime_ = closingTime;
    }
}

Time::Time(int openingTime, int closingTime) : openingTime_(openingTime), closingTime_(closingTime) {}
