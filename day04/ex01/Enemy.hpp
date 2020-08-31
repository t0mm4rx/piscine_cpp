#ifndef Enemy_hpp
# define Enemy_hpp

# include <iostream>
# include <string>

class Enemy
{
	public:
							Enemy(int hp, const std::string &type);
							Enemy(const Enemy &other);
		Enemy				&operator=(const Enemy &other);
		virtual				~Enemy(void);
		std::string			getType(void) const;
		int					getHP() const;
		virtual void		takeDamage(int damage);
	protected:
		int					hp;
		std::string			type;
};

#endif
