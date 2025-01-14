#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "headers/helperfunc.h"

int main()
{
    std::vector<std::vector<std::string>> my_data{read_csv("high_popularity_spotify_data.csv")};
    auto cols = get_features("high_popularity_spotify_data.csv");
    for (const auto feat : cols) {
        std::cout << feat << '\n';
    }
    std::cout << std::endl;
}