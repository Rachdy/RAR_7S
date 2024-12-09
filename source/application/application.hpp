/*
  =============================================
  application namespace should manange/controll
  everything but from higher level
  =============================================
*/

#ifndef APPLICATION_HPP
#define APPLICATION_HPP

namespace application {

  int8_t create_console(); // for console app
  int8_t create_window(); // for gui app

  // to setup application needed before it start running
  bool initilize();

  // application main loop
  void run();

  // cleaning/free-memory after exit
  bool cleanup();

}
// end of namespace application

#endif

