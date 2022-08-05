#include "Generate.h"
#include "DrawingElements.h"
#include "SvgText.h"
#include <iostream>
#include <vector>
#include <random>
#include <time.h>
#include <fstream>
#include <string>

void Generate::GenerateMatrixCodeSvgFile()
{
	srand(time(NULL));
	DrawingElements* pDrawingElement = new DrawingElements;

	std::string strSvgText = "";
	strSvgText += SvgText::GetSvgHeader();
	strSvgText += SvgText::GetSvgDefs();
	strSvgText += SvgText::GetSvgBackgroundAndHeaderSmallGlowEffect();

	std::vector<char> listCharacters;								// Buchstaben
	std::vector<double>* pListOpacity = new std::vector<double>;	// Deckkraft
	std::vector<double> listX;										// Koordinaten
	std::vector<double> listY;
	int nNumberOfColumns = 15;										// Spaltenanzahl

	for (size_t i = 0; i < nNumberOfColumns; i++)
	{
		listX.push_back((i+1) * 3.8);								// Spaltenabstand
		listCharacters.clear();										// Listen vor jeder neuen Spalte leeren
		pListOpacity->clear();
		pListOpacity->push_back(0.5);
		listY.clear();

		int nRandomNumberOfLines = rand() % 10 + 10;				// Spaltenlaenge

		for (size_t j = 0; j < nRandomNumberOfLines; j++)
		{
			listCharacters.push_back(GetRandomCharacter());			// Buchstabe hinzugefuegt
			pListOpacity = GetRandomListOfOpacity(pListOpacity);	// fuegt Deckkraft hinzu
			listY.push_back((j+1) * 4.5);							// Abstand zum Buchstaben oberhalb
		}

		for (size_t j = 0; j < listCharacters.size(); j++)			// Glow-Effekt wenig
		{
			if ((*pListOpacity)[j] < 0.2)
			{
				strSvgText += SvgText::GetSvgGlowEffect(listCharacters[j], pDrawingElement->GetTextColour(), listX[i], listY[j], false);
			}
			else
			{
				strSvgText += SvgText::GetSvgGlowEffect(listX[i], listY[j]);
			}
		}

		strSvgText += SvgText::GetSvgFooterCharactersHeaderMediumGlowEffect();
		for (size_t j = 0; j < listCharacters.size(); j++)			// Glow-Effekt mittel
		{
			if ((*pListOpacity)[j] >= 0.2 && (*pListOpacity)[j] < 0.9)
			{
				strSvgText += SvgText::GetSvgGlowEffect(listCharacters[j], pDrawingElement->GetTextColour(), listX[i], listY[j], false);
			}
			else
			{
				strSvgText += SvgText::GetSvgGlowEffect(listX[i], listY[j]);
			}
		}

		strSvgText += SvgText::GetSvgFooterCharactersHeaderLargeGlowEffect();
		for (size_t j = 0; j < listCharacters.size(); j++)			// Glow-Effekt stark
		{
			if ((*pListOpacity)[j] >= 0.9)
			{
				strSvgText += SvgText::GetSvgGlowEffect(listCharacters[j], "#c8fde8", listX[i], listY[j], true); // hell-gruen
			}
			else
			{
				strSvgText += SvgText::GetSvgGlowEffect(listX[i], listY[j]);
			}
		}

		strSvgText += SvgText::GetSvgFooterGlowEffectAndHeaderCharacters();

		for (size_t j = 0; j < listCharacters.size(); j++) // Buchstaben klar ohne Unschärfe aber mit unterschiedlicher Deckkraft
		{
			strSvgText += SvgText::GetSvgCharacters(listCharacters[j], pDrawingElement->GetTextColour(), (*pListOpacity)[j], listX[i], listY[j]); // gruen

			if ((*pListOpacity)[j] > 0.9)
			{
				strSvgText += SvgText::GetSvgCharacters(listCharacters[j], "#c8fde8", (*pListOpacity)[j], listX[i], listY[j]); // hell-gruen
			}
		}

		if (i+1 < nNumberOfColumns)
		{
			strSvgText += SvgText::GetSvgFooterCharactersHeaderSmallGlowEffect();
		}
	}
	
	strSvgText += SvgText::GetSvgFooter();
	
	//SaveAsSvgFile(strSvgText);
	std::cout << strSvgText;
	delete pDrawingElement;
	delete pListOpacity;
}

void Generate::GenerateRandomColourMatrixSvgFile()
{

}

void Generate::GenerateCustomisedMatrixSvgFile()
{

}

char Generate::GetRandomCharacter()
{
	char chCharacter;
	do
	{
		int nRandomCharacter = rand() % 223 + 32; // 32 - 255 Asci
		chCharacter = static_cast<char>(nRandomCharacter);
	} while (chCharacter == 60 || chCharacter == 62 || chCharacter == 38); // < > & unzulaessig

	return chCharacter;
}

std::vector<double>* Generate::GetRandomListOfOpacity(std::vector<double>* plistOpacity)
{
	int nRandomOpacity = rand() % 9 + 1; // zufaellige Deckkraft 1-10
	if (nRandomOpacity > 5)
	{
		plistOpacity->push_back(plistOpacity->back() + 0.2); // Deckkraft um 0.2 erhoeht zum Vorgaenger
	}
	else
	{
		if (plistOpacity->back() > 0.4)
		{
			plistOpacity->push_back(plistOpacity->back() - 0.2); // Deckkraft um 0.2 niedriger als Vorgaenger
		}
		else
		{
			plistOpacity->push_back(plistOpacity->back()); // Deckkraft nicht niedriger als 0.2 -> gleich zum Vorgaenger
		}
	}
	return plistOpacity;
}

void Generate::SaveAsSvgFile(std::string strSvgText)
{
	std::ofstream myfile("TestMatrixCode.svg");
	if (myfile.is_open())
	{
		myfile << strSvgText;
		myfile.close();
	}
	else std::cout << "Unable to open file";

	std::cout << "Saved as svg-file.";
}