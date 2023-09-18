class Solution {
public:
    int count=0,count2=0;
    int mostWordsFound(vector<string>& sentences) {
        for(int i=0;i<sentences.size();i++)
        { count=0;
            for(int j=0;sentences[i][j]!='\0';j++)
            {      
                
                if(sentences[i][j]==' ')
                    count++;
            }
            count+=1;
            if(count>count2)
            {
                count2=count;
            }
        }
        return count2;
    }
};