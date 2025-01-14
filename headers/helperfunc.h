#ifndef HLP_FUNC
#define HLP_FUNC
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

std::vector<std::vector<std::string>> read_csv(std::fstream& in)
// read a comma seperated line into a 2d vector with type std::string
{
    std::string s;
    std::vector<std::vector<std::string>> out;
    while (std::getline(in, s)) {
        std::vector<std::string> temp_v;
        std::stringstream line(s);
        while (std::getline(line, s, ','))
            temp_v.push_back(s);
        out.push_back(temp_v);
    }
    return out;
} 

#endif