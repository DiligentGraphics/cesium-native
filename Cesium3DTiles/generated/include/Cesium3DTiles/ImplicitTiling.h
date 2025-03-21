// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <Cesium3DTiles/Library.h>
#include <Cesium3DTiles/Subtrees.h>
#include <CesiumUtility/ExtensibleObject.h>

#include <cstdint>
#include <string>

namespace Cesium3DTiles {
/**
 * @brief This object allows a tile to be implicitly subdivided. Tile and
 * content availability and metadata is stored in subtrees which are referenced
 * externally.
 */
struct CESIUM3DTILES_API ImplicitTiling final
    : public CesiumUtility::ExtensibleObject {
  /**
   * @brief The original name of this type.
   */
  static constexpr const char* TypeName = "ImplicitTiling";

  /**
   * @brief Known values for A string describing the subdivision scheme used
   * within the tileset.
   */
  struct SubdivisionScheme {
    /** @brief `QUADTREE` */
    inline static const std::string QUADTREE = "QUADTREE";

    /** @brief `OCTREE` */
    inline static const std::string OCTREE = "OCTREE";
  };

  /**
   * @brief A string describing the subdivision scheme used within the tileset.
   *
   * Known values are defined in {@link SubdivisionScheme}.
   *
   */
  std::string subdivisionScheme = SubdivisionScheme::QUADTREE;

  /**
   * @brief The number of distinct levels in each subtree. For example, a
   * quadtree with `subtreeLevels = 2` will have subtrees with 5 nodes (one root
   * and 4 children).
   */
  int64_t subtreeLevels = int64_t();

  /**
   * @brief The numbers of the levels in the tree with available tiles.
   */
  int64_t availableLevels = int64_t();

  /**
   * @brief An object describing the location of subtree files.
   */
  Cesium3DTiles::Subtrees subtrees;

  /**
   * @brief Calculates the size in bytes of this object, including the contents
   * of all collections, pointers, and strings. This will NOT include the size
   * of any extensions attached to the object. Calling this method may be slow
   * as it requires traversing the object's entire structure.
   */
  int64_t getSizeBytes() const {
    int64_t accum = 0;
    accum += int64_t(sizeof(ImplicitTiling));
    accum += CesiumUtility::ExtensibleObject::getSizeBytes() -
             int64_t(sizeof(CesiumUtility::ExtensibleObject));
    accum += this->subtrees.getSizeBytes() -
             int64_t(sizeof(Cesium3DTiles::Subtrees));
    return accum;
  }
};
} // namespace Cesium3DTiles
