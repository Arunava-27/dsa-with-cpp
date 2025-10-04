#include <iostream>

using namespace std;

/**
 * @brief Prints a butterfly pattern based on user input.
 *
 * The program prompts the user to enter a range (n), then prints a butterfly
 * pattern of size n. The pattern consists of two parts:
 * - The top part: n rows, each with increasing stars on both sides and decreasing spaces in the middle.
 * - The bottom part: n rows, each with decreasing stars on both sides and increasing spaces in the middle.
 *
 * For example, for n = 4, the output will be:
 * *             *
 * * *         * *
 * * * *     * * *
 * * * * * * * * *
 * * * * * * * * *
 * * * *     * * *
 * * *         * *
 * *             *
 * * @return int Returns 0 upon successful execution.
 */

 //! output format is not matching

int main()
{
    int n;
    cout << "Enter Range : "; // Prompt user for input
    cin >> n; // Read the size of the butterfly pattern

    //// top part
    for (int i = 0; i < n; i++)
    {
        //* stars left (i+1)
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* "; // Print left stars
        }

        //* spaces middle (2*(n-i-1))
        for (int k = 0; k < 2 * (n - i - 1); k++)
        {
            cout << " "; // Print middle spaces
        }

        //* stars right (i+1)
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* "; // Print right stars
        }

        cout << endl; // Move to next line
    }

    //// bottom part
    for (int i = 0; i < n; i++)
    {
        //* stars left (n-i)
        for (int j = 0; j < n - i; j++)
        {
            cout << "* "; // Print left stars
        }

        //* spaces middle (2*i)
        for (int k = 0; k < 2 * i; k++)
        {
            cout << " "; // Print middle spaces
        }

        //* stars right (n-i)
        for (int j = 0; j < n - i; j++)
        {
            cout << "* "; // Print right stars
        }

        cout << endl; // Move to next line
    }

    return 0; // Indicate successful execution
}