#include "WinPluginManager.h"

// LJ DEBUG
#include <stdio.h> // for console


WinPluginManager::WinPluginManager()
{
	FILE* pCout;
	AllocConsole();
	freopen_s(&pCout, "CONOUT$", "w", stdout); 
	printf("WinPluginManager\n");



}

int WinPluginManager::getNumParameters()
{
	// return(GetNumParams());
	return 0;
}


WinPluginManager::~WinPluginManager()
{

}
