#include "system_manager.hpp"

#include "../debug/logging.hpp"

namespace one_two {
namespace boot {

void SystemManager::Initialize() {
  debug::LogInfo("Initializing system resources");
}

void SystemManager::RunSelfTest() {
  debug::LogInfo("Running system self-test");
}

}  // namespace boot
}  // namespace one_two
