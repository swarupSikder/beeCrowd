//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    double number; 
    cin >> number; // Save the current settings of cout 
    ios_base::fmtflags old_flags = cout.flags(); 
    streamsize old_prec = cout.precision(); 
    if (number == 0.0) { 
        // Special case for zero 
        cout << showpos << "0.0000E+00" << endl; 
    } 
    else { 
        // Use scientific notation 
        cout << scientific << uppercase << setprecision(4) << showpos; 
        cout << number; // Extract the exponent part 
        int exponent = static_cast<int>(log10(fabs(number))); 
        if (exponent == 1 && fabs(number) >= 10.0) { 
            // For numbers in the form of 1.0000E+02, print as 1.0000E+02 
            cout << "E+02" << endl; 
        } 
        else { // Print the correct two-digit exponent 
            cout << endl; 
        } 
    } 
    
    // Restore the previous settings of cout 
    cout.flags(old_flags); 
    cout.precision(old_prec);

    return 0;
}