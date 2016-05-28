char *mystrncpy(char *src, char *dst, int size){
     
  size = 0;
     while(*(src+i) != '\0' && i <= size){
     	*(dst+i)=*(src+i);
	i++;
	size++;
     }
     *(dst+i)='\o';
     return dst;
}
