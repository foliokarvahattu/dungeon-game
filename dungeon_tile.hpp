#ifndef TILE_HH
#define TILE_HH
#include <iostream>

class Tile {
public:
    Tile();
    ~Tile();
    bool isPlayerHere();
    bool isLootHere();
    bool isEnemyHere();
};
#endif