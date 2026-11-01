#include "storage_manager.hpp"

#include "../debug/logging.hpp"

namespace one_two {
namespace storage {

void StorageManager::Initialize() {
  debug::LogInfo("Initializing storage subsystem");
}

void StorageManager::ListMedia() {
  debug::LogInfo("Enumerating media files");
}

}  // namespace storage
}  // namespace one_two
