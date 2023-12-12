# Tic-Tac-Toe with Minimax and Alpha-Beta Pruning

Welcome to the Tic-Tac-Toe game implemented in C++ with Minimax algorithm and Alpha-Beta Pruning! This console-based game allows you to play against an AI opponent that uses the Minimax algorithm with Alpha-Beta Pruning to make optimal moves.

## Table of Contents

- [Tic-Tac-Toe with Minimax and Alpha-Beta Pruning](#tic-tac-toe-with-minimax-and-alpha-beta-pruning)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [Getting Started](#getting-started)
    - [Prerequisites](#prerequisites)
    - [Installation](#installation)
  - [How to Play](#how-to-play)
    - [Player Moves](#player-moves)
    - [AI Moves](#ai-moves)
  - [Game Features](#game-features)
    - [Print Board](#print-board)
    - [Check Win](#check-win)
    - [Make Move](#make-move)
    - [Minimax Algorithm](#minimax-algorithm)
    - [Alpha-Beta Pruning](#alpha-beta-pruning)
  - [Examples](#examples)
  - [Contributing](#contributing)
  - [License](#license)

## Introduction

This Tic-Tac-Toe game is implemented in C++ and features a simple console interface. The AI opponent is powered by the Minimax algorithm, a decision-making algorithm widely used in two-player games. The implementation also includes Alpha-Beta Pruning to optimize the search space and improve performance.

## Getting Started

### Prerequisites

Before running the game, ensure that you have a C++ compiler installed on your system.

### Installation

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/MohammadrezaAmani/TicTocToe
   ```

2. Navigate to the project directory:

   ```bash
   cd TicTocToe
   ```

3. Compile the code using your C++ compiler:

   ```bash
   g++ -o tic_tac_toe main.cpp
   ```

4. Run the executable:

   ```bash
   ./tic_tac_toe
   ```

## How to Play

### Player Moves

- Enter your move by specifying the row and column (1-3) when prompted.

### AI Moves

- The AI opponent uses the Minimax algorithm to make optimal moves.
- Watch out for strategic plays, as the AI aims to win or force a tie.

## Game Features

### Print Board

- The `printBoard` function displays the current state of the Tic-Tac-Toe board.

### Check Win

- The `checkWin` function checks if a player has won the game.

### Make Move

- The `makeMove` function allows players to make a move on the board.

### Minimax Algorithm

- The `minimax` function implements the Minimax algorithm for decision-making.

### Alpha-Beta Pruning

- The Minimax algorithm is enhanced with Alpha-Beta Pruning for improved efficiency.

## Examples

Here's an example of how of using game:

```cpp
int main()
{
    TicTacToe game;
    int currentPlayer = 1;

    while (true)
    {
        game.printBoard();

        if (currentPlayer == 1)
        {
            std::cout << "Player 1, enter your move (row and column): ";
            int row, col;
            std::cin >> row >> col;

            if (game.makeMove(row - 1, col - 1, currentPlayer))
            {
                if (game.checkWin(currentPlayer))
                {
                    game.printBoard();
                    std::cout << "Player 1 wins!" << std::endl;
                    break;
                }
                else if (game.isBoardFull())
                {
                    game.printBoard();
                    std::cout << "It's a tie!" << std::endl;
                    break;
                }
            }
            else
            {
                std::cout << "Invalid move. Try again." << std::endl;
                continue;
            }
        }
        else
        {
            game.makeAIMove();

            if (game.checkWin(2))
            {
                game.printBoard();
                std::cout << "AI wins!" << std::endl;
                break;
            }
            else if (game.isBoardFull())
            {
                game.printBoard();
                std::cout << "It's a tie!" << std::endl;
                break;
            }
        }

        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }

    return 0;
}

```

Follow the on-screen instructions to make your moves and enjoy the game!

## Contributing

Contributions are welcome! If you have ideas for improvements or find any issues, please open an issue or submit a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
