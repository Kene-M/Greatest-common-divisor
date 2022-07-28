/*

    This program will use a function to calculate an the Greatest Common Divisor (GCD) of two integers.


1. Ask the user to enter the two integers.
2. Call the calculate GCD function, passing the integers as arguments.
        In the function:
        {
            Assign the value 1 to the common divisor.
            for (Check if the common divisor is not greater than any of the two integers)
            {
                if ( check if both integers will produce no remainder when divided by the divisors)
                    Update the GCD using the current common divisor.

                Increment the value of the common divisor.
            }
            Return the GCD to the calling function.
        }
3. Store the GCD.
4. Display the GCD to the user.

*/


// This program will use a function to calculate an the Greatest Common Divisor of two integers.

#include <iostream>

using namespace std;

int calculateGCD (int, int);  // Prototype of the function that will calculate the GCD of two numbers.

    // Main function.
int main()
{
        // Declare variables.
    int integer1, integer2;  //

        // Ask the user to enter the two integers.
    cout << "Enter first integer: ";
    cin >> integer1;

    cout << "Enter second integer: ";
    cin >> integer2;

        // Call the calculate GCD function, pass the integers as arguments, and display the result to the user.
    cout << "The greatest common divisor for " << integer1 << " and " << integer2 << " is "
         << calculateGCD (integer1, integer2) << endl;

    return 0;
}

    // Function for calculating the GCD of two integers.
int calculateGCD (int int1, int int2)
{
        // Declare variables.
    int GCD;   // To hold the Greatest Common Divisor of the two integers.
    int commonDivisor = 1;  // The hold the common divisor of the two integers(to be updated).

        // Check if the common divisor is not greater than any of the two integers.
    for (; (commonDivisor <= int1 && commonDivisor <= int2); commonDivisor++)
    {
            // Update the GCD using the common divisor if both integers
            // will produce no remainder when divided by the divisors.

        if ( (int1 % commonDivisor == 0) && (int2 % commonDivisor == 0) )
            GCD = commonDivisor;
    }

        // Return the GCD to the calling function.
    return GCD;
}

/*

    RUN 1: integer1 = 24, integer2 = 36

Enter first integer: 24
Enter second integer: 36
The greatest common divisor for 24 and 36 is 12

    ------------------------------------------------

    RUN 2: integer1 = 2, integer2 = 3

Enter first integer: 2
Enter second integer: 3
The greatest common divisor for 2 and 3 is 1

    ------------------------------------------------

    RUN 3: integer1 = 30, integer2 = 60

Enter first integer: 30
Enter second integer: 60
The greatest common divisor for 30 and 60 is 30

    ------------------------------------------------

    RUN 4: integer1 = 34567, integer2 = 736549

Enter first integer: 34567
Enter second integer: 736549
The greatest common divisor for 34567 and 736549 is 1

*/
