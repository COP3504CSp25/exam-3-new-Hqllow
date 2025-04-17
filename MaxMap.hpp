#pragma once

#include <algorithm>
#include <map>
#include <string>
#include <vector>

float consultMax(const std::string& search_term, const std::map<std::string, std::vector<float>>& data) {
    std::vector<float> list = data.at(search_term);
    float max = list.at(0);
    for (size_t i = 0; i < list.size(); i++) {
        if (list.at(i) > max) {
            max = list.at(i);
        }
    }
    return max;
}

std::map<std::string, float> returnMaxMap(const std::map<std::string, std::vector<float>>& in_map) {
    std::map<std::string, float> returnMap;
    std::map<std::string, std::vector<float>>::const_iterator i = in_map.begin();
    for (; i != in_map.end(); i++) {
        std::vector<float> list = i->second;
        float max = list.at(0);
        for (size_t j = 0; j < list.size(); j++) {
            if (list.at(j) > max) {
                max = list.at(j);
            }
        }
        returnMap.emplace(i->first, max);
    }
    return returnMap;
}