/**
  * @brief Assignment 8
  * @author Corey Hemphill
  */

#include <iostream>
#include <iomanip>

using namespace std;

//Declared Constants//
const int ROW_SIZE = 12;
const int COLUMN_SIZE = 6;

//Declared Functions//
void getPlanePlannerMenu(char chart[ROW_SIZE][COLUMN_SIZE]);
void printChart(const char chart[ROW_SIZE][COLUMN_SIZE]);
void fillSeat(char chart[ROW_SIZE][COLUMN_SIZE]);
void emptyCount(const char chart[ROW_SIZE][COLUMN_SIZE]);
void adjacentSeats(const char chart[ROW_SIZE][COLUMN_SIZE]);

//Main//
int main()
{
    char planePlanner[ROW_SIZE][COLUMN_SIZE] =
    {{'*','*','X','*','X','X'},
    {'*','X','*','X','*','X'},
    {'*','*','X','X','*','X'},
    {'X','*','X','*','X','X'},
    {'*','X','*','X','*','*'},
    {'*','X','*','*','*','X'},
    {'X','*','*','*','X','X'},
    {'*','X','*','X','X','*'},
    {'X','*','X','X','*','X'},
    {'*','X','*','X','X','X'},
    {'*','*','X','*','X','*'},
    {'*','*','X','X','*','X'}};

    getPlanePlannerMenu(planePlanner);

    return 0;
}

//Functions//
/**
 * @brief getPlanePlanMenu Prompts Plane Planner menu and options
 * @param chart New seating chart
 */
void getPlanePlannerMenu(char chart[ROW_SIZE][COLUMN_SIZE]) {
    int selection = 0;
    while (selection != 5) {
        cout << "1: Print chart" << endl;
        cout << "2: Fill seat" << endl;
        cout << "3: Empty count" << endl;
        cout << "4: Adjacent seats" << endl;
        cout << "5: Exit" << endl;
        cin >> selection;
        if (selection == 1) {
            printChart(chart);
        }
        else if (selection == 2) {
            fillSeat(chart);
        }
        else if (selection == 3) {
            emptyCount(chart);
        }
        else if (selection == 4) {
            adjacentSeats(chart);
        }
    }
}

/**
 * @brief printChart Prints out current seating chart
 * @param chart Current seating chart
 */
void printChart(const char chart[ROW_SIZE][COLUMN_SIZE]) {
    cout << setw(8) << 'A' << setw(7) << 'B' << setw(7) << 'C';
    cout << setw(14) << 'D' << setw(7) << 'E' << setw(7) << 'F' << endl;
    for (int i = 0; i < ROW_SIZE; i++) {
        cout << "Row " << left << setw(3) << (i + 1);
        for (int j = 0; j < COLUMN_SIZE; j++) {
            if (j == 0) {
                cout << chart[i][j];
            }
            else if (j == 3) {
                cout << right << setw(14) << chart[i][j];
            }
            else
                cout << right << setw(7) << chart[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

/**
 * @brief fillSeat Places an X in the specified array coordinate to indicate reserved
 * @param chart Current seating chart
 * @returns Error if current seat is already reserved with an X
 */
void fillSeat(char chart[ROW_SIZE][COLUMN_SIZE]) {
    int row;
    char seat;
    cin >> row >> seat;
    if (chart[row - 1][(static_cast<int>(seat) - 65)] == '*')
        chart[row - 1][(static_cast<int>(seat) - 65)] = 'X';
    else
        cout << "Error: Seat reserved" << endl;
}

/**
 * @brief emptyCount Counts the number of empty seats left on the plane seating chart
 * @param chart Current seating chart
 */
void emptyCount(const char chart[ROW_SIZE][COLUMN_SIZE]) {
    int totalEmpty = 0;
    int totalWindow = 0;
    int totalAisle = 0;
    for (int i = 0; i < ROW_SIZE; i++) {
        for (int j = 0; j < COLUMN_SIZE; j++)
            if (chart[i][j] == '*') {
                totalEmpty += 1;
                if ((j == 0) || (j == (COLUMN_SIZE - 1))) {
                    totalWindow += 1;
                }
                if (((j == (COLUMN_SIZE/2) - 1)) || (j == (COLUMN_SIZE/2))) {
                    totalAisle += 1;
                }
            }
    }
    cout << totalEmpty << " empty seats, ";
    cout << totalWindow << " window seats, ";
    cout << totalAisle << " aisle seats." << endl;
}

/**
 * @brief adjacentSeats Finds and prints first set of specified number of adjacent seats
 * @param chart Current seating chart
 */
void adjacentSeats(const char chart[ROW_SIZE][COLUMN_SIZE]) {
    int numSeats;
    int j=0;
    cin >> numSeats;
    for (int i = 0; i < ROW_SIZE; i++) {
        int total = 0;
        for (j = 0; j < COLUMN_SIZE; i++) {
            if (chart[i][j] == '*') {
                total += 1;
            }
            else {
                total = 0;
            }
            if (total == numSeats) {
                break;
            }
        }
        cout << "Row " << i << "(";
        for (int k = numSeats; k > 0; k--) {
            cout << static_cast<char>(j + 65 - k);

            if (k > 1) {
                cout << ", ";
            }
            else if (k == 1) {
                cout << " & ";
            }
}
        }
    cout << "Not available" << endl;

    }
