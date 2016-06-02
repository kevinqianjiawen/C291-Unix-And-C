
char * substring(char * string, char * sub){
  while(*string){
    if(! strncmp(string, sub, strlen(sub))){
      return string;
    }
    string++;
  }
  return (null);
}
