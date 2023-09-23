class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        map<char,int>info;
        int i;
        for(i=0;i<releaseTimes.size();i++)
        {
            if(i==0)
                {info.insert({keysPressed[i],(releaseTimes[i]-0)});}

            else if(info.count(keysPressed[i]))
            {
                info[keysPressed[i]]=max(releaseTimes[i]-releaseTimes[i-1],info.at(keysPressed[i]));
            }
            else
            {info.insert({keysPressed[i],(releaseTimes[i]-releaseTimes[i-1])});}
        }
        int max=-1;
        char ch;
        for (auto i:info)
        {
            if(i.second>=max && int(i.first)>int(ch)) 
            {
                ch=i.first;
                max=i.second;
            }
        }
        return ch;
    }
};