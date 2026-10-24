//https://leetcode.com/problems/simplify-path/description/
class Solution {
public:
    string simplifyPath(string path) {
        vector<string> pt;
        string current = "";
        path.push_back('/');
        for(int i=0;i<path.size();i++){
            if(path[i]=='/'){
                if(current == ".."){
                    if(!pt.empty()){
                        //cout<<"eliminador:"<<pt.back();
                        pt.pop_back();
                    }
                }else if(current !="" && current != "."){
                    pt.push_back(current);
                    cout<<current;
                }
                current="";
            }else{
                current += path[i];
            }
            
        }

        current="";

        for(int i=0;i<pt.size();i++){
            current+="/"+pt[i];
            //cout<<pt[i];
        }

        if(pt.empty())
            current="/";
       
        return current;
    }
};
