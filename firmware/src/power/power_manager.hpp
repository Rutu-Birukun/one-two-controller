#pragma once

namespace one_two {
namespace power {

class PowerManager {
 public:
  void Initialize();
  bool IsBatteryCharging() const;
  float GetBatteryVoltage() const;
};

}  // namespace power
}  // namespace one_two
