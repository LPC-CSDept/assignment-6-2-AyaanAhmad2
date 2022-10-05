//

#include <iostream>
#include <iomanip>
#include <stdio.h>      /* printf */
#include <math.h>
using namespace std;

// complete two functions
double nthpowerp(int n)
{
        return (pow (2, n));
}
double nthpowern(int n)
{
        return (pow (2, n));
        // return n_th power number
}
void printout(double result)
{
        cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
}
