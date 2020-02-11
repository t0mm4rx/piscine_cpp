#ifndef Enemy_hpp
# define Enemy_hpp

# include <string>

class Enemy
{
	public:
		Enemy(int hp, std::string const & type);
		virtual				~Enemy(void);
		std::string			getType(void) const;
		int					getHP() const;
		virtual void		takeDamage(int damage);
	protected:
		int					hp;
		std::string			type;
};

#endif
