 // different design
 #include <iostream>
 #include <string>
 using namespace std;
 string version1(const string & s1, const string & s2);
 const string & version2(string & s1, const string & s2); // has side effect
 const string & version3(string & s1, const string & s2); // bad design

 int main()
 {
     string input;
     string copy;
     string result;

     cout << "Enter a string: ";
     getline(cin, input);
     copy = input;
     cout << "Your string as entered: " << input << endl;
     result =  version1(input, "***");
     cout << "Your string enhancedd: " << result << endl;
     cout << "Your original string: " << input << endl;

     result = version2(input, "###");
     cout << "Your string enhanced: " << result << endl;
     cout << "Your original string: " << input << endl;

     cout << "Resetting original string." << endl;
     input = copy;
     result = version3(input, "@@@");
     cout << "Your string enhanced: " << result << endl;
     cout << "Your original string: " << input << endl;

     return 0;

 }

 string version1(const string & s1, const string & s2)
 {
     string temp;

     temp = s2 + s1 + s2;
     return temp; // returning temp as a reference won’t work the contents of temp will be copied to a temporary
                  //return location.Then, in main() , the contents of the return location are copied to the
                   //string named result.
 }
 const string & version2(string & s1, const string & s2)
 {
     s1 = s2 + s1 + s2;
     // safe to return reference passed to function
     return s1;
 }
 const string & version3(string & s1, const string & s2)
 {
     string temp;

     temp = s2 + s1 + s2;
     // unsafe to return reference to a local variable
     return temp;
 }