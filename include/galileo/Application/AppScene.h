#pragma once

namespace galileo
{
	//This will be the scene we will use for plotting.
	
	// 1. Create the AppScene class that inherits IScene. Add the constructor and the destructor.
	//    Don't forget that we are using a QObject
	//
	// 2. CreateScene() implementation:
	//    2.1. Create and setup the UI
	//    2.2. Set the title of the scene the one we've introduced in ConfigScene 
	//    2.3. Save the plots in 2 different QCustomPlot* members, one for time plotting and one for frequency plotting.
	//    2.4. Connect the release signal from both existing buttons to new Slots. (back and plot button)
	//    2.5. Save the signalComboBox as a member and add one item in to the list: "Sine"
	//
	// 3. In order to populate the QCustomPlots we need to have correctly defined X and Y axis.
	//    Create a new method InitPlotters() that will instantiate the plotters;
	//    For time plotting use: 'Samples' as X quantity label and 'Amplitude' as Y quantity label.
	//    For Frequency plotting use: 'Frequency (Hz)' as X quantity label and 'Amplitude' for Y; X range = [0,1000], Y range = [-0.2, 2];
	//    Don't forget to add the graph.
	//
	// 4. BackButton slot -> return to Config scene.
	//
	// 5. PlotButton slot ->
	//    5.1. If we know the Sample rate and the total duration in time how many samples do we need?
	//    5.2. X Axis : [0.... NumberOfSamples]
	//    5.3. Y Axis we will calculate a sine using the following function, Where t is time and it is between [0,1]:
	//       
	//double SineWave(double t, double amplitude, double frequency)
	//{
	//	return amplitude * sin(2 * M_PI * frequency * t);
	//}
	//
	// 6. release()
}
