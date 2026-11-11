#pragma once
#include "WeatherModel.h"
#include <string>

class WeatherController {
public:
    bool search(const std::string& city, WeatherModel& result,
                std::string& error) const;
};
