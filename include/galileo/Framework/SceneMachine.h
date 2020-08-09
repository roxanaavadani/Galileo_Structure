#pragma once

namespace galileo
{
  /*
    SCENEMACHINE IS THE COMPONENT RESPONSIBLE FOR SCENE MANAGEMENT. ITS ROLE IS TO ACTIVATE 
    THE INITIAL SCENE, CHANGE THE CURRENT SCENE WHEN THIS IS REQUIRED AND MAKE SURE EVERY 
    RUNNING SCENE HAS ALL THE NEEDED INGREDIENTS
  */

  // 1. Create SceneMachine class. This class will use Qt slots:
  //    Prerequisites:
  //      -  SceneMachine should derive from QObject
  //      -  Q_OBJECT define should be present at the beginning of the class

  // 2. Create the SceneMachine c-tor that will recive
  //      -  the initial scene name
  //      -  the scene collection
  //      -  the transient data collection
  //      -  the unique main window
  //    Why we need all this information?
  //       a. we need the initial scene name to be able to determine what scene we are going 
  //          to activate first
  //       b. The?!?1  Is obvious why we need the scene collection
  //       c. We are going to pass the transient data collection from one active scene to another
  //       d. We need the main window to draw each active scene at a time
  //   

  // 3. We need to store each argument received in c-tor in member variables. We will use the ctor 
  //    initializer list for this
  //    3.1 Create member variables
  //    3.2 Modify c-tor initializer list
  //    
  // 4. As described above the scene machine(manager) is responsible to activate the next desired 
  //    active scene. In order to do this, we need to create an algorithm. Let's create this functinality 
  //    in a separate method named setActiveScene(stringName)
  //    4.1 We need a member variable in which we are going to store the current scene name
  //    4.1 Our algorithm should get the main window and the transient data informations from the current scene
  //    4.2 Once we have those informations we need to pass them to the next required active scene
  //    4.3 Before activating the next required active scene we need to make sure that we released the current scene
  //    4.4 Once we dealt with it, we can pass the main window and the transient data informations from the 
  //        current scene to the next one
  //    4.5 In order to properly activate the new scene we need to create it, draw it and finally show it
  //    4.6 We also have a special scenario when the current scene in empty. What then?
  //
  // 5. We need to make sure that we call the newly created algorithm when someone from inside a scene implementation 
  //    will required a scene change. A scene change from inside a Scene implemention can be required by using the SceneChange
  //    signal. he only thing that we need to do is to connect the signal from the Scene interface to a newly created slot 
  //    that will call scene machine algorithm
  //
  // 6. We still have one case with is not covered. We are not able to release the last activated scene. To do this we need to 
  //    make sure that wen the application is exiting we are gong to release our last active scene. 
  //    QT already provide a signal which we can use to determine when the application is about to exit: aboutToQuit(), 
  //    which is defined in QCoreApplication 
  // 