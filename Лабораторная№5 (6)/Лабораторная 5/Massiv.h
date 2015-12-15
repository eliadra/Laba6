#pragma once

class Massiv 
{
	int *chislo;
	int size; // размер массива 
public:
	Massiv();
	Massiv(int size);
	Massiv(Massiv&copy);
	~Massiv();
	int getSize() const;
	void print();
	
	friend Massiv operator+ (const Massiv &a, const Massiv &b)
	{
		Massiv A(a.size + b.size);
		for (int i = 0; i < a.size; i++)
		{
			A.chislo[i] = a.chislo[i];
		}

		for (int j = 0; j < b.size; j++)
		{
			A.chislo[j + a.size] = b.chislo[j];
		}

			return A;
	}

	int operator!=(const Massiv&) const;
	int &operator[](int);
	friend bool operator >(const Massiv &a, const Massiv&b)
	{
		for (int i = 0; i < a.size; i++)
		{
			bool y = 0;
			for (int n = 0; n < b.size; n++)
			{
				if (b.chislo[i] == a.chislo[n])
				{
					y = 1;
					break;
				}

			}
			if (y == 0)
			{
				return 0;
			}
		}
		return 1;
	}
	static int getCount();
};