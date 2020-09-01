#include "MateriaSource.hpp"

MateriaSource::MateriaSource():
	amount(0)
{
	for (int i = 0; i < 4; i++)
		this->sources[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &other):
	amount(0)
{
	for (int i = 0; i < other.amount; i++)
		this->learnMateria(other.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->sources[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->amount; i++)
		delete this->sources[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	for (int i = 0; i < this->amount; i++)
		delete this->sources[i];
	this->amount = 0;
	for (int i = 0; i < other.amount; i++)
		this->learnMateria(other.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->sources[i] = 0;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->amount  == 4 || m == 0)
		return ;
	for (int i = 0; i < this->amount; i++)
	{
		if (this->sources[i] == m)
			return ;
	}
	this->sources[this->amount++] = m;
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < this->amount; i++)
	{
		if (this->sources[i]->getType() == type)
			return (this->sources[i]->clone());
	}
	return (0);
}
