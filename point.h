//
// Created by user on 17/03/2022.
//

#ifndef LAB_1_POINT_H
#define LAB_1_POINT_H

#include <string>
#include <iostream>

class point {
private:
    std::string name, color;
    double x_cor, y_cor;
public:
    ~point();

    point();

    point(const point &point_);

    point(std::string &name_, std::string &color_, double x_cor_, double y_cor_);

    friend std::ostream &operator<<(std::ostream &out, const point &point_);

    std::string get_name();

    std::string get_color();

    double get_x_cor();

    double get_y_cor();
};


#endif //LAB_1_POINT_H
