#ifndef ENEMY_HH
#define ENEMY_HH
#include <iostream>
#include <vector>

class Enemy {
public:
    Enemy(std::string const &name, std::string const &type);
	const std::string& getName() const;
	const std::string& getType() const;
	int getHP() const;
private:
    std::string name;
    int hpoints;
    int mpoints;
};
#endif