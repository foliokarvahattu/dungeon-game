#include "enemy.hpp"
#include <iostream>

Enemy::~Enemy() { }
const std::string& Enemy::getName() const {
    return name_;
}
const std::string& Enemy::getType() const {
    return type_;
}
int Enemy::getHP() const {
    return hpoints_;
}
int Enemy::getMP() const {
    return mpoints_;
}