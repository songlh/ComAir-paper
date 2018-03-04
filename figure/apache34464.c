//indexOf: check if string source[] contains target[]
//sourceLen: the length of string source[]
//targetLen: the length of string target[]
while (indexOf(source, sourceLen, target, targetLen) < 0) {
	//append another character; try again
	source[sourceLen ++] = getchar();
}