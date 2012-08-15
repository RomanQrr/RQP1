#include <iostream>

class Animal
{
public:
	Animal() 
	{
		m_age = 10;
	}
	virtual ~Animal() 
	{
		std::cout << "Rar! I am dead!"<<std::endl; 
	}
	virtual void Sound() 
	{
		std::cout << "Rar! My age is " << m_age << std::endl;
	}
protected:
	int m_age;
};

class Cat: public Animal
{
public:
	virtual ~Cat() 
	{
		std::cout << "Mew! Like a BOSE! ";
	}
	void Sound() 
	{
		std::cout << "Mew! My age is " << m_age << " and I'm a CAT!" << std::endl;
	}
};

class Dog: public Animal
{
public:
	~Dog()
	{
		std::cout<<"Woooooooooooov! ";
	}
	void Sound()
	{
		std::cout<<"Wov! My age is"<<m_age<<" and I'm a DOG!"<<std::endl;
	}
};

int main()
{
	Animal animal;
	Cat cat;
	Dog dog;
	Animal * pAn1 = & animal;
	Animal * pAn2 = & cat;
	Animal * pCat1 = & dog;
	pAn1 -> Sound();
	pAn2 -> Sound();
	pCat1 -> Sound();
	return 0;
}
