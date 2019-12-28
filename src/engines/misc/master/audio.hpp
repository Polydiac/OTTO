#pragma once

#include "master.hpp"

namespace otto::engines::master {

  using namespace core;

  struct Audio {
    Audio() noexcept;
    audio::ProcessData<2> process(audio::ProcessData<2>) noexcept;

    void action(itc::prop_change<&Props::volume>, float v) noexcept;
    void action(itc::prop_change<&Props::tempo>, int t) noexcept;

  private:
    float volume_square_ = 0;
    float tempo_ = 120;
    
  };
} // namespace otto::engines::master