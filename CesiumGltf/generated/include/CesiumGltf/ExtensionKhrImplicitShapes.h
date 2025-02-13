// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <CesiumGltf/Library.h>
#include <CesiumGltf/Shape.h>
#include <CesiumUtility/ExtensibleObject.h>

#include <vector>

namespace CesiumGltf {
/**
 * @brief Top level implicit shapes.
 */
struct CESIUMGLTF_API ExtensionKhrImplicitShapes final
    : public CesiumUtility::ExtensibleObject {
  /**
   * @brief The original name of this type.
   */
  static constexpr const char* TypeName = "ExtensionKhrImplicitShapes";
  /** @brief The official name of the extension. This should be the same as its
   * key in the `extensions` object. */
  static constexpr const char* ExtensionName = "KHR_implicit_shapes";

  /**
   * @brief An array of shape descriptions.
   */
  std::vector<CesiumGltf::Shape> shapes;

  /**
   * @brief Calculates the size in bytes of this object, including the contents
   * of all collections, pointers, and strings. This will NOT include the size
   * of any extensions attached to the object. Calling this method may be slow
   * as it requires traversing the object's entire structure.
   */
  int64_t getSizeBytes() const {
    int64_t accum = 0;
    accum += int64_t(sizeof(ExtensionKhrImplicitShapes));
    accum += CesiumUtility::ExtensibleObject::getSizeBytes() -
             int64_t(sizeof(CesiumUtility::ExtensibleObject));
    accum += int64_t(sizeof(CesiumGltf::Shape) * this->shapes.capacity());
    for (const CesiumGltf::Shape& value : this->shapes) {
      accum += value.getSizeBytes() - int64_t(sizeof(CesiumGltf::Shape));
    }
    return accum;
  }
};
} // namespace CesiumGltf
