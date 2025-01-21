bool isBinary(string str){
    int n=str.size();
   for(int i=0;i<n;i++){
       if(str[i]=='0' || str[i]=='1'){
           continue;
       }
       else{
        return false;
       }    
   }
   return true;
}