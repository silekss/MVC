#pragma once
#include <string>

class WeatherModel {
private:
    std::string city;
    int temperature;
    std::string condition;

public:
    WeatherModel();
    WeatherModel(const std::string& city, int temperature,
                 const std::string& condition);
    const std::string& getCity() const;
    int getTemperature() const;
    const std::string& getCondition() const;
    static bool find(const std::string& city, WeatherModel& result);
};
