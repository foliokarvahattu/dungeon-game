#ifndef TILE_HH
#define TILE_HH
#include <iostream>
#include "enemy.hpp"
#include "Loot.hpp"

template <typename T> class Tile {
public:
    Tile();
    ~Tile();
    bool isPlayerHere() const;
    bool isLootHere() const;
    bool isEnemyHere() const;
};
#endif