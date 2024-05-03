#pragma once

#include "CesiumGltf/PropertyType.h"

#include <CesiumUtility/Assert.h>
#include <CesiumUtility/SpanHelper.h>

#include <gsl/span>

#include <cstddef>

namespace CesiumGltf {
static size_t getOffsetFromOffsetsBuffer(
    size_t index,
    const gsl::span<const std::byte>& offsetBuffer,
    PropertyComponentType offsetType) noexcept {
  switch (offsetType) {
  case PropertyComponentType::Uint8: {
    ASSERT(index < offsetBuffer.size() / sizeof(uint8_t));
    const uint8_t offset = *reinterpret_cast<const uint8_t*>(
        offsetBuffer.data() + index * sizeof(uint8_t));
    return static_cast<size_t>(offset);
  }
  case PropertyComponentType::Uint16: {
    ASSERT(index < offsetBuffer.size() / sizeof(uint16_t));
    const uint16_t offset = *reinterpret_cast<const uint16_t*>(
        offsetBuffer.data() + index * sizeof(uint16_t));
    return static_cast<size_t>(offset);
  }
  case PropertyComponentType::Uint32: {
    ASSERT(index < offsetBuffer.size() / sizeof(uint32_t));
    const uint32_t offset = *reinterpret_cast<const uint32_t*>(
        offsetBuffer.data() + index * sizeof(uint32_t));
    return static_cast<size_t>(offset);
  }
  case PropertyComponentType::Uint64: {
    ASSERT(index < offsetBuffer.size() / sizeof(uint64_t));
    const uint64_t offset = *reinterpret_cast<const uint64_t*>(
        offsetBuffer.data() + index * sizeof(uint64_t));
    return static_cast<size_t>(offset);
  }
  default:
    ASSERT(false && "Offset type is invalid");
    return 0;
  }
}
} // namespace CesiumGltf
