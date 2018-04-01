//indexOf: check if string source[] contains string target[]
//sourceLen: the length of string source[]
//targetLen: the length of string target[]
+ int i = -1 * targetLen
- while (indexOf(source, 0, sourceLen, target, targetLen) < 0) {
+ while(i++ < 0 || indexOf(source, i, sourceLen, target, targetLen) {
	  //append another character; try again
	  source[sourceLen++] = getchar();
  }