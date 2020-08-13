#include "ttt.h"

//TODO make program use function.cpp and ttt.hpp files (working on this now)
//TODO maybe later down the line try to make this an ncurses game so the board doesn't keep scrolling up (probably when you know more)
//TODO make numbers correspond to number pad 



int main () {

    introduction();

    while (hasWon() == false) {

        playerOneTurn();
        draw();
        hasWon();

        if (hasWon() == false) {

            playerTwoTurn();
            draw();
            hasWon();
        }

        else {
            return 0;
        }
    }
    

}
