#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

/* Symbolic constants */
#define MAX_COLS 50

int main()
{
    std::string columns_arr[MAX_COLS];
    std::string s;
    std::fstream file("Imdb Movie Dataset.csv");
    file >> s;
    std::string word = "";
    int col_sub = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ',') {
            columns_arr[col_sub++] = word;
            word = "";
            ++i;
        }
        word += s[i];
    }
    columns_arr[col_sub++] = word;
    for (int i = 0; i < MAX_COLS; ++i) {
        std::cout << columns_arr[i] << '\n';
    }
    std::cout << std::endl;
}