#include <iostream>
#include <Windows.h>
#include <filesystem>

#include "Functions.h"
#include "Paths.h"
#include <boost/algorithm/string.hpp>

Paths CorePaths;

void PromptFunctions::PromptUserEnterRiotGamesStandardDirectory()
{
	std::cout << "Enter your Riot Games directory..." << std::endl;
	std::cout << "It should look something like this ---> C:/Riot Games" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "ENTER HERE: ";
	std::cin.ignore();
	std::getline(std::cin, CorePaths.pathStandardRiotGames);
}

void PromptFunctions::PromptUserEnterRiotGamesProgramDataDirectory()
{
	std::cout << "Enter your Program Data - Riot Games directory..." << std::endl;
	std::cout << "It should look something like this ---> C:/ProgramData/Riot Games" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "ENTER HERE: ";
	std::cin.ignore();
	std::getline(std::cin, CorePaths.pathProgramDataRiotGames);
}

void PromptFunctions::PromptUserEnterRiotGamesAppDataDirectory()
{
	std::cout << "Enter your AppData - Riot Games directory..." << std::endl;
	std::cout << "It should look something like this ---> C:/Users/YOUR_PC_NAME/AppData/Local/Riot Games" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "ENTER HERE: ";
	std::cin.ignore();
	std::getline(std::cin, CorePaths.pathAppDataRiotGames);
}


bool PromptFunctions::bIsAlreadyDefaultDirectoryRiotGamesStandard()
{
	std::cout << "DEFAULT DIRECTORY ---> C:/Riot Games" << std::endl;
	std::cout << "Is your Riot Games folder installed in the default directory? YES/NO: ";
	std::cin >> CorePaths.isInDefaultDirectoryStandard;
	boost::to_upper(CorePaths.isInDefaultDirectoryStandard);
	SpacingFunction::InsertSmallSpacing();

	if (CorePaths.isInDefaultDirectoryStandard == "NO")
	{
		return false;
	}

	return true;
}

bool PromptFunctions::bIsAlreadyDefaultDirectoryRiotGamesProgramData()
{
	std::cout << "DEFAULT DIRECTORY ---> C:/ProgramData/Riot Games" << std::endl;
	std::cout << "Is your Program Data - Riot Games folder installed in the default directory? YES/NO: ";
	std::cin >> CorePaths.isInDefaultDirectoryProgramData;
	boost::to_upper(CorePaths.isInDefaultDirectoryProgramData);
	SpacingFunction::InsertSmallSpacing();

	if (CorePaths.isInDefaultDirectoryProgramData == "NO")
	{
		return false;
	}

	return true;
}

bool PromptFunctions::bIsAlreadyDefaultDirectoryRiotGamesAppData()
{
	std::cout << "DEFAULT DIRECTORY ---> C:/Users/YOUR_PC_NAME/AppData/Local/Riot Games" << std::endl;
	std::cout << "Is your AppData - Riot Games folder installed in the default directory? YES/NO: ";
	std::cin >> CorePaths.isInDefaultDirectoryAppData;
	boost::to_upper(CorePaths.isInDefaultDirectoryAppData);
	SpacingFunction::InsertEmptySpacing();

	if (CorePaths.isInDefaultDirectoryAppData == "NO")
	{
		return false;
	}

	return true;
}

int PromptFunctions::PromptSweepingMode()
{
	std::cout << "== [CHOOSE THE SWEEPING MODE] ==" << std::endl;
	SpacingFunction::InsertSmallEmptySpacing();

	std::cout << "[1] League of Legends" << std::endl;
	std::cout << "[2] CS:GO" << std::endl;
	std::cout << "[3] Crossfire" << std::endl;
	SpacingFunction::InsertSmallEmptySpacing();

	int sweepingMode{};

	std::cout << "Enter the corresponding NUMBER here: ";
	std::cin >> sweepingMode;
	SpacingFunction::InsertSpacing();

	return sweepingMode;
}


void SpacingFunction::InsertSpacing()
{
	std::cout << "" << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "" << std::endl;
}

void SpacingFunction::InsertSmallSpacing()
{
	std::cout << "------------------------" << std::endl;
}

void SpacingFunction::InsertSmallEmptySpacing()
{
	std::cout << "" << std::endl;
}

void SpacingFunction::InsertEmptySpacing()
{
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
}

void SpacingFunction::InsertSpecialSpacing()
{
	std::cout << "================" << std::endl;
}


