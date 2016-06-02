
int mystrcmp(char *s1, char *s2, int n){
  int counter = 0;
  int ret = 0;
  while((counter < n)&& (*(s1 + counter))&&(*(s2 + counter))){
    if(*(s1 + counter) != *(s2 + counter)){
      return (*(s1+counter) - *(s2+counter));
    }
    counter ++;
  }
  return (*(s1+counter)-*(s2+counter));
}


int mystrncmp(char *s1, char *s2, int n){
  n --;
  while((*s1)&&(*s2)&&(n)){
    if(*s1-*s2){
      break;
    }
    else{
      s1++;
      s2++;
      n--;
    }

  }
  return (*s1-*s2);
}
