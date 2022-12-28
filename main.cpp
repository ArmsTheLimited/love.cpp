#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "lovecpp.h"

extern std::ofstream out("main.lua");

graphics_container::graphics_container(){
    out << "\nfunction love.draw()\n";
}
void graphics_container::rectangle(std::string f, int x, int y, int w, int h){
    out << "    love.graphics.rectangle(\""<<f<<"\","<<x<<","<<y<<","<<w<<","<<h<<")\n";
}

void graphics_container::circle(std::string f, int x, int y, int r){
    out << "    love.graphics.circle(\""<<f<<"\","<<x<<","<<y<<","<<r<<")\n";
}

void graphics_container::polygon(std::string f, std::vector<int> points){
    std::string point_string;
    for (auto &p : points){
        point_string.append(",");
        point_string.append(std::to_string(p));
    }
    out << "    love.graphics.polygon(\""<<f<<"\""<<point_string<<")\n";
}

void graphics_container::end(){
    out << "\nend\n";
}