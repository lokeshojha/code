
class Solution {
public:
    bool helper(vector<int>& v , int a, int  b , int c , int d , int i){
        if(i==v.size()){
            if(a==b && b==c && c==d && a==0 ){
               return true;
            }
        return false;
        }
        
     if(a-v[i] >=0){
          if (helper(v,a-v[i],b,c,d,i+1))
            return true;
     }
       if (b-v[i]>=0) {
           if (helper(v,a, b-v[i],c,d,i+1))
            return true;
       }
        if(c-v[i]>=0){
            if (helper(v,a, b,c-v[i],d,i+1))
            return true;
        }
         if(d-v[i] >=0){
             if (helper(v,a, b,c,d-v[i],i+1))
            return true;
         }
         return false;
    }
    bool makesquare(vector<int>& v) {
        int a=0, b=0 ,c=0, d=0;
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
        if(sum%4!=0)
            return false;
        a=sum/4;
        b=sum/4;
        c=sum/4;
        d=sum/4;
        
        return helper(v, a, b , c , d , 0);
    }
};
