/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_DOORST_H
#define DF_ITEM_DOORST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_doorst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_doorst(virtual_identity *_id = &item_doorst::_identity);
    friend void *df::allocator_fn<item_doorst>(void*,const void*);
  };
}
#endif
