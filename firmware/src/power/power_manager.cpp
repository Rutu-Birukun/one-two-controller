#include "power_manager.hpp"

#include "../debug/logging.hpp"

namespace one_two {
namespace power {

void PowerManager::Initialize() {
  debug::LogInfo("Initializing power monitoring");
}

bool PowerManager::IsBatteryCharging() const {
  return false;
}

float PowerManager::GetBatteryVoltage() const {
  return 3.7f;
}

}  // namespace power
}  // namespace one_two
