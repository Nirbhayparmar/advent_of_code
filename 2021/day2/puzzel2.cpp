#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
ifstream infile("input.txt");

int main() {
string a;
int b;
int forwardCount=0;
int depthCount=0;
int aim=0;

vector<int> data;
vector<string> direction;

while (infile >> a >> b)
{
    direction.push_back(a);
    data.push_back(b);
}

for(int i=0;i<data.size();i++)
{
  if(direction[i]=="forward")
  {
    forwardCount+=data[i];
    depthCount+=aim*data[i];
  }
  else
  {
    if(direction[i]=="up")
    {
      aim-=data[i];
      // depthCount-=data[i];
    }
    else
    {
      aim+=data[i];
      // depthCount+=data[i];
    }
  }
  
}

cout<<depthCount*forwardCount<<endl;
cout<<"depth- "<<depthCount<<endl;
cout<<"forward- "<<forwardCount<<endl;
cout<<"aim- "<<aim<<endl;
} 