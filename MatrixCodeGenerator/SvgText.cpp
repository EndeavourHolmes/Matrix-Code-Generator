#include "SvgText.h"

std::string SvgText::GetSvgHeader()
{
	return "<svg\n\
   width=\"1920\"\n\
   height=\"1080\"\n\
   viewBox=\"-5 -5 507.99998 285.75\"\n\
   version=\"1.1\"\n\
   id=\"svg11621\"\n\
   xml:space=\"preserve\"\n\
   xmlns=\"http://www.w3.org/2000/svg\"\n\
   xmlns:svg=\"http://www.w3.org/2000/svg\">\n";
}

std::string SvgText::GetSvgDefs()
{
	return "<defs\n\
   id=\"defs11618\"><filter\n\
   style=\"color-interpolation-filters:sRGB\"\n\
   id=\"filterCharacters\"\n\
   x=\"-0.0010214364\"\n\
   y=\"-0.00022266316\"\n\
   width=\"1.0020429\"\n\
   height=\"1.0004453\"><feGaussianBlur\n\
   stdDeviation=\"0\"\n\
   id=\"feGaussianBlur14972\"/></filter><filter\n\
   style=\"color-interpolation-filters:sRGB\"\n\
   id=\"filterSmallGlowLayers\"\n\
   x=\"-0.16404985\"\n\
   y=\"-0.035761267\"\n\
   width=\"1.3280997\"\n\
   height=\"1.0715225\"><feGaussianBlur\n\
   stdDeviation=\"0.52516029\"\n\
   id=\"feGaussianBlur14972-3\"/></filter>\n\
<filter\n\
   style=\"color-interpolation-filters:sRGB\"\n\
   id=\"filterMediumGlowLayers\"\n\
   x=\"-0.16404985\"\n\
   y=\"-0.035761267\"\n\
   width=\"1.3280997\"\n\
   height=\"1.0715225\"><feGaussianBlur\n\
   stdDeviation=\"0.82516029\"\n\
   id=\"feGaussianBlur14972-3\"/></filter>\n\
<filter\n\
   style=\"color-interpolation-filters:sRGB\"\n\
   id=\"filterLargeGlowLayers\"\n\
   x=\"-0.16404985\"\n\
   y=\"-0.035761267\"\n\
   width=\"1.3280997\"\n\
   height=\"1.0715225\"><feGaussianBlur\n\
   stdDeviation=\"1.02516029\"\n\
   id=\"feGaussianBlur14972-3\"/></filter>\n\
   </defs>\n";
}
std::string SvgText::GetSvgBackgroundAndHeaderSmallGlowEffect()
{
	return "<g>\n\
   <rect\n\
   style=\"opacity:1;fill:#000000;stroke:none;stroke-width:0.598001;stroke-dasharray:none;fill-opacity:1\"\n\
   width=\"512.74194\"\n\
   height=\"287.7742\"\n\
   x=\"-1.7741935\"\n\
   y=\"-0.7096774\"/>\n\
   \n\
   <text\n\
   xml:space=\"preserve\"\n\
   style=\"font-weight:bold;font-stretch:condensed;font-size:4.58611px;font-family:'Agency FB';-inkscape-font-specification:'Agency FB Bold Condensed';opacity:0.481818;mix-blend-mode:normal;fill:#41ce72;fill-opacity:1;stroke:#3da337;stroke-width:0.598;stroke-dasharray:none;filter:url(#filterSmallGlowLayers)\"\n\
   x=\"0\"\n\
   y=\"0\">\n";
}

std::string SvgText::GetSvgFooterCharactersHeaderSmallGlowEffect()
{
	return "</text>\n\
   \n\
   \n\
   \n\
   <text\n\
   xml:space=\"preserve\"\n\
   style=\"font-weight:bold;font-stretch:condensed;font-size:4.58611px;font-family:'Agency FB';-inkscape-font-specification:'Agency FB Bold Condensed';opacity:0.481818;mix-blend-mode:normal;fill:#41ce72;fill-opacity:1;stroke:#3da337;stroke-width:0.598;stroke-dasharray:none;filter:url(#filterSmallGlowLayers)\"\n\
   x=\"0\"\n\
   y=\"0\">\n";
}

