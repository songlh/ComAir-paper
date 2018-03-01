//items is an array containing all XML_NODEs
//nitems is the index for the input XML_NODE
uint xml_parent_tag(XML_NODE * items, uint nitems) {
  XML_NODE * p, * last = &items[nitems-1];
  uint level = items[nitems].level - 1; 
  //parent's level is one less than the input node
  for(p = last; p >= items; p--) {
    if(p->level == level && p->type == XML_NODE_TAG) {
      return p - items;
    }
  }
  return 0;
}