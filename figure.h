//
// Created by user on 17/03/2022.
//

#ifndef LAB_1_FIGURE_H
#define LAB_1_FIGURE_H

#include <string>
#include <iostream>

#pragma once

class figure {
protected:

    const int id;
    std::string name;
public:
    static int count;

    ~figure();

    figure();

    figure(std::string &name_);

    figure(const figure &figure_);

    virtual std::string get_name() = 0;

    virtual int get_id() = 0;
};


#endif //LAB_1_FIGURE_H
