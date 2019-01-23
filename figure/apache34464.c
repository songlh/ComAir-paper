//indexOf: check if string src[] contains string tgt[]
//srcLen: the length of string src[]
//tgtLen: the length of string tgt[]
+ int i = -1 * tgtLen
- while(indexOf(src, 0, srcLen, tgt, tgtLen) < 0) {
+ while(i++ < 0|| indexOf(src, i, srcLen, tgt, tgtLen) {
	  //append another character; try again
	  src[srcLen++] = getchar();
  }