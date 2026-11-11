#include "WeatherController.h"

bool WeatherController::search(const std::string& city,
                               WeatherModel& result,
                               std::string& error) const {
    if (city.find_first_not_of(" \t") == std::string::npos) {
        error = "Введіть назву міста.";
        return false;
    }

    if (!WeatherModel::find(city, result)) {
        error = "Місто не знайдено. Введіть назву зі списку.";
        return false;
    }
    return true;
}
