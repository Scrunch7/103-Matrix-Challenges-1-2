

#include <iostream>


void challenge1() {

    int arr, i;
    float num[100], sum = 0, average;

    std::cout << "How big is the array: ";
    std::cin >> arr;

    for (i = 0; i < arr; ++i)
    {
        std::cout << i + 1 << ". Enter number: ";
        std::cin >> num[i];

        sum += num[i];
    }

    average = sum / arr;

    std::cout << "Average = " << average;


}

void challenge2() {

    int matrix[25][25];
    bool editing = false; //checking to see i grid has been edited
    int column, row;

    EDITING: //goto tag for edited tables

    if (editing == false) {
        std::cout << "The initial grid is as follows\n\n\n";
    }//if the code is being run for the first time this will display

    else {
        std::cout << "The updates grid is as follows\n\n\n";
    }//else this set of text will display

    for (int j = 0; j < 10; j++) { //j is rows, i is columns, aka right is rows.

        if (j == 0) { //this if statement displays the columns row from 1 - 10
            std::cout << "Column:   \t";
            for (int g = 0; g < 10; g++) {

                std::cout << "|" << g + 1 << "|\t";
            }
            std::cout << "\n\n";
        }

        std::cout << "Row " << j + 1 << ":  \t";

        for (int i = 0; i < 10; i++) { //displaying the random numbers in grid

            if (editing == false) {
                matrix[i][j] = (rand() % 10) + 1;
            }

            std::cout << matrix[i][j] << "\t";

        }
        std::cout << "\n\n";
    }

    editing = true;

    std::cout << "\n\n\nPlease input the column and row you would like to update.\nColumn: \t";
    std::cin >> column;

    column -= 1;

    std::cout << "\nRow:  \t\t";
    std::cin >> row;

    row -= 1;

    std::cout << "\nPlease input the new number for column " << column + 1 << " on row " << row + 1 << ": \t";
    std::cin >> matrix[column][row];

    goto EDITING;


}

void challenge3() {

   
}

int main()
{
    //challenge1();
    challenge2();
    //challenge3();
}








