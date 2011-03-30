#include "c_datastructure.h"
CLIB_GRAPH_PTR 
new_c_graph(CLIB_DESTROY fn_ed, CLIB_DESTROY fn_vd,CLIB_COMPARE fn_c, CLIB_BOOL type) {
    CLIB_GRAPH_PTR g = (CLIB_GRAPH_PTR)clib_malloc(sizeof(CLIB_GRAPH));
    g->graph         = new_c_rb( fn_ed, fn_vd, fn_c ,CLIB_GRAPH_TYPE);
    g->is_directed   = type;
    return g;
}
void           
delete_c_graph() {
}
void 
add_edge_c_graph ( CLIB_GRAPH_PTR g, CLIB_TYPE v1, CLIB_TYPE v2) {
}

