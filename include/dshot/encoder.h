#pragma once

#include <stdint.h>
#include <stdio.h>

#include "data.h"
#include "hardware/pio.h"

namespace DShot {

class Encoder {
public:
  Encoder(Type type = Type::Normal) : type(type) {}

  // Turn a command into a dshot packet
  uint16_t encode(uint16_t c);

private:
  const Type type;
};

} // end namespace DShot
