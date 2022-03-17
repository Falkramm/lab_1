//
// Created by user on 17/03/2022.
//

#include "point.h"

point::~point() {
    this->name.clear();
    this->color.clear();
}

point::point() {
    this->name = "";
    this->color = "";
    this->x_cor = 0;
    this->y_cor = 0;
}

point::point(const point &point_) {
    this->name = point_.name;
    this->color = point_.color;
    this->x_cor = point_.x_cor;
    this->y_cor = point_.y_cor;
}

point::point(std::string &name_, std::string &color_, double x_cor_, double y_cor_) {
    this->name = name_;
    this->color = color_;
    this->x_cor = x_cor_;
    this->y_cor = y_cor_;
}

std::ostream &operator<<(std::ostream &out, const point &point_) {
    out << point_.name << ' ' << point_.color << ' ' << point_.x_cor << ' ' << point_.y_cor;
    return out;
}

std::string point::get_name() {
    return this->name;
}

std::string point::get_color() {
    return this->color;
}

double point::get_x_cor() {
    return this->x_cor;
}

double point::get_y_cor() {
    return this->y_cor;
}

