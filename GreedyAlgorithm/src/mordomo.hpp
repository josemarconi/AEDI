#ifndef MORDOMO_HPP
#define MORDOMO_HPP
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <cctype>
#include <algorithm>

using namespace std;

void Read();

void Show(vector<vector<int>> matrix, int line);

void Moving(vector<vector<int>> matrix, int line, int *somaTotal);

#endif