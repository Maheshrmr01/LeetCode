class Solution {
public:

    string finalString(string s)
    {
        string out="";
        for(char i : s)
        {
            if(i == 'i')
            {
                std::reverse(out.begin(), out.end());
            }
            else
            {
                out += i;
            }
        }
        return out;
    }
};
