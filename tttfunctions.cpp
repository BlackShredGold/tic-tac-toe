#include <iostream>
#include <vector>

char board [9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; // had to use array instead of vector to draw x and o. Why?
std::vector<bool> used_spaces(9); // used to determine if player can make a move in a particular space, or not if it's taken

void draw() { 

    std::cout << "     |     |      \n";

    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    std::cout << "     |     |      \n";

    std::cout << "\n";

}

void introduction () {

    std::cout << "Welcome to Tic Tac Toe. Press Enter to continue.\n";
    std::cin.ignore();

    std::cout << "How to play: \n";
    std::cout << "Each Person will take turns making their move.\n";
    std::cout << "Player One plays X and Player Two plays O.\n";
    std::cout << "You will input the number corresponding to the space you wish to play.\n";
    std::cout << "The board is laid out like this:\n";
    
    draw();
    
}

// takes user input and sees if a play is legal (within 1-9) and whether the space is taken.
bool isSpaceLegal(int space) {  

    switch (space) {
        case 1 :
            if (used_spaces[0] == true)  {
                std::cout << "Invalid play. Please try again: ";
                return false;
            }
            else {
                return true;
            }
            break;
        case 2 :
            if (used_spaces[1] == true) {
                std::cout << "Invalid play. Please try again: ";
                return false;
            }
            else {
                return true;
            }
            break;
        case 3 :
            if (used_spaces[2] == true) {
                std::cout << "Invalid play. Please try again: ";
                return false;
            }
            else {
                return true;
            }
            break;
        case 4 :
            if (used_spaces[3] == true) {
                std::cout << "Invalid play. Please try again: ";
                return false;
            }
            else {
                return true;
            }
            break;
        case 5 :
            if (used_spaces[4] == true) {
                std::cout << "Invalid play. Please try again: ";
                return false;
            }
            else {
                return true;
            }
            break;
        case 6 :
            if (used_spaces[5] == true) {
                std::cout << "Invalid play. Please try again: ";
                return false;
            }
            else {
                return true;
            }
            break;
        case 7 :
            if (used_spaces[6] == true) {
                std::cout << "Invalid play. Please try again: ";
                return false;
            }
            else {
                return true;
            }
            break;
        case 8 :
            if (used_spaces[7] == true) {
                std::cout << "Invalid play. Please try again: ";
                return false;
            }
            else {
                return true;
            }
            break;
        case 9 :
            if (used_spaces[8] == true) {
                std::cout << "Invalid play. Please try again: ";
                return false;
            }
            else {
                return true;
            }
            break; 
        default :
            if (space < 1 || space > 9) {
                std::cout << "You must enter a number between 1 and 9: ";
                return false;
            }
            else {
                std::cout << "error";
            } 
    }

}


void playerOneTurn() {

    int x;
    std::cout << "Player One, Choose your X mark.\n";
    
    while (isSpaceLegal(x) == false) { 
        std::cin >> x;
    }
    switch (x) {

        case 1 :
            used_spaces[0] = true;
            board[0] = 'X';
            break;
        case 2 :
            used_spaces[1] = true;
            board[1] = 'X';
            break;
        case 3 :
            used_spaces[2] = true;
            board[2] = 'X';
            break;
        case 4 :
            used_spaces[3] = true;
            board[3] = 'X';
            break;
        case 5 :
            used_spaces[4] = true;
            board[4] = 'X';
            break;
        case 6 :
            used_spaces[5] = true;
            board[5] = 'X';
            break;
        case 7 :
            used_spaces[6] = true;
            board[6] = 'X';
            break;
        case 8 :
            used_spaces[7] = true;
            board[7] = 'X';
            break;
        case 9 :
            used_spaces[8] = true;
            board[8] = 'X';
            break;
            }

        

}

void playerTwoTurn() {

    int x;
    std::cout << "Player Two, Choose your O mark.\n";
    
    while (isSpaceLegal(x) == false) { 
        std::cin >> x;
    }
    switch (x) {

        case 1 :
            used_spaces[0] = true;
            board[0] = 'O';
                break;
        case 2 :
            used_spaces[1] = true;
            board[1] = 'O';
            break;
        case 3 :
            used_spaces[2] = true;
            board[2] = 'O';
            break;
        case 4 :
            used_spaces[3] = true;
            board[3] = 'O';
            break;
        case 5 :
            used_spaces[4] = true;
            board[4] = 'O';
            break;
        case 6 :
            used_spaces[5] = true;
            board[5] = 'O';
            break;
        case 7 :
            used_spaces[6] = true;
            board[6] = 'O';
            break;
        case 8 :
            used_spaces[7] = true;
            board[7] = 'O';
            break;
        case 9 :
            used_spaces[8] = true;
            board[8] = 'O';
            break;
            }

        

}

// Check if Player One has met any of the win conditions. Any three horizontal, vertical, or diagonals must match to win.
bool hasWon() {

    if ( 
        
        // Horizontal X Wins
        (board[0] == 'X' && board[1] == 'X' && board[2] == 'X') || 
        (board[3] == 'X' && board[4] == 'X' && board[5] == 'X') ||
        (board[6] == 'X' && board[7] == 'X' && board[8] == 'X') ||
        // Vertical X Wins
        (board[0] == 'X' && board[3] == 'X' && board[6] == 'X') ||
        (board[1] == 'X' && board[4] == 'X' && board[7] == 'X') ||
        (board[2] == 'X' && board[5] == 'X' && board[8] == 'X') ||
        // Diagonal X Wins 
        (board[0] == 'X' && board[4] == 'X' && board[8] == 'X') ||
        (board[2] == 'X' && board[4] == 'X' && board[6] == 'X')) {

            std::cout << "Player One wins!\n";
            return true;
        }

    else if ( 
        // Horizontal O Wins
        (board[0] == 'O' && board[1] == 'O' && board[2] == 'O') || 
        (board[3] == 'O' && board[4] == 'O' && board[5] == 'O') ||
        (board[6] == 'O' && board[7] == 'O' && board[8] == 'O') ||
        // Vertical O Wins
        (board[0] == 'O' && board[3] == 'O' && board[6] == 'O') ||
        (board[1] == 'O' && board[4] == 'O' && board[7] == 'O') ||
        (board[2] == 'O' && board[5] == 'O' && board[8] == 'O') ||
        // Diagonal O Wins 
        (board[0] == 'O' && board[4] == 'O' && board[8] == 'O') ||
        (board[2] == 'O' && board[4] == 'O' && board[6] == 'O')) {

            std::cout << "Player Two wins!\n";
            return true;
        }

    else if ( 
        // Tie if all the board is taken but no win conditions are met
        board[0] != '1' && board[1] != '2' && board[2] != '3' &&
        board[3] != '4' && board[4] != '5' && board[5] != '6' &&
        board[6] != '7' && board[7] != '8' && board[8] != '9') {

            std::cout << "Tie!";
            return true;
        }

    else {
        return false;
    }
    
}
