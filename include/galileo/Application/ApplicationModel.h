#pragma once
#include <galileo/Framework/IApplicationModel.h>

const std::string configSceneName = std::string("Config scene");
const std::string appSceneName = std::string("App scene");

namespace galileo
{
	//This class will hold the IApplicationModel implementation.
	//Our application should have 2 different scenes: 
	// - ConfigScene : enter the settings for the plotting.
	// - AppScene    : the plotting scene. -> we will add this later

	//1. Create the ApplicationModel class, then add all the virtual functions.

	//2. defineScene() - here we want to define the 2 scenes and add them to the map.

	//3. defineInitialScene() - set the initial scene

	//4. defineTransientData() - default values for the initial scene.
	//   You can use these values: 
	//   - ApplicationName = "Undefined";
	//   - SampleRate = 25600;
	//   - DisplayTime = 0.1;
	//   - RefreshRate = 1.0;

}
