/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_BUILDING_USE_TARGET_1ST_H
#define DF_GENERAL_REF_BUILDING_USE_TARGET_1ST_H
#ifndef DF_GENERAL_REF_BUILDING_H
#include "general_ref_building.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_building_use_target_1st : general_ref_building {
    static virtual_identity _identity;
  protected:
    general_ref_building_use_target_1st(virtual_identity *_id = &general_ref_building_use_target_1st::_identity);
    friend void *df::allocator_fn<general_ref_building_use_target_1st>(void*,const void*);
  };
}
#endif
