#ifndef ENEMY_HH
#define ENEMY_HH
#include <iostream>

class Enemy {
public:
    Enemy(std::string const &name, std::string const &type, int hpoints, int mpoints): name_(name),type_(type), hpoints_(hpoints), mpoints_(mpoints) { }
	virtual ~Enemy();
    const std::string& getName() const;
	const std::string& getType() const;
	int getHP() const;
    int getMP() const;
private:
    std::string const name_;
    std::string const type_;
    int hpoints_;
    int mpoints_;
};
#endif