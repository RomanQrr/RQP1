#include<vector>
class Screen
{
public:
	Screen();
	void Make();
	void Apear();
	int m_f_x;
	int m_f_y;
private:
	std::vector<std::vector<char> > outLook;
};
