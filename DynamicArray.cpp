#include <iostream>

using namespace std;

int main()
{
    int rows, columns;

    cout << "Enter the number of rows : ";
    cin >> rows;
    if (rows > 3)
    {
        cout << "Maximum rows allowed is 3. Setting rows to 3.\n";
        rows = 3;
    }

    cout << "Enter the number of columns : ";
    cin >> columns;
    if (columns > 3)
    {
        cout << "Maximum columns allowed is 3. Setting columns to 3.\n";
        columns = 3;
    }

    // Dynamically allocate memory for 2D array
    double **array = new double *[rows];
    for (int value = 0; value < rows; ++value)
    {
        array[value] = new double[columns];
    }

    // Assign values to each element
    cout << "Enter values for the array:\n";
    for (int value = 0; value < rows; ++value)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << "Enter value for element [" << value << "][" << j << "]: ";
            cin >> array[value][j];
        }
    }

    // Output the array
    cout << "Array contents:\n";
    for (int value = 0; value < rows; ++value)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << array[value][j] << " ";
        }
        cout << endl;
    }

    for (int value = 0; value < rows; ++value)
    {
        delete[] array[value];
    }
    delete[] array;

    return 0;
}
