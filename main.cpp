#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    //biuld map
    //string name
    //int age
    map <string,int> test ={
          		{"sina",12}
	        	,{"soroosh",21}};
   //insert
   test.insert(pair<string,int>("mohammad",31));
   //emplace -> insert only not exist key                                                      
   test.emplace("golam", 1);
   test.emplace("sina",14);

   //find -> search by key
   map<string,int>::iterator it = test.find("soroosh");
   //update age soroosh
   it -> second = 22;
   cout<< "find age soroosh: " << it -> second  << endl;

   //print all of element
   for(map<string,int>::iterator i=test.begin() ; i != test.end() ; i++)
   {
	cout<< i->first << " = "  << i->second << endl;
   } 
   //at
   cout << "at in map :" << test.at("sina") << endl;
   //count
   if(test.count("sina") == true)
   {
	cout << "this map is existence" << endl;
   } 
   //size befor clear
   cout << "size befor clear :" << test.size() << endl;
   //clear
   test.clear();
   //size after clear
   cout << "size after clear :" << test.size() << endl; 
}
