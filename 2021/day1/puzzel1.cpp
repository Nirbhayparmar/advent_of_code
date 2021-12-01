#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
ifstream infile("input.txt");

int main() {
int a;
int count=0;
vector<int> data;

while (infile >> a)
{
    data.push_back(a);
}

for(int i=0;i<data.size()-1;i++)
{
  if(data[i+1]>data[i])
  {
    count++;
  }
}

cout<<count;
} 