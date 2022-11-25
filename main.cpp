#include <iostream>
using namespace std;
class Fraction
{
	int chislitel;
	int znamenatel;
public:
	int get_chislitel() const
	{
		return chislitel;
	}
	int get_znamenatel()const
	{
		return znamenatel;
	}
	void set_chislitel(int a)
	{
		chislitel = a;
	}
	void set_znamenatel(int b)
	{
		znamenatel = b;
	}
	Fraction(int a =0, int b = 1)//����������� �� ���� �������� ��� ����� � � �
	{
		chislitel = a;
		znamenatel = b;

	}
	int prosess_nod(int a, int b) // ���������� ��� 
	{
		if (b == 0)
		{
			return a;

		}

		return prosess_nod(b, a % b);

	}
	Fraction reduce() //����������� ����� ����� � ���������� ��������� � ����������� �� �� ���
	{
	 int a = max(abs(chislitel), abs(znamenatel)), b = min(abs(chislitel), abs(znamenatel));
	 int sgn;
	        if (chislitel * znamenatel >= 0) sgn = 1;
			        else sgn = -1;
			        int nod = prosess_nod(a, b);
			        return Fraction(sgn * (abs(chislitel) / nod), abs(znamenatel) / nod);
	
	}
	void output() // ����� �����, ����������� "1" � �����������
	{
		cout << "\t" << chislitel;
		if (znamenatel != 1) cout << "/" << znamenatel;
	}


	int undivided(int a, int b) // ����� �������� � ���������� ������� �����  
	{
		int c = a / b;
		return c;
	}

			

};