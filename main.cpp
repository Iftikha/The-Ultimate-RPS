//////////////////////////////
/*  MADE BY IFTIKHAR AHMED  */
/*    THE ULTIMATE RPS  	*/
/*   ROCK PAPER SCISSORS    */
//////////////////////////////

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <conio.h>

using namespace std;

int score = 0, aiScore = 0;

string playerVic[10] = {
    "Victory is yours! Well played!",  // Line 1
    "You're the champion this round!",  // Line 2
    "You win this battle, congratulations!",  // Line 3
    "Your strategy prevailed, great job!",  // Line 4
    "Boom! You won this round!",  // Line 5
    "Another win for you, you're unstoppable!",  // Line 6
    "That was a brilliant move, you win!",  // Line 7
    "You outsmarted the computer! Well done!",  // Line 8
    "Looks like the computer was no match for you!",  // Line 9
    "You crushed it with that move! Victory is yours!"  // Line 10
};

string aiVic[10] = {
    "The AI takes the win this round!",  // Line 1
    "Looks like the AI outsmarted you!",  // Line 2
    "AI wins this time! Better luck next round!",  // Line 3
    "The computer reigns victorious!",  // Line 4
    "You were no match for the AI this time!",  // Line 5
    "AI claims victory! Don’t give up!",  // Line 6
    "Oops, the AI won this round. Try again!",  // Line 7
    "The AI's strategy paid off this time!",  // Line 8
    "AI wins again! Can you turn the tide?",  // Line 9
    "The computer got the best of you this round!"  // Line 10
};

string noVic[10] = {
    "It's a tie! Both chose the same move!",  // Line 1
    "Draw! No winner this round, try again!",  // Line 2
    "It's a stalemate! Both of you are evenly matched!",  // Line 3
    "Neither wins this time, it's a draw!",  // Line 4
    "A tie game! Who will win the next one?",  // Line 5
    "It's a draw, the game continues!",  // Line 6
    "Same move, no victory here!",  // Line 7
    "Looks like it's a deadlock, let’s go again!",  // Line 8
    "A tie! You and the AI are on the same level!",  // Line 9
    "It's all square, no winner this round!"  // Line 10
};

void cinInteger(int* intpInt) {
    while (!(cin >> *intpInt)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void greet() {
    cout << " ___________________________________________\n";
    cout << "|                                           |\n";
    cout << "|         ROCK PAPER SCISSORS GAME          |\n";
    cout << "|                                           |\n";
    cout << "|         	  THE ULTIMATE RPS               |\n";
    cout << "|                                           |\n";
    cout << "|          PLAY WITH THE AI BOT!            |\n";
    cout << "|                                           |\n";
    cout << "|___________________________________________|\n\n";
}

void gameInst() {
    cout << " __________________________________________ \n";
    cout << "|               GAME INSTRUCTIONS          |\n";
    cout << "|  1. Choose Rock, Paper, or Scissors.     |\n";
    cout << "|  2. Rock beats Scissors, Scissors beats  |\n";
    cout << "|     Paper, and Paper beats Rock.         |\n";
    cout << "|  3. Try to outsmart the AI to win!       |\n";
    cout << "|__________________________________________|\n\n";
    cout << "Press Enter to continue...";
    cin.get();  
}

int moves() {
    system("cls");  
    int move;
    cout << " __________________________________________ \n";
    cout << "|               MAKE YOUR MOVE!            |\n";
    cout << "|                                          |\n";
    cout << "|      Your Score: " << score << "  |  AI's Score: " << aiScore << "     |\n";
    cout << "|                                          |\n";
    cout << "|     1. Rock                              |\n";
    cout << "|     2. Paper                             |\n";
    cout << "|     3. Scissors                          |\n";
    cout << "|__________________________________________|\n";
    cout << "Your Move: ";
    cinInteger(&move);
    return move;
}

string getMoveName(int a) {
    if (a == 1) {
        return "Rock";
    }
    else if (a == 2) {
        return "Paper";
    }
    else {
        return "Scissor";
    }
}

void plyrVic() {
    int statementSel = rand() % 10;
    cout << "Player wins!";
    cout << "\n" << playerVic[statementSel];
    score += 2;
    aiScore -= 2;
    return;
}

void AiVic() {
    int statementSel = rand() % 10;
    cout << "AI Wins!";
    cout << "\n" << aiVic[statementSel];
    aiScore += 2;
    score -= 2;
    return;
}

void drawMove() {
    int statementSel = rand() % 10;
    cout << "Round Draw!";
    cout << "\n" << noVic[statementSel];
    return;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));  // Seed random number generator
    greet();
    gameInst();
    int cont;

    while (true) {
        int move = moves();

        if (move >= 1 && move <= 3) {  // Ensure move is valid
            string Hmove = getMoveName(move);

            int aiMove = rand() % 3 + 1;
            string AiMove = getMoveName(aiMove);

            cout << "\nYou chose: " << Hmove << "\n";
            cout << "AI chose: " << AiMove << "\n";

            if (Hmove == AiMove) {
                drawMove();
            }
            else if ((Hmove == "Rock" && AiMove == "Scissor") || 
                     (Hmove == "Paper" && AiMove == "Rock") || 
                     (Hmove == "Scissor" && AiMove == "Paper")) {
                plyrVic();
            }
            else {
                AiVic();
            }

            cout<<"\nPress 1 to continue and 0 to exit!";
			cinInteger(&cont); 
			if(cont == 0){
				break;
			} 
        }
    }
    
    if(score > aiScore){
    	cout<<"\nYou won today's game! Welldone!";
	}else if(score < aiScore){
		cout<<"\nAI won today's game! Better luck for next time!";
	}else{
		cout<<"\nToday's game was a draw! Nice try!";
	}
	
	cout<<"\nPress ENTER to exit!";
	getch();

    return 0;
}
