#ifndef class1_h
#define class1_h
#include<vector>
class Screen
{
public:
	Screen();
	void Make();
	void Apear();
	int m_f_x;
	int m_f_y;
	char m_f_s;
private:
	std::vector<std::vector<char> > outLook;
};
#endif
