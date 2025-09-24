#include <iostream>

using namespace std;

/**
 * @brief Prints a hollow diamond pattern based on user input.
 *
 * The program prompts the user to enter a range (n), then prints a hollow diamond
 * pattern of size n. The pattern consists of two parts:
 * - The top part: n rows, each with increasing inner spaces and decreasing outer spaces.
 * - The bottom part: n-1 rows, each with decreasing inner spaces and increasing outer spaces.
 *
 * For example, for n = 4, the output will be:
 *             *
 *         *       *
 *     *               *
 * *                       *
 *     *               *
 *         *       *
 *             *
 *
 * @return int Returns 0 upon successful execution.
 */

int main()
{
    int n;
    cout << "Enter Range : "; // Prompt user for input
    cin >> n; // Read the size of the diamond

    //// top part
    for (int i = 0; i < n; i++)
    {
        //* spaces outer (n-i-1)
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " "; // Print leading spaces
        }
        cout << "*"; // Print first star

        if (i != 0)
        {
            //* spaces (2*i-1)
            for (int k = 0; k < 2 * i - 1; k++)
            {
                cout << " "; // Print inner spaces
            }

            cout << "*"; // Print second star
        }

        cout << endl; // Move to next line
    }

    //// bottom
    for (int i = 0; i < n - 1; i++)
    {
        //* spaces outer (i+1)
        for (int j = 0; j < i + 1; j++)
        {
            cout << " "; // Print leading spaces
        }
        cout << "*"; // Print first star

        if (i != n - 2)
        {
            //* spaces (2*(n-i)-5)
            for (int k = 0; k < 2 * (n - i) - 5; k++)
            {
                cout << " "; // Print inner spaces
            }

            cout << "*"; // Print second star
        }

        cout << endl; // Move to next line
    }

    return 0; // Indicate successful execution
}
