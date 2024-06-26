// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/ExtensionMeshPrimitiveKhrMaterialsVariantsMappingsValue.h"
#include "CesiumGltf/Library.h"

#include <CesiumUtility/ExtensibleObject.h>

#include <vector>

namespace CesiumGltf {
/**
 * @brief KHR_materials_variants glTF Mesh Primitive Extension
 */
struct CESIUMGLTF_API ExtensionMeshPrimitiveKhrMaterialsVariants final
    : public CesiumUtility::ExtensibleObject {
  static inline constexpr const char* TypeName =
      "ExtensionMeshPrimitiveKhrMaterialsVariants";
  static inline constexpr const char* ExtensionName = "KHR_materials_variants";

  /**
   * @brief A list of material to variant mappings
   *
   * An array of object values that associate an indexed material to a set of
   * variants.
   */
  std::vector<
      CesiumGltf::ExtensionMeshPrimitiveKhrMaterialsVariantsMappingsValue>
      mappings;
};
} // namespace CesiumGltf