void SetVariables::SetAllVariables()
{
	CorePaths.pathLogs = CorePaths.pathStandardRiotGames + "/League of Legends/Logs";
	CorePaths.pathConfig = CorePaths.pathStandardRiotGames + "/League of Legends/Config";
	CorePaths.pathDebug = CorePaths.pathStandardRiotGames + "/League of Legends/debug.log";

	CorePaths.pathMachineCFG = CorePaths.pathProgramDataRiotGames + "/machine.cfg";

	CorePaths.pathAppDataLoL = CorePaths.pathAppDataRiotGames + "/League of Legends";
	CorePaths.pathAppDataRiotClient = CorePaths.pathAppDataRiotGames + "/Riot Client";
}


void Sweeping::SweepAllTracks()
{
	Sleep(1500);
	bool bLogsResult = std::filesystem::remove_all(CorePaths.pathLogs);
	if (bLogsResult)
	{
		std::cout << "Tracking Layer 1 ---> Successfully swept!" << std::endl;
	}
	else 
	{
		std::cout << "Tracking Layer 1 ---> Nothing to sweep there!" << std::endl;
	}
	SpacingFunction::InsertSpecialSpacing();

	Sleep(1500);
	bool bConfigResult = std::filesystem::remove_all(CorePaths.pathConfig);
	if (bConfigResult)
	{
		std::cout << "Tracking Layer 2 ---> Successfully swept!" << std::endl;
	}
	else
	{
		std::cout << "Tracking Layer 2 ---> Nothing to sweep there!" << std::endl;
	}
	SpacingFunction::InsertSpecialSpacing();

	Sleep(1500);
	bool bDebugResult = std::filesystem::remove(CorePaths.pathDebug);
	if (bDebugResult)
	{
		std::cout << "Tracking Layer 3 ---> Successfully swept!" << std::endl;
	}
	else
	{
		std::cout << "Tracking Layer 3 ---> Nothing to sweep there!" << std::endl;
	}
	SpacingFunction::InsertSpecialSpacing();

	Sleep(1500);
	bool bMachineCFGResult = std::filesystem::remove(CorePaths.pathMachineCFG);
	if (bMachineCFGResult)
	{
		std::cout << "Tracking Layer 4 ---> Successfully swept!" << std::endl;
	}
	else
	{
		std::cout << "Tracking Layer 4 ---> Nothing to sweep there!" << std::endl;
	}
	SpacingFunction::InsertSpecialSpacing();

	Sleep(1500);
	bool bAppDataLoLResult = std::filesystem::remove_all(CorePaths.pathAppDataLoL);
	if (bAppDataLoLResult)
	{
		std::cout << "Tracking Layer 5 ---> Successfully swept!" << std::endl;
	}
	else
	{
		std::cout << "Tracking Layer 5 ---> Nothing to sweep there!" << std::endl;
	}
	SpacingFunction::InsertSpecialSpacing();

	Sleep(1500);
	bool bAppDataRiotClientResult = std::filesystem::remove_all(CorePaths.pathAppDataRiotClient);
	if (bAppDataRiotClientResult)
	{
		std::cout << "Tracking Layer 6 ---> Successfully swept!" << std::endl;
	}
	else
	{
		std::cout << "Tracking Layer 6 ---> Nothing to sweep there!" << std::endl;
	}
	SpacingFunction::InsertEmptySpacing();

	Sleep(2500);
	std::cout << "---> SWEEPING HAS FINISHED & YOU CAN CLOSE THE PROGRAM <---" << std::endl;
}


void ReverieSweeperLogo::PrintLogo()
{
	std::cout << R"(
  _____                     _         _____                                  
 |  __ \                   (_)       / ____|                                 
 | |__) |_____   _____ _ __ _  ___  | (_____      _____  ___ _ __   ___ _ __ 
 |  _  // _ \ \ / / _ \ '__| |/ _ \  \___ \ \ /\ / / _ \/ _ \ '_ \ / _ \ '__|
 | | \ \  __/\ V /  __/ |  | |  __/  ____) \ V  V /  __/  __/ |_) |  __/ |   
 |_|  \_\___| \_/ \___|_|  |_|\___| |_____/ \_/\_/ \___|\___| .__/ \___|_|   
                                                            | |              
                                                            |_|              


)";
}

std::string UserPCName::PCName()
{
	char buffer[256] = "";
	DWORD size = sizeof(buffer);
	GetUserName(buffer, &size);

	std::string newBuffer;
	newBuffer.append(buffer);

	return newBuffer;
}