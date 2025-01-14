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
    // std::cout << "Inside function\n";
    std::string s;
    std::vector<std::vector<std::string>> out;
    while (std::getline(in, s)) {
        std::vector<std::string> temp_v;
        std::stringstream line(s);
        std::string word;
        bool dquote = false;
        // std::cout << "Inside while loop\n";
        for (int i = 0; i < s.size(); ++i) {
            // std::cout << "Inside for loop\n";
            if (s[i] == '"') {
                ++i;
                word += s[i];
                while (s[++i] != '"') {
                    word += s[i];
                }
                // std::cout << word << '\n';
                temp_v.push_back(word);
                word = "";
            }
            else {
                word += s[i];
                if (s[i] == ',' && word[0] != ',') {
                    std::string no_comma{word.begin(), word.end() - 1};
                    temp_v.push_back(no_comma);
                    // std::cout << no_comma << '\n';
                    word = "";
                }
                if (word.size() == 1 && word[0] == ',') {
                    word = "";
                }
            }
        }
        out.push_back(temp_v);
    }
    return out;
} 

#endif