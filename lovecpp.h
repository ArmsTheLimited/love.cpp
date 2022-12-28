#ifndef LOVECPP_H
#define LOVECPP_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

extern std::ofstream out;

class graphics_container {
public:
    graphics_container();
    void rectangle(std::string f, int x, int y, int w, int h);
    void circle(std::string f, int x, int y, int r);
    void polygon(std::string f, std::vector<int> points);
    void end();
};

class love {
public:
    graphics_container graphics;
};

#endif