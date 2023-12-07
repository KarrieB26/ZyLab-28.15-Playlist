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

void PrintMenu(string title){
   Playlist list;
   string id;
   string sname;
   string aname;
   int length;
   int oldPos;
   int newPos;
   char choice;

   while (true){
       cout << endl << title << " PLAYLIST MENU" << endl;
       cout << "a - Add song" << endl;
       cout << "d - Remove song" << endl;
       cout << "c - Change position of song" << endl;
       cout << "s - Output songs by specific artist" << endl;
       cout << "t - Output total time of playlist (in seconds)" << endl;
       cout << "o - Output full playlist" << endl;
       cout << "q - Quit" << endl << endl;

       cout << "Choose an option:\n";
       cin >> choice;
       cin.ignore(); //flush newline

       if (choice == 'q' || choice == 'Q'){
           exit(1);
       }
       else if (choice == 'a' || choice == 'A'){
          
           cout << "ADD SONG" << endl;
           cout << "Enter song's unique ID:\n";
           cin >> id;
           cin.ignore();//ignore newline
           cout << "Enter song's name:\n";
           getline(cin, sname);
           cout << "Enter artist's name:\n";
           getline(cin, aname);
           cout << "Enter song's length (in seconds):\n";
           cin >> length;
           list.AddSong(id, sname, aname, length);
       }
       else if (choice == 'd' || choice == 'D'){
          
           cout << "REMOVE SONG" << endl;
           cout << "Enter song's unique ID:\n";
           cin >> id;
           cout << list.RemoveSong(id) << ".";
      
       }
       else if (choice == 'c' || choice == 'C'){
          
           cout << "\nCHANGE POSITION OF SONG" << endl;
           cout << "Enter song's current position:\n";
           cin >> oldPos;
           cout << "Enter new position for song:\n";
           cin >> newPos;
           list.ChangePosition(oldPos, newPos);
       }
       else if (choice == 's' || choice == 'S'){
          
           cout << "\nOUTPUT SONGS BY SPECIFIC ARTIST" << endl;
           cout << "Enter artist's name:\n";
           getline(cin, aname);          
           list.SongsByArtist(aname);
       }
       else if (choice == 't' || choice == 'T'){
          
           cout << "\nOUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)" << endl;
           cout << "Total time: " << list.TotalTime() << " seconds" << endl;
       }
       else if (choice == 'o' || choice == 'O'){
          
           cout << title << " - OUTPUT FULL PLAYLIST";
           list.PrintList();
       }
       else{
          
           cout << "Invalid menu choice! Please try again." << endl;
       }
   }
}

