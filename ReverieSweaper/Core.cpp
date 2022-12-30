#include "Paths.h"
#include "Functions.h"
#include "Core.h"

#include <iostream>
#include <Windows.h>

int main()
{
	// Prints the logo
 	ReverieSweeperLogo::PrintLogo();

	// Prompts the user to choose the Sweeping Mode
	int sweepingMode = PromptFunctions::PromptSweepingMode();

	// Decides the Sweeping Mode according to the User's Input
	switch (sweepingMode)
	{
	case 1:
		LeagueOfLegendsSweepingMode();
		break;
	case 2:
		// TODO
		std::cout << "CS:GO Sweeping Mode is currently NOT available..." << std::endl;
		SpacingFunction::InsertSpacing();
		break;
	case 3:
		// TODO
		std::cout << "CrossFire Sweeping Mode is currently NOT available..." << std::endl;
		SpacingFunction::InsertSpacing();
		break;
	default:
		std::cout << "INVALID SWEEPING MODE!" << std::endl;
		SpacingFunction::InsertSpacing();
	}

	Sleep(5000);
	return 0;
}

void LeagueOfLegendsSweepingMode()
{
	// Asking user whether his files are already in default directories
	if (!PromptFunctions::bIsAlreadyDefaultDirectoryRiotGamesStandard())
	{
		PromptFunctions::PromptUserEnterRiotGamesStandardDirectory();
		SpacingFunction::InsertSpacing();
	}

	if (!PromptFunctions::bIsAlreadyDefaultDirectoryRiotGamesProgramData())
	{
		PromptFunctions::PromptUserEnterRiotGamesProgramDataDirectory();
		SpacingFunction::InsertSpacing();
	}

	if (!PromptFunctions::bIsAlreadyDefaultDirectoryRiotGamesAppData())
	{
		PromptFunctions::PromptUserEnterRiotGamesAppDataDirectory();
		SpacingFunction::InsertEmptySpacing();
	}

	// Setting all variables
	SetVariables::SetAllVariables();

	// Cleaning all tracking information
	Sweeping::SweepAllTracks();
}