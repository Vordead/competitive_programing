#include <iostream>

int main()
{
    int n;
    std::cin>>n;
    std::string s;
    std::cin>>s;
    int ans=0;
    for(int i=0 ; i<s.size()-1 ; i++)
        {
            if( s[i+1]==s[i] )
            ans++;
        }
    std::cout<<ans;
    return 0;
}
