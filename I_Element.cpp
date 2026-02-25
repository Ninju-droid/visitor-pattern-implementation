#include "header.h"

void concrete_element_one::accept(Ivisitor* v) { v->visit(this); }
void concrete_element_two::accept(Ivisitor* v) { v->visit(this); }
void concrete_element_three::accept(Ivisitor* v) { v->visit(this); }
void concrete_element_four::accept(Ivisitor* v) { v->visit(this); }