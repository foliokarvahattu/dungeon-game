#ifndef TILE_HH
#define TILE_HH
#include <iostream>
#include "enemy.hpp"
#include "Loot.hpp"

template <typename T> class Tile {
public:
    Tile(T tileContent) : tileContent_(tileContent) {}
    ~Tile();
    T returnTileType() const;
    bool isPlayerHere() const;
    bool isLootHere() const;
    bool isEnemyHere() const;
private:
    T tileContent_;
};
#endif