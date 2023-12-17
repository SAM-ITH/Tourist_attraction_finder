//
// Created by Samith on 2023-12-17.
//

#ifndef ADMISSION_H
#define ADMISSION_H

class Admission {
public:
    // Getter and setter methods
    double getPrice() const;
    void setPrice(double newPrice);

    // Optional constructor
    Admission(double initialPrice = 0.0);

private:
    // Price attribute
    double price;
};

#endif
