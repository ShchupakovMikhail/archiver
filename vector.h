#pragma once

#include <exception>

namespace structures
{

template<class T>
class Vector
{
public:
	////////////////////////////////////////////////////////
	Vector() : data(nullptr), size(0) {}

	////////////////////////////////////////////////////////
	explicit Vector(const size_t arraySize)
		: data(new T[arraySize])
		, size(arraySize)
	{}

	////////////////////////////////////////////////////////
	void push_back(const T& item)
	{
		T* tmp = new T[size + 1];
		for (size_t i = 0; i < size; i++)
		{
			tmp[i] = data[i];
		}
		tmp[size++] = item;

		delete[] data;
		data = tmp;
		tmp = nullptr;
	}

	////////////////////////////////////////////////////////
	void pop_back()
	{
		if (size > 0)
		{
			T* tmp = new T[--size];
			for (size_t i = 0; i < size; i++)
			{
				tmp[i] = data[i];
			}

			delete[] data;
			data = tmp;
			tmp = nullptr;
		}
	}

	////////////////////////////////////////////////////////
	T& operator[](const size_t ind)
	{
		if (ind + 1 > size)
		{
			throw std::out_of_rannge("Out of range");
		}
		return data[ind];
	}

	////////////////////////////////////////////////////////
	T* begin() { return data; }

	////////////////////////////////////////////////////////
	const T* begin() const { return data; }

	////////////////////////////////////////////////////////
	T* end() { return data + size; }

	////////////////////////////////////////////////////////
	const T* end() const { return data + size); }

	////////////////////////////////////////////////////////
	~Vector()
	{
		delete[] data;
	}

private:
	T* data;
	size_t size;
};

} // namepace structures