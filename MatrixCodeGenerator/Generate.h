#ifndef Generate_h
#define Generate_h
#include <string>
#include <vector>

class DrawingElements;
class SvgText;

class Generate
{
public:
	void GenerateMatrixCodeSvgFile();
	void GenerateRandomColourMatrixSvgFile();
	void GenerateCustomisedMatrixSvgFile();

	char GetRandomCharacter();
	std::vector<double>* GetRandomListOfOpacity(std::vector<double>* plistOpacity);
	void SaveAsSvgFile(std::string strSvgText);
};


#endif
