#pragma once

namespace galileo
{
	/*
		ISCENE: THE ABSTRACT REPRESENTATION OF A SCENE. 
		IT'S MAIN ROLE IS TO PROVIDE	SUPPORT AND GUIDANCE FOR CONCRETE SCENES IMPLEMENTATION.
	*/

	// 1. Create IScene class. This class will be used in external dlls, 
	//    we need to make sure it's properly exported. 
	// I allready prepared a solution for this. Take a look in global.h file

	// 2. A Scene has to have a name. We are going to store the name in a std::string member
	//    The constructor definition of the Scene class will receive the name
	//    The name can be interrogated  via a getSceneName() : std::string  method

	// 3. Because this is an abstract class that will be later used for concrete Scene definition
	//    We are going to have some pure virtual methods
  //						- createScene() : void
	//            - release() : void

	// 4. In order to have the possibility to interact with the UI we need to have a reference 
	//    to an object which has the power to modify the user interface. 
	//    Because we whant to make Qt application, in our case that object will be a QMainWindow
	//    4.1  Create a QMainWindow member variable, that will be stored in an unique_ptr
	//    4.2  We need to have a way to populate the member variable
	//         Create a method that will populate our QMainWindow member. 
	//         Let's call it setMainWindow(std::unique_ptr<QMainWindow>)
	//    4.3  We need to have a way to interrogate our main window member(to steal it)
	//           -  getMainWindow() : std::unique_ptr<QMainWindow>
	//    4.4  At the end we whant to show the main window. For this we need to create another 
	//				method:
	//					 -  show() : void -> { call the main window show method }

	// 5. To transport data from one scene to another we use a more complex structure
	//    5.1  Create a map member variable that will hold as a key a string  and as value
	//         we will use a boost:any object type.  We can call this structure a TransientDataCollection
	//    5.2  We need a way to populate this complex structure => create a setter
	//				   -  setTransientData(std::map<const std::string, const boost::any>) : void
	//    5.3  And a getter
	//           -  getTransientDataCollection() : std::map<const std::string, const boost::any>

	// 6. From inside a scene we need to have a way of announcing that we want to change your application 
	//    to another scene. To do this we can use a QT signal where we will specify the destination scene:
	//      -  SceneChange(const std::string) : void 
	//    Prerequisites:
	//      -  IScene should derive from QObject
	//      -  Q_OBJECT define should be present at the beginning of the class

	// 7. And finally we need a virtual destructor

}
