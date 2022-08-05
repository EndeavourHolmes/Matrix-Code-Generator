#ifndef SvgText_h
#define SvgText_h

#include <string>

class SvgText
{
public:
	static std::string GetSvgHeader();
	static std::string GetSvgDefs();
	static std::string GetSvgBackgroundAndHeaderSmallGlowEffect();
	static std::string GetSvgFooterCharactersHeaderSmallGlowEffect();
	static std::string GetSvgFooterCharactersHeaderMediumGlowEffect();
	static std::string GetSvgFooterCharactersHeaderLargeGlowEffect();
	static std::string GetSvgGlowEffect(char chCharacter, std::string strColour, double dX, double dY, bool bBigger);
	static std::string GetSvgGlowEffect(double dX, double dY);
	static std::string GetSvgFooterGlowEffectAndHeaderCharacters();
	static std::string GetSvgFooterMediumGlowEffectAndHeaderCharacters();
	static std::string GetSvgFooterLargeGlowEffectAndHeaderCharacters();
	static std::string GetSvgCharacters(char chCharacter, std::string strColour, double dOpacity, double dX, double dY);
	static std::string GetSvgFooter();
};

#endif