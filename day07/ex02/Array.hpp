#ifndef Array_Hpp
# define Array_Hpp

# include <iostream>

template <typename T> class Array {
	public:
		Array(void) : array(nullptr), n(0)
		{}

		Array(unsigned int n) : array(new T[n]()), n(n)
		{}

		~Array(void)
		{
			if (this->array != nullptr)
				delete [] this->array;
		}

		Array(const Array &obj) : array(nullptr), n(0)
		{
			*this = obj;
		}

		const Array &operator=(const Array &target)
		{
			if (this->array != nullptr)
				delete [] this->array;
			this->array = new T[target.size()];
			this->n = target.size();
			for (unsigned int i = 0; i < target.size(); i++)
				this->array[i] = target.array[i];
			return (*this);
		}

		T &operator[](int i) const
		{
			if (!this->array || i < 0 || (unsigned int)i >= this->n)
				throw std::exception();
			return this->array[i];
		}

		unsigned int size(void) const
		{
			return this->n;
		}

	private:
		T				*array;
		unsigned int	n;
};

#endif
