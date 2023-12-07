//https://github.com/KarrieB26/ZyLab-28.15-Playlist
//Karrie Butcher
//Jordan Bridges 

#include "PlaylistNode.h"
void ExecuteMenu(char option, const string& title, Playlist& list);
void PrintMenu(string title);


int main(){
   string plTitle;
   cout << "Enter playlist's title:\n";
   getline(cin, plTitle);
   
   PrintMenu(plTitle);
   
}