std::string SvgText::GetSvgFooterCharactersHeaderMediumGlowEffect()
{
	return "</text>\n\
   \n\
   \n\
   \n\
   <text\n\
   xml:space=\"preserve\"\n\
   style=\"font-weight:bold;font-stretch:condensed;font-size:4.58611px;font-family:'Agency FB';-inkscape-font-specification:'Agency FB Bold Condensed';opacity:0.481818;mix-blend-mode:normal;fill:#41ce72;fill-opacity:1;stroke:#3da337;stroke-width:0.598;stroke-dasharray:none;filter:url(#filterMediumGlowLayers)\"\n\
   x=\"0\"\n\
   y=\"0\">\n";
}

std::string SvgText::GetSvgFooterCharactersHeaderLargeGlowEffect()
{
	return "</text>\n\
   \n\
   \n\
   \n\
   <text\n\
   xml:space=\"preserve\"\n\
   style=\"font-weight:bold;font-stretch:condensed;font-size:4.58611px;font-family:'Agency FB';-inkscape-font-specification:'Agency FB Bold Condensed';opacity:0.481818;mix-blend-mode:normal;fill:#41ce72;fill-opacity:1;stroke:#3da337;stroke-width:0.598;stroke-dasharray:none;filter:url(#filterLargeGlowLayers)\"\n\
   x=\"0\"\n\
   y=\"0\">\n";
}

std::string SvgText::GetSvgGlowEffect(char chCharacter, std::string strColour, double dX, double dY, bool bBigger)
{
	std::string strFontSize = "4.58611";

	if (bBigger)
	{
		strFontSize = "6.58611";
	}
	
	return "<tspan\n\
   style=\"font-style:normal;font-variant:normal;font-weight:bold;font-stretch:normal;font-size:" + strFontSize + "px;font-family:Arial;-inkscape-font-specification:'Arial Bold';fill:" + strColour + ";fill-opacity:1;stroke:none;stroke-width:0.598;stroke-dasharray:none\"\n\
   x=\"" + std::to_string(dX) + "\"\n\
   y=\"" + std::to_string(dY) + "\"\n\
   >" + chCharacter + "</tspan>\n";
}

std::string SvgText::GetSvgGlowEffect(double dX, double dY)
{
	return "<tspan\n\
   style=\"font-style:normal;font-variant:normal;font-weight:bold;font-stretch:normal;font-size:4.58611px;font-family:Arial;-inkscape-font-specification:'Arial Bold';fill:#000000;fill-opacity:1;stroke:none;stroke-width:0.598;stroke-dasharray:none\"\n\
   x=\"" + std::to_string(dX) + "\"\n\
   y=\"" + std::to_string(dY) + "\"\n\
   ></tspan>\n";
}

std::string SvgText::GetSvgFooterGlowEffectAndHeaderCharacters()
{
	return "</text>\n\
   \n\
   \n\
   \n\
   <text\n\
   xml:space=\"preserve\"\n\
   style=\"font-weight:bold;font-stretch:condensed;font-size:4.58611px;font-family:'Agency FB';-inkscape-font-specification:'Agency FB Bold Condensed';mix-blend-mode:normal;fill:#41ce72;fill-opacity:1;stroke:#3da337;stroke-width:0.598;stroke-dasharray:none;filter:url(#filterCharacters)\"\n\
   x=\"0\"\n\
   y=\"0\">\n";
}

std::string SvgText::GetSvgCharacters(char chCharacter, std::string strColour, double dOpacity, double dX, double dY)
{
	return "<tspan\n\
   style=\"font-style:normal;font-variant:normal;font-weight:bold;font-stretch:normal;font-size:4.58611px;font-family:Arial;-inkscape-font-specification:'Arial Bold';opacity:1;fill:" + strColour + ";fill-opacity:" + std::to_string(dOpacity) + ";stroke:none;stroke-width:0.598;stroke-dasharray:none\"\n\
   x=\"" + std::to_string(dX) + "\"\n\
   y=\"" + std::to_string(dY) + "\"\n\
   >" + chCharacter + "</tspan>\n";
}

std::string SvgText::GetSvgFooter()
{
	return "</text>\n\
	</g>\n\
   </svg>\n";
}