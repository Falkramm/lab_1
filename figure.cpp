//
// Created by user on 17/03/2022.
//

#include "figure.h"

figure::~figure() {
    this->name.clear();
}

figure::figure() : id(count) {
    this->name = "";
    count++;
}

figure::figure(const figure &figure_) : id(count) {
    this->name = figure_.name;
    count++;
}

figure::figure(std::string &name_) : id(count) {
    this->name = name_;
    count++;
}

int figure::count = 0;