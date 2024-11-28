/*
  =============================================
  application namespace should manange/controll
  everything but from higher level
  =============================================
*/

#ifndef APPLICATION_HPP
#define APPLICATION_HPP

namespace application {

  // to setup application needed before it start running
  bool initilize();

  // application main loop
  void run();

  // cleaning/free-memory after exit
  bool cleanup();

}
// end of namespace application

#endif

