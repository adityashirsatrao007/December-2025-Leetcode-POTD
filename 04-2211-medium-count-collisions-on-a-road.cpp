class Solution {
public:
    int countCollisions(string directions) {
        
        bool flag = false;
        int count =0;
        int ans =0;
        for(int i=0;i<directions.size();i++){
            if(directions[i]=='R'){
                count++;
            }else if(directions[i]=='L'){
                if(flag && count==0){
                    ans+=1;
                }else if(count>0){
                    ans+=(count+1);
                    count=0;
                    flag = true;
                }
            }else{
                flag = true;
                if(count>0){
                    ans+=count;
                    count=0;
                }
            }

           
        }
         return ans;
    }
};
