//
// Created by Samith on 2023-12-17.
//

#include <iostream>
#include "Admission.h"

double Admission::getPrice() const {
    return price;
}

void Admission::setPrice(double newPrice) {
    if (newPrice < 0) {
        std::cerr << "Error: Price cannot be negative." << std::endl;
    } else {
        price = newPrice;
    }
}

Admission::Admission(double initialPrice) : price(initialPrice) {}

