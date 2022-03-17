#pragma once
#include <iostream>
#include "polygon.h"
int main() {
std::vector<point> arr;
int n;
std::cin >> n;
arr.resize(n);
for(int i=0;i<n;i++)
{
    std::string name,color;
    double x,y;
    std::cin >> name >> color >> x >> y;
    arr[i]=point(name,color,x,y);
}

polygon reqtungel=polygon(arr);
std::cout << reqtungel;
}
