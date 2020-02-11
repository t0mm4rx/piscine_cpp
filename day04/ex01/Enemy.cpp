#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type)
{}

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
}
