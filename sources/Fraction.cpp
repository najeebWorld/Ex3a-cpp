#include "Fraction.hpp"
using namespace ariel;


// Constructors
Fraction::Fraction() : numerator(0), denominator(1) {}
Fraction::Fraction(int num, int den) {}
Fraction::Fraction(float num) {}
// Getters
int Fraction::getNumerator() const {}
int Fraction::getDenominator() const {}
// Overloaded operators
Fraction Fraction::operator+(const Fraction& other) const {}
Fraction Fraction::operator-(const Fraction& other) const {}
Fraction Fraction::operator*(const Fraction& other) const {}
Fraction Fraction::operator/(const Fraction& other) const {}
bool Fraction::operator==(const Fraction& other) const {}
bool Fraction::operator!=(const Fraction& other) const {}
bool Fraction::operator>(const Fraction& other) const {}
bool Fraction::operator<(const Fraction& other) const {}
bool Fraction::operator>=(const Fraction& other) const {}
bool Fraction::operator<=(const Fraction& other) const {}
Fraction& Fraction::operator++() {}
Fraction Fraction::operator++(int) {}
Fraction& Fraction::operator--() {}
Fraction Fraction::operator--(int) {}
// Friend functions for input/output
std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {}
std::istream& operator>>(std::istream& is, Fraction& fraction) {}
// Helper functions
int Fraction::gcd(int a, int b) const {}
void Fraction::reduce() {}


