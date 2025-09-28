#include <bits/stdc++.h> 

using namespace std;


void freq_check(string str)
{

  unordered_map<char, int> freq ;
  for(char ch :str)
  {
    freq[ch]++;
  }

  for(auto pair :freq)
  {
    cout<<" '"<<pair.first <<pair.second<<endl;
  }
}



int main()
{
 string str =" hello  world ";

  freq_check( str);
  

}