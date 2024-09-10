#include <stdio.h>
#include <stdlib.h>
#include "bitboard.h"
#include "attacktable.h"
#include "magicbitboard.h"
#include "movegen.h"

int main()
{
  leaper_attacks_table();
  slider_attacks_table();

  parse_fen(tricky_position, &board);
  show_board(board);

  moves move_list[1];

  generate_moves(board, move_list);

  for (int move_count = 0; move_count < move_list->count; move_count++)
  {
    int move = move_list->moves[move_count];

    copy_board();

    make_move(move, all_moves);
    show_board(board);
    getchar();

    restore_board();
    show_board(board);
    getchar();
  }

  return 0;
}
