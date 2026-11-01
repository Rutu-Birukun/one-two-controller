#include "audio_manager.hpp"

#include "../debug/logging.hpp"

namespace one_two {
namespace audio {

void AudioManager::Initialize() {
  debug::LogInfo("Initializing audio subsystem");
}

void AudioManager::SetVolume(int level) {
  debug::LogInfo("Audio volume set to: " + String(level));
}

void AudioManager::ToggleMute() {
  debug::LogInfo("Audio mute toggled");
}

void AudioManager::Play() {
  debug::LogInfo("Playback started");
}

void AudioManager::Pause() {
  debug::LogInfo("Playback paused");
}

}  // namespace audio
}  // namespace one_two
