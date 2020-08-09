#pragma once

namespace galileo
{
  /*
    THE MODEL OF OUR APPLICATION IS MADE OF VARIOUS SCENES AND THE DATA THAT IS TRANSPORTED
    BETWEEN THEM. IAPPLICATIONMODEL IS USED TO DEFINE THE OBJECTS FROM WHICH AN APPLICATION 
    IS CONSTRUCTED, IN OUR CASE: SCENES AND TRANSIENT DATA
  */

  // 1. Create IApplicationModel class. This class will be used in external dlls, 
  //    we need to make sure it's properly exported. 
  //    1.1 The application model is actually a big collection of scenes and transient data.
  //        We need to store them into something. Because we are talking about collections 
  //        of object which should be identified via a key we can safely use maps.
  //          - create a map member variable of strings and IScene* which will store application Scenes
  //          - the application model will also store the transient data. We use the same member structure as before
  //    1.2 Create getter for the 2 member objects that we just created
  //    1.3 We also need to store the initial scene of the application name. We will use a string member variable
  //        And we also need a getter for the initial scene

  // 2. Because this is an abstract representation for an application model. 
  //    We need to provide guidance for the concrete implementation. What we actually need from 
  //    a framework user is to provide us the model of his application(scenes and transient data).
  //    To guide him/her in this direction we will use 3 pure virtual methods:
  //      - defineScene() : void
  //      - defineInitialScene() : void
  //      - defineTransientData() : void
  //
  //    Don't forget the d-tor
}
