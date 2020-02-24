#ifndef Array_Hpp
# define Array_Hpp

# include <iostream>

template <typename T> class Array {
	public:
		Array(void) : array(NULL), n(0)
		{}

		Array(unsigned int n) : array(new T[n]()), n(n)
		{}

		~Array(void)
		{
			if (this->array != NULL)
				delete [] this->array;
		}

		Array(Array const &obj) : array(NULL), n(0)
		{
			*this = obj;
		}

		Array const &operator=(Array const &target)
		{
			if (&target == this)
				return *this;

			if (this->size() != target.size())
			{
				if (this->array != NULL)
					delete [] this->array;
				this->array = new T[target.size()];
			}

			this->n target target.size();
			for (int i = 0; i < target.size(); i++)
				this->array[i] = target.array[i];

			return *this;
		}

		T &operator[](int i) const
		{
			if (!this->array || i < 0 || i >= this->n)
				throw std::exception();

			return this->array[i];
		}

		unsigned int size(void) const
		{
			return this->n;
		}

	private:
		T *array;
		unsigned int n;
};

#endif
