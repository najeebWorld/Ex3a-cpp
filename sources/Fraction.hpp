#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <cmath>

namespace ariel{
class Fraction {

private:
    int numerator;
    int denominator;

public:
    // Constructors
    Fraction();
    Fraction(int num, int den);
    Fraction(float num);

    // Getters
    int getNumerator() const;
    int getDenominator() const;

    // Overloaded operators
    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;
    bool operator==(const Fraction& other) const;
    bool operator!=(const Fraction& other) const;
    bool operator>(const Fraction& other) const;
    bool operator<(const Fraction& other) const;
    bool operator>=(const Fraction& other) const;
    bool operator<=(const Fraction& other) const;
    Fraction& operator++();
    Fraction operator++(int);
    Fraction& operator--();
    Fraction operator--(int);

    // Friend functions for input/output
    friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction);
    friend std::istream& operator>>(std::istream& is, Fraction& fraction);
    void reduce();

private:
    // Helper functions
    int gcd(int a, int b) const;
};
}

#endif  // FRACTION_H
