#include "logging.hpp"

namespace one_two {
namespace debug {

void LogInfo(const String& message) {
  Serial.println("[INFO] " + message);
}

}  // namespace debug
}  // namespace one_two
