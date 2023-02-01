#include <iostream>


using namespace std;

int main()
{
    // Variable Declaration
    char medal;
    int score = 0;
    
    // Get User Input
    cout << "Enter Medal: ";
    cin >> medal;
    
    // Complete the Switch Block Below
    // If Medal = 
    //  G/g -> Score = 3 
    //  S/s -> Score = 2 
    //  B/b -> Score = 1 
    
    switch(medal)
    {
        // Gold Medal
        case 'G':
        case 'g':   
        
        
        // Silver
        case 'S':
        case 's':   
        
        
        // Bronze
        case 'B':
        case 'b':   
        
        default : cout << "Invalid Input" << endl; break; 
        
    }
    
    
    
    // Display Score
    cout << "Score:\t" << score << endl;
    
    return 0;
}