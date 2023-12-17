//
// Created by Samith on 2023-12-17.
//

#include <string>
#include "Attraction.h"

std::string Attraction::getName() const {
    return name_;
}

void Attraction::setName(const std::string& name) {
    name_ = name;
}

const Time& Attraction::getTime() const {
    return time_;
}

Time& Attraction::getTime() {
    return time_;
}

const Admission& Attraction::getAdmission() const {
    return admission_;
}

Admission& Attraction::getAdmission() {
    return admission_;
}

Attraction::Attraction(const std::string& name, const Time& time, const Admission& admission) :
        name_(name), time_(time), admission_(admission) {}

