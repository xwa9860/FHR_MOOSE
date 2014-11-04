#ifndef FHR_MOOSEAPP_H
#define FHR_MOOSEAPP_H

#include "MooseApp.h"

class FhrMooseApp;

template<>
InputParameters validParams<FhrMooseApp>();

class FhrMooseApp : public MooseApp
{
public:
  FhrMooseApp(const std::string & name, InputParameters parameters);
  virtual ~FhrMooseApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* FHR_MOOSEAPP_H */
