#include <iostream>
#include <ctime>

const int SIZE = 3;
const char EMPTY = ' ';
const char PLAYER = 'X';
const char COMPUTER = 'O';

char board[SIZE][SIZE];

void initialize_game();
void draw();
void get_player_move();
void get_computer_move();
bool is_there_a_winner(char);
int rnd();

int main() {
  bool done;
  bool win;
  srand(time(0));
  initialize_game();
  do {
    draw();
    get_player_move();
    done = is_there_a_winner(PLAYER);
    if (done) {
      win = true;
      break;
    }
    get_computer_move();
    done = is_there_a_winner(COMPUTER);
    if (done) {
      win = false;
      break;
    }
  } while (true);
  draw();
  if (win) {
    std::cout << "Congratz!" << std::endl;
  } else {
    std::cout << "Loser!" << std::endl;
  }
  return 0;
}

// Initialize the board tiles with empty spaces
void initialize_game() {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      board[i][j] = EMPTY;
    }
  }
}

// Draw empty spaces and a grid to the console
void draw() {
  int last = SIZE - 1;
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      std::cout << " " << board[i][j];
      if (j != last) std::cout << " |";
    }
    std::cout << std::endl;
    if (i != last) {
      std::cout << " - | - | - ";
      std::cout << std::endl;
    }
  }
}

void get_player_move() {
  int x, y;
  std::cout << "Enter X,Y coordinates for your move: ";
  std::cin >> x >> y;
  char *ptr = &board[--x][--y];
  if (*ptr == EMPTY) {
    *ptr = PLAYER;
  } else {
    std::cout << "Invalid move, try again." << std::endl;
    get_player_move();
  }
}

void get_computer_move() {
  char *ptr = &board[rnd()][rnd()];
  if (*ptr == EMPTY) {
    *ptr = COMPUTER;
  } else {
    get_computer_move();
  }
}

bool is_there_a_winner(char c) {
  for (int i = 0; i < SIZE; i++) {
    if (board[i][0] == c &&
        board[i][1] == c &&
        board[i][2] == c) {
      return true;
    }
  }
  for (int i = 0; i < SIZE; i++) {
    if (board[0][i] == c &&
        board[1][i] == c &&
        board[2][i] == c) {
      return true;
    }
  }
  return false;
}

int rnd() {
  return rand() % SIZE;
}
