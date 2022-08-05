#ifndef DrawingElements_h
#define DrawingElements_h

#include <string>

class DrawingElements
{
	private:
		double m_dXPosition = 0.0;
		double m_dTextSize = 13.0;
		double m_dColumnWidth = 14.52;
		std::string m_strTextColour = "#58f78fff"; // Textfarbe gruen
		std::string m_strGlowColour = "#ffffffff"; // leuchtende Farbe weiss
		std::string m_strBackgroundColour = "#000000ff"; // Hintergrundfarbe schwarz
		int m_nNumberOfCharacters = 20;
	
public:
		void SetXPosition(double dXPosition);
		double GetXPosition();

		void SetTextSize(double dTextSize);
		double GetTextSize();

		void SetColumnWidth(double dColumnWidth);
		double GetColumnWidth();

		void SetTextColour(std::string strTextColour);
		std::string GetTextColour();

		void SetGlowColour(std::string strGlowColour);
		std::string GetGlowColour();

		void SetBackgroundColour(std::string strBackgroundColour);
		std::string GetBackgroundColour();

		void SetNumberOfCharacters(int nNumberOfCharacters);
		int GetNumberOfCharacters();

};
#endif