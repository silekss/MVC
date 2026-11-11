#include "WeatherView.h"
#include <iostream>
#include <string>

void WeatherView::run(const WeatherController& controller) const {
    std::cout << "Пошук погоди за містом (навчальні дані)\n"
              << "Доступні міста: Київ, Львів, Одеса, Коломия.\n"
              << "Введіть 0 для виходу.\n";

    std::string city;
    while (true) {
        std::cout << "\nМісто: ";
        if (!std::getline(std::cin, city) || city == "0") break;

        WeatherModel weather;
        std::string error;
        if (!controller.search(city, weather, error)) {
            std::cout << error << '\n';
            continue;
        }

        std::cout << "Місто: " << weather.getCity() << '\n'
                  << "Температура: " << weather.getTemperature() << " °C\n"
                  << "Погода: " << weather.getCondition() << '\n';
    }
}
