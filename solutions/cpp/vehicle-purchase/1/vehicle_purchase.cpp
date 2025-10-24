#include "vehicle_purchase.h"

namespace vehicle_purchase {

bool needs_license(std::string kind) {
    return kind == "car" || kind == "truck" ? true : false;
}

std::string choose_vehicle(std::string option1, std::string option2) {
    return (option1.compare(option2) <= 0? option1 : option2) + " is clearly the better choice.";
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    int interest = 0;
    if (age < 3) {
        interest = 80;
    }
    if (age >= 3 && age < 10) {
        interest = 70;
    }
    if (age >= 10) {
        interest = 50;
    }
    return original_price * 0.01 * interest;
}

}  // namespace vehicle_purchase
