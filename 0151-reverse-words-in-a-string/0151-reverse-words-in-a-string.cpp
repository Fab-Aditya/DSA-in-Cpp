class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        int i=0,j=0;
while(j<n){
if(s[j]!=' ')j++;
else{
    
  int len=j-1; 
    while(i<len){
        swap(s[i],s[len]);
        i++;
        len--;
    }

i=j;
while(i<n && s[i]==' '){
    i++;
    j++;
}
}
}

   int  len=j-1; 
    while(i<len){
        swap(s[i],s[len]);
        i++;
        len--;
    }
string t="";
for( char ch:s){
    if(ch==' '){
        if(t.empty()) {
        continue;
        }
         if( t.back()==' '){
            continue;
         }
        
    }
    t+=ch;
}
while(!t.empty() && t.back()==' '){
    t.pop_back();
}

     return t; 
        
    }
};