#include "ft/ft.hpp"
int Jacobsthal(int n)
{
    // base case
    if (n == 0)
        return 0;
 
    // base case
    if (n == 1)
        return 1;
 
    // recursive step.
    return Jacobsthal(n - 1) + 2 * Jacobsthal(n - 2);
}
 
// Return nth Jacobsthal-Lucas number.
int Jacobsthal_Lucas(int n)
{
    // base case
    if (n == 0)
        return 2;
 
    // base case
    if (n == 1)
        return 1;
 
    // recursive step.
    return Jacobsthal_Lucas(n - 1)
           + 2 * Jacobsthal_Lucas(n - 2);
}
 
// Driven Program
int main()
{
    int n = 10;
    std::cout << "Jacobsthal number: " << Jacobsthal(n) << std::endl;
    std::cout << "Jacobsthal-Lucas number: " << Jacobsthal_Lucas(n) << std::endl;
    return 0;
}
