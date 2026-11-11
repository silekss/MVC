#include "WeatherModel.h"

WeatherModel::WeatherModel() : temperature(0) {}

WeatherModel::WeatherModel(const std::string& city, int temperature,
                           const std::string& condition)
    : city(city), temperature(temperature), condition(condition) {}

const std::string& WeatherModel::getCity() const {
    return city;
}

int WeatherModel::getTemperature() const {
    return temperature;
}

const std::string& WeatherModel::getCondition() const {
    return condition;
}

bool WeatherModel::find(const std::string& city, WeatherModel& result) {
    // навчальні дані для прикладу
    const WeatherModel cities[] = {
        WeatherModel("Київ", 14, "хмарно"),
        WeatherModel("Львів", 11, "дощ"),
        WeatherModel("Одеса", 17, "сонячно"),
        WeatherModel("Коломия", 12, "мінлива хмарність")
    };

    for (const WeatherModel& item : cities) {
        if (item.city == city) {
            result = item;
            return true;
        }
    }
    return false;
}
