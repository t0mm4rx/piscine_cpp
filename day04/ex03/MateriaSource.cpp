#include "MateriaSource.hpp"

MateriaSource::MateriaSource():
	current(0)
{
	for (int i = 0; i < 4; i++)
		this->sources[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &other):
	current(0)
{
	for (int i = 0; i < other.current; i++)
		this->learnMateria(other.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->sources[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->current; i++)
		delete this->sources[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	for (int i = 0; i < this->current; i++)
		delete this->sources[i];
	this->current = 0;
	for (int i = 0; i < other.current; i++)
		this->learnMateria(other.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->sources[i] = 0;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->current  == 4 || m == 0)
		return ;
	for (int i = 0; i < this->current; i++)
	{
		if (this->sources[i] == m)
			return ;
	}
	this->sources[this->current++] = m;
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < this->current; i++)
	{
		if (this->sources[i]->getType() == type)
			return (this->sources[i]->clone());
	}
	return (0);
}
