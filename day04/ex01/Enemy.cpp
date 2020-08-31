#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type) : hp(hp), type(type)
{}

Enemy::Enemy(const Enemy &other)
{
	*this = other;
}

Enemy		&Enemy::operator=(const Enemy &other)
{
	this->hp = other.hp;
	this->type = other.type;
	return (*this);
}

Enemy::~Enemy(void)
{}

std::string	Enemy::getType(void) const
{
	return (this->type);
}

int			Enemy::getHP(void) const
{
	return (this->hp);
}

void		Enemy::takeDamage(int damage)
{
	this->hp -= damage;
	this->hp = (this->hp < 0 ? 0 : this->hp);
	std::cout << this->hp << " HP remaining for " << this->type << std::endl;
}
