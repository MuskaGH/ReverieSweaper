#pragma once

#include <String>
#include "Functions.h"

struct Paths
{
	// Core - User inputs
	std::string pathStandardRiotGames{ "C:/Riot Games" };
	std::string pathProgramDataRiotGames{ "C:/ProgramData/Riot Games" };
	std::string pathAppDataRiotGames = "C:/Users/" + UserPCName::PCName() + "/AppData/Local/Riot Games";

	// Within a Riot Games (Standard) folder
	std::string pathLogs;
	std::string pathConfig;
	std::string pathDebug;

	// Within a Riot Games (Program Data) folder
	std::string pathMachineCFG;

	// Within a Riot Games (AppData) folder
	std::string pathAppDataLoL;
	std::string pathAppDataRiotClient;

	// Does user have defaul directories already?
	std::string isInDefaultDirectoryStandard;
	std::string isInDefaultDirectoryProgramData;
	std::string isInDefaultDirectoryAppData;
};