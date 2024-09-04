#include <stdio.h>
#include <stdlib.h>
#include "bitboard.h"
#include "attacktable.h"
#include "magicbitboard.h"

int main()
{
  leaper_attacks_table();

  slider_attacks_table();

//  ui64 occupancy = 0ULL;
//  set_bit(occupancy, e6);
//  set_bit(occupancy, f4);
//  set_bit(occupancy, c4);
//
//  show_bitboard(occupancy);
//  show_bitboard(get_queen_attacks(e4, occupancy));

  parse_fen("r3k2r/p1ppqpb1/bn2pnp1/3PN3/1p2P3/2N2Q1p/PPPBBPPP/R3K2R w kq g6 0 1 ");

  show_board();

  show_bitboard(side_bitboards[white]);
  show_bitboard(side_bitboards[black]);
  show_bitboard(side_bitboards[both]);

  show_bitboard(piece_bitboards[p]);

  return 0;
}
