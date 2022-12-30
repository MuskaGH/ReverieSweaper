#pragma once

static std::string helperVar{};

class PromptFunctions
{
public:
	static void PromptUserEnterRiotGamesStandardDirectory();
	static void PromptUserEnterRiotGamesProgramDataDirectory();
	static void PromptUserEnterRiotGamesAppDataDirectory();

	static bool bIsAlreadyDefaultDirectoryRiotGamesStandard();
	static bool bIsAlreadyDefaultDirectoryRiotGamesProgramData();
	static bool bIsAlreadyDefaultDirectoryRiotGamesAppData();

	static int PromptSweepingMode();
};

class SpacingFunction
{
public:
	static void InsertSpacing();
	static void InsertSmallSpacing();

	static void InsertEmptySpacing();
	static void InsertSmallEmptySpacing();
	static void InsertSpecialSpacing();
};

class SetVariables
{
public:
	static void SetAllVariables();
};

class Sweeping
{
public:
	static void SweepAllTracks();
};

class ReverieSweeperLogo
{
public:
	static void PrintLogo();
};

class UserPCName
{
public:
	static std::string PCName();
};