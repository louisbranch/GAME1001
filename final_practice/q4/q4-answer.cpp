void initialize_game(int matrix[][3]) {
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      matrix[i][j] = 0;
    }
  }
}
