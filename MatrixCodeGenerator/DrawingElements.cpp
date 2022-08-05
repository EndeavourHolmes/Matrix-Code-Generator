#include "DrawingElements.h"

#include <string>

void DrawingElements::SetXPosition(double dXPosition)
{
	m_dXPosition = dXPosition;
}

double DrawingElements::GetXPosition()
{
	return m_dXPosition;
}

void DrawingElements::SetTextSize(double dTextSize) 
{
	m_dTextSize = dTextSize;
}

double DrawingElements::GetTextSize()
{
	return m_dTextSize;
}

void DrawingElements::SetColumnWidth(double dColumnWidth) 
{
	m_dColumnWidth = dColumnWidth;
}

double DrawingElements::GetColumnWidth() 
{
	return m_dColumnWidth;
}

void DrawingElements::SetTextColour(std::string strTextColour) 
{
	m_strTextColour = strTextColour;
}

std::string DrawingElements::GetTextColour() 
{
	return m_strTextColour;
}

void DrawingElements::SetGlowColour(std::string strGlowColour) 
{
	m_strGlowColour = strGlowColour;
}

std::string DrawingElements::GetGlowColour()
{
	return	m_strGlowColour;
}

void DrawingElements::SetBackgroundColour(std::string strBackgroundColour) 
{
	m_strBackgroundColour = strBackgroundColour;
}

std::string DrawingElements::GetBackgroundColour() 
{
	return m_strBackgroundColour;
}

void DrawingElements::SetNumberOfCharacters(int nNumberOfCharacters) 
{
	m_nNumberOfCharacters = nNumberOfCharacters;
}

int DrawingElements::GetNumberOfCharacters()
{
	return m_nNumberOfCharacters;
}