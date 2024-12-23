# The Ultimate Rock Paper Scissors Game

## Overview
Welcome to **The Ultimate Rock Paper Scissors Game**! This is a simple yet fun console-based game where you can play Rock Paper Scissors against an AI bot. The game keeps track of the scores and provides random victory statements to make each round exciting.

## Features
- Play Rock Paper Scissors against an AI bot.
- Random victory statements for both player and AI.
- Score tracking for both player and AI.
- Simple and intuitive console interface.

## How to Play
1. **Run the Game**: Compile and run the `main.cpp` file.
2. **Game Instructions**: Follow the on-screen instructions to understand the game rules.
3. **Make Your Move**: Choose Rock, Paper, or Scissors by entering the corresponding number.
4. **View Results**: See the result of each round and the updated scores.
5. **Continue or Exit**: Choose to continue playing or exit the game.

## Code Structure
- **main.cpp**: The main file containing the game logic.
- **Functions**:
  - `greet()`: Displays the welcome message.
  - `gameInst()`: Displays the game instructions.
  - `moves()`: Prompts the player to make a move.
  - `getMoveName(int a)`: Returns the name of the move based on the input number.
  - `plyrVic()`: Handles player victory.
  - `AiVic()`: Handles AI victory.
  - `drawMove()`: Handles a draw.
  - `cinInteger(int* intpInt)`: Ensures valid integer input.

## Installation
1. **Clone the Repository**:
   ``sh
   git clone https://github.com/Iftikha/The-Ultimate-RPS.git
2. **Navigate to the Directory:**
   ``sh
   cd The-Ultimate-RPS 
3. **Compile the Code:**
    ``sh
    g++ main.cpp -o ultimate-rps
4. **Run the Game:**
    ``sh
    ./ultimate-rps.exe
## Contributing
Feel free to fork this repository and submit pull requests. Any improvements or bug fixes are welcome!

## License
This project is licensed under the MIT License.

## Author
Iftikhar Ahmed

Enjoy playing The Ultimate Rock Paper Scissors Game!