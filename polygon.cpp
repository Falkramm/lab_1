//
// Created by user on 17/03/2022.
//

#include "polygon.h"

polygon::~polygon() {
    arr.clear();
}

polygon::polygon() {
    square = 0;
    arr.resize(0);
    name = "polygon";
}

polygon::polygon(const polygon &polygon_) {
    square = polygon_.square;
    arr = polygon_.arr;
    name = "polygon";
}

polygon::polygon(std::vector<point> &arr_) {
    arr = arr_;
    square = calculate_square();
    name = "polygon";
}

double polygon::calculate_square() {
    double answer = 0;
    for (size_t i = 0; i < arr.size(); i++) {
        answer += arr[i].get_x_cor() * arr[(i + 1) % arr.size()].get_y_cor();
        answer -= arr[i].get_y_cor() * arr[(i + 1) % arr.size()].get_x_cor();
    }
    return answer;
}

std::ostream &operator<<(std::ostream &out, const polygon &polygon_) {
    for (size_t i = 0; i < polygon_.arr.size(); ++i)
        out << polygon_.arr[i] << "\n";
    return out;
}