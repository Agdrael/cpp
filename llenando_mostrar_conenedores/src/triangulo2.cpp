#include "../include/triangulo2.h"

std::vector<int> get_siguiente_linea(const std::vector<int>& last_row) {
    if (last_row.empty()) {
        return {1};
    }

    std::vector<int> siguiente_linea;
    siguiente_linea.reserve(last_row.size() + 1); // optimiza memoria
    siguiente_linea.emplace_back(1);              // primer 1

    for (size_t i = 0; i < last_row.size() - 1; ++i) {
        siguiente_linea.emplace_back(last_row[i] + last_row[i + 1]);
    }

    siguiente_linea.emplace_back(1); // último 1
    return siguiente_linea;
}
