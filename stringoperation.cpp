#include <iostream> 
#include <string> 
  
using namespace std; 
  
int main() 
{ 
    string str = "geeksforgeeks a computer science#omercaylan#justawaitit#toojusttoowaitit"; 
    char c = '#'; 
  	
    // Find first occurrence of 'g' 
    size_t found = str.find(c); 
    if (found != string::npos) 
        cout << "First occurrence is " << found << endl; 
  	char temp[found+1];
	unsigned char tt = str.copy(temp,found,0);
	  cout << "temp[i]=str[i] =  " << temp << endl;
    // Find next occurrence of 'g' 
    found = str.find(c, found+1); 
    if (found != string::npos) 
        cout << "Next occurrence is " << found << endl;
            found = str.find(c, found+2); 
    if (found != string::npos) 
        cout << "Next occurrence is " << found << endl;
        
  
    return 0; 
}
