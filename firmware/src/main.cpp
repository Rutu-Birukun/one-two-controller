#include <Arduino.h>

#include "boot/system_manager.hpp"
#include "audio/audio_manager.hpp"
#include "ui/ui_manager.hpp"
#include "storage/storage_manager.hpp"
#include "power/power_manager.hpp"
#include "debug/logging.hpp"

namespace {
constexpr uint32_t kBootDelayMs = 500;
}

void setup() {
  Serial.begin(115200);
  delay(kBootDelayMs);

  one_two::debug::LogInfo("One Two Controller booting");

  one_two::boot::SystemManager systemManager;
  one_two::audio::AudioManager audioManager;
  one_two::ui::UiManager uiManager;
  one_two::storage::StorageManager storageManager;
  one_two::power::PowerManager powerManager;

  systemManager.Initialize();
  storageManager.Initialize();
  powerManager.Initialize();
  audioManager.Initialize();
  uiManager.Initialize();

  one_two::debug::LogInfo("System ready");
}

void loop() {
  // Placeholder runtime loop. Replace with actual state handling signals.
  delay(50);
}
