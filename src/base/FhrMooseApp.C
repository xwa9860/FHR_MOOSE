#include "FhrMooseApp.h"
#include "Moose.h"
#include "AppFactory.h"
#include "ModulesApp.h"

template<>
InputParameters validParams<FhrMooseApp>()
{
  InputParameters params = validParams<MooseApp>();
  return params;
}

FhrMooseApp::FhrMooseApp(InputParameters parameters) :
    MooseApp(parameters)
{

  Moose::registerObjects(_factory);
  ModulesApp::registerObjects(_factory);
  FhrMooseApp::registerObjects(_factory);

  Moose::associateSyntax(_syntax, _action_factory);
  ModulesApp::associateSyntax(_syntax, _action_factory);
  FhrMooseApp::associateSyntax(_syntax, _action_factory);
}

FhrMooseApp::~FhrMooseApp()
{
}

void
FhrMooseApp::registerApps()
{
  registerApp(FhrMooseApp);
}

void
FhrMooseApp::registerObjects(Factory & factory)
{
}

void
FhrMooseApp::associateSyntax(Syntax & syntax, ActionFactory & action_factory)
{
}
