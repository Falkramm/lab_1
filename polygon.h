//
// Created by user on 17/03/2022.
//

#ifndef LAB_1_POLYGON_H
#define LAB_1_POLYGON_H
#pragma once

#include "figure.h"
#include "point.h"
#include <iostream>
#include "vector"

class polygon : public figure {
private:
    std::vector<point> arr;
    double square;

    double calculate_square();

public:
    ~polygon();

    polygon();

    polygon(const polygon &polygon_);

    polygon(std::vector<point> &arr_);

    friend std::ostream &operator<<(std::ostream &out, const polygon &polygon_);
};


#endif //LAB_1_POLYGON_H
