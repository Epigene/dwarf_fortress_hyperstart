/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTFIG_ENTITY_LINK_SQUADST_H
#define DF_HISTFIG_ENTITY_LINK_SQUADST_H
#ifndef DF_HISTFIG_ENTITY_LINK_H
#include "histfig_entity_link.h"
#endif
namespace df {
  struct DFHACK_EXPORT histfig_entity_link_squadst : histfig_entity_link {
    int32_t squad_id;
    int32_t squad_position;
    int32_t start_year;
    static virtual_identity _identity;
  protected:
    histfig_entity_link_squadst(virtual_identity *_id = &histfig_entity_link_squadst::_identity);
    friend void *df::allocator_fn<histfig_entity_link_squadst>(void*,const void*);
  };
}
#endif
