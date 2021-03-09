// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/Library.h"
#include "CesiumGltf/NamedObject.h"
#include <cstdint>

namespace CesiumGltf {
/**
 * @brief A texture and its sampler.
 */
struct CESIUMGLTF_API Texture final : public NamedObject {

  /**
   * @brief The index of the sampler used by this texture. When undefined, a
   * sampler with repeat wrapping and auto filtering should be used.
   */
  int32_t sampler = -1;

  /**
   * @brief The index of the image used by this texture. When undefined, it is
   * expected that an extension or other mechanism will supply an alternate
   * texture source, otherwise behavior is undefined.
   */
  int32_t source = -1;
};
} // namespace CesiumGltf