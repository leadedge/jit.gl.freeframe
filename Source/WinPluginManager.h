// #include "FFGLPluginManager.h"
#include "FFGLPluginInstance.h"

// LJ DEBUG
#include <stdio.h> // for console

class WinPluginManager : public FFGLPluginInstance // public CFFGLPluginManager
{

public:
		
	WinPluginManager();

	int getNumParameters();
 
	virtual ~WinPluginManager();

protected:
	
	HMODULE m_ffModule;

};

