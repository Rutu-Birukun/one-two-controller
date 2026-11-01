#include "ui_manager.hpp"

#include "../debug/logging.hpp"

namespace one_two {
namespace ui {

void UiManager::Initialize() {
  debug::LogInfo("Initializing user interface");
}

void UiManager::PollInputs() {
  debug::LogInfo("Polling UI inputs");
}

}  // namespace ui
}  // namespace one_two
