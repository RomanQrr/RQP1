#ifndef class1_h
#define class1_h
#include<vector>
class Screen
{
public:
	Screen();
	void Make();
	void Apear( int iY, int iX, char iS );
	void XYChange( int iY, int iX, char iS );
	void Clear();
	std::vector<std::vector<char> > outLook;
};
#endif
