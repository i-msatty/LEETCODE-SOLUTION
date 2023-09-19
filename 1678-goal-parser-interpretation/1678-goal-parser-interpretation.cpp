class Solution {
public:
string ch;
int len,i;
    string interpret(string command) {
        len=command.length();
        for(i=0;i<len;i++){
            if(command[i]=='G')
            {
                ch+='G';
            }
            else if(command[i]=='(' && command[i+1]==')')
            {
                i+=1;
                ch+='o';
            }
            else  if(command[i]=='(' && command[i+1]=='a')
            {  
                i+=2;
                ch+="al";
            }
        }
        return ch;
    }
};