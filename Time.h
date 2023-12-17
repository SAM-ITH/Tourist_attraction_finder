//
// Created by Samith on 2023-12-17.
//

#ifndef TIME_H
#define TIME_H

class Time {
public:
    // Getter and setter methods
    int getOpeningTime() const;
    void setOpeningTime(int openingTime);

    int getClosingTime() const;
    void setClosingTime(int closingTime);

    // Optional constructor (assumes 24-hour format)
    Time(int openingTime = 0, int closingTime = 23);

private:
    // Time attributes
    int openingTime_;
    int closingTime_;
};

#endif
