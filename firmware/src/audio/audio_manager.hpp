#pragma once

namespace one_two {
namespace audio {

class AudioManager {
 public:
  void Initialize();
  void SetVolume(int level);
  void ToggleMute();
  void Play();
  void Pause();
};

}  // namespace audio
}  // namespace one_two
