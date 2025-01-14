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
    std::fstream in("high_popularity_spotify_data.csv");
    std::vector<std::vector<std::string>> my_data{read_csv(in)};
    for (const auto item : my_data[0]) {
            std::cout << item << '\n';
    }
    std::cout << std::endl;
}