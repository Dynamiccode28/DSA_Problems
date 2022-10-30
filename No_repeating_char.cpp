class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       
       unordered_map<char,int>m;
       for(auto i:S){
           m[i]++;
       }
       for(auto i:S){
           if(m[i]==1){
               return i;
               break;
           }
       }
       return '$';
    }

};