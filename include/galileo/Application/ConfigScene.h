#pragma once

namespace galileo
{
	// This will be the first scene. Here we will introduce the settings needed for plotting.

	//  1. We'll start by creating the ConfigScene class derived from the IScene interface.
	
	//  2. Next, lets implement the pure virtual functions. In createScene() we want read the default values from the transient data collection
	//     and initialize all the widgets. For this we will follow the next steps:
	//
	//     2.1. The config_scene.ui will generate the "ui_configscene.h" include file along with a Ui_ConfigScene class.
	//          Create a new Ui_ConfigScene object and set it up with the mainWindow.
	//     2.2. When pushing the OK button the application will change the current scene to the plotting scene. 
	//          The goal is to put all the informations in the transientDataCollection map
	//          To do so, first add the connection between the OK button released() signal and a new Slot.
	//     2.3. Read the following data from m_TransientDataCollection using boost::any_cast<>: "ApplicationName", "SampleRate", "DisplayTime" and "RefreshRate". 
	//          These will be the values that we set in ApplicationModel
	//     2.5. Using the centralWidget from the ui configuration object we gain access to all the widgets.
	//          Use the findChild method to get the widgets and set the default values read at the previous step.
	//          Check congif_scene.ui for the widget names.

	// 3. Implement the release() function.

	// 4. Final step -> implementing the OK slot. 
	//    4.1. When the OK button is pressed, we want to read all the information the user
	//         entered in the fields and update the transient data collection. We need acces to the central widget.
	//    4.2. Emit the SceneChange signal to proceed to the next scene.

}
