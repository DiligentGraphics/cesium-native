// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <CesiumGltf/Library.h>
#include <CesiumUtility/ExtensibleObject.h>

#include <vector>

namespace CesiumGltf {
/**
 * @brief Parameters describing a box shape.
 */
struct CESIUMGLTF_API Box final : public CesiumUtility::ExtensibleObject {
  /**
   * @brief The original name of this type.
   */
  static constexpr const char* TypeName = "Box";

  /**
   * @brief The extents of the box in each axis in local space.
   */
  std::vector<double> size = {1, 1, 1};

  /**
   * @brief Calculates the size in bytes of this object, including the contents
   * of all collections, pointers, and strings. This will NOT include the size
   * of any extensions attached to the object. Calling this method may be slow
   * as it requires traversing the object's entire structure.
   */
  int64_t getSizeBytes() const {
    int64_t accum = 0;
    accum += int64_t(sizeof(Box));
    accum += CesiumUtility::ExtensibleObject::getSizeBytes() -
             int64_t(sizeof(CesiumUtility::ExtensibleObject));
    accum += int64_t(sizeof(double) * this->size.capacity());
    return accum;
  }
};
} // namespace CesiumGltf
