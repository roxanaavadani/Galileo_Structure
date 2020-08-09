#pragma once

namespace galileo
{
  /*
  APPLICATION IS THE CLASS RESPONSIBLE FOR JOINING ALL THE PUZZLE PIECES. BECAUSE WE CAN ONLY HAVE ONE APPLICATION
  PER FRAMEWORK INSTANTIATION, THIS OBJECT WILL BE A SINGLETON. ITS MAIN RESPONSIBILITY WILL BE TO FEED THE FRAMEWORK
  WITH THE REQUIRED INFORMATIONS(THE APPLICATION MODEL) AND TO START THE SCENE MACHINE
  */

  // 1. Create Application class. This class will be used in external dlls, 
  //    we need to make sure it's properly exported. 
  // 1.1  This class is a SINGLETON: - We will create a public method which will return a static reference to an already created object
  //                                 - The c-tor will be private
  // 
  // 2. A method will be provided for the framework user to assign his concrete implementation of an ApplicationModel
  //     - setApplicationModel(IApplicationModel*) : void
  // 2.1  We will store the received application model in a member variable, and we make sure that the scenes the transient data 
  //      and the initial scene are defined

  // 3. We create the start method which will received as arguments:
  //          - the name of our application
  //          - the width and the height of the window
  // 3.1 We create a QMainWindow variable hold in an unique_ptr implementation
  // 3.2 We set the main window title: setWindowTitle(..)
  // 3.3 We resize the main window with your desired values
  // 3.4 We create the scene machine 
  //
  //    Don't forget the d-tor
}
