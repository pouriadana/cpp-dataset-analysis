#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "headers/helperfunc.h"

/* Symbolic constants */
#define MAX_COLS 50

int main()
{
    // std::string columns_arr[MAX_COLS];
    int line_no = 1;
    std::vector<std::vector<std::string>> data;
    std::string s;
    std::fstream in("high_popularity_spotify_data.csv");
    while (std::getline(in, s)) {
        std::vector<std::string> temp_v;
        std::stringstream line(s);
        while (std::getline(line, s, ','))
            temp_v.push_back(s);
        data.push_back(temp_v);
    }

    for (const auto item : data[0]) {
            std::cout << item << '\n';
        }
    std::cout << std::endl;
}