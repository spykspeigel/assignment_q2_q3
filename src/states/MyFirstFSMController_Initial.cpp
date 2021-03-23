#include "MyFirstFSMController_Initial.h"

#include "../MyFirstFSMController.h"

void MyFirstFSMController_Initial::configure(const mc_rtc::Configuration & config)
{
}

void MyFirstFSMController_Initial::start(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<MyFirstFSMController &>(ctl_);
}

bool MyFirstFSMController_Initial::run(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<MyFirstFSMController &>(ctl_);
  output("OK");
  return true;
}

void MyFirstFSMController_Initial::teardown(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<MyFirstFSMController &>(ctl_);
}

EXPORT_SINGLE_STATE("MyFirstFSMController_Initial", MyFirstFSMController_Initial)
