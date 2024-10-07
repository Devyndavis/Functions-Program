// This program calculates the inflation rates for an item over two successive years.
// It prompts the user to input the current price of the item and its prices from one 
// and two years ago. The program calculates the inflation rates for each year and 
// determines whether the inflation trend is increasing, decreasing, or stable.

#include <iostream>
#include <iomanip>

// Function to get user input for the current price and prices from one and two years ago
void getInput(double &currentPrice, double &priceLastYear, double &priceTwoYearsAgo) {
    std::cout << "Enter the current price of the item: ";
    std::cin >> currentPrice;
    std::cout << "Enter the price of the item one year ago: ";
    std::cin >> priceLastYear;
    std::cout << "Enter the price of the item two years ago: ";
    std::cin >> priceTwoYearsAgo;
}

// Function to calculate the inflation rates for the two years
void calculateInflationRates(double currentPrice, double priceLastYear, double priceTwoYearsAgo,
                              double &inflationRateLastYear, double &inflationRateTwoYearsAgo) {
    inflationRateLastYear = (currentPrice - priceLastYear) / priceLastYear * 100; // Calculate inflation rate for last year
    inflationRateTwoYearsAgo = (priceLastYear - priceTwoYearsAgo) / priceTwoYearsAgo * 100; // Calculate inflation rate for two years ago
}

// Function to output the results
void outputResults(double inflationRateLastYear, double inflationRateTwoYearsAgo) {
    std::cout << std::fixed << std::setprecision(2); // Set precision for floating-point output
    std::cout << "Inflation rate for the last year: " << inflationRateLastYear << "%" << std::endl;
    std::cout << "Inflation rate for two years ago: " << inflationRateTwoYearsAgo << "%" << std::endl;

    // Determine the inflation trend
    if (inflationRateLastYear > inflationRateTwoYearsAgo) {
        std::cout << "The inflation trend is increasing." << std::endl;
    } else if (inflationRateLastYear < inflationRateTwoYearsAgo) {
        std::cout << "The inflation trend is decreasing." << std::endl;
    } else {
        std::cout << "The inflation trend is stable." << std::endl;
    }
}

int main() {
    double currentPrice, priceLastYear, priceTwoYearsAgo;
    double inflationRateLastYear, inflationRateTwoYearsAgo;

    // Get input prices
    getInput(currentPrice, priceLastYear, priceTwoYearsAgo);

    // Calculate inflation rates
    calculateInflationRates(currentPrice, priceLastYear, priceTwoYearsAgo, inflationRateLastYear, inflationRateTwoYearsAgo);

    // Output results
    outputResults(inflationRateLastYear, inflationRateTwoYearsAgo);

    return 0;
}