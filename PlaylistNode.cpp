#include "PlaylistNode.h"

// Default constructor implementation
PlaylistNode::PlaylistNode(){
   uniqueID = "none";
   songName = "none";
   artistName = "none";
   songLength = 0;
   nextNodePtr = nullptr;
}

// Parameterized constructor implementation
PlaylistNode::PlaylistNode(string id, string songname, string artist, int length){
   uniqueID = id;
   songName = songname;
   artistName = artist;
   songLength = length;
   nextNodePtr = nullptr;
}

// InsertAfter function implementation
void PlaylistNode::InsertAfter(PlaylistNode* ptr){
   this->SetNext(ptr->GetNext());
   ptr->SetNext(this);
}

// SetNext function implementation
void PlaylistNode::SetNext(PlaylistNode* ptr){
   nextNodePtr = ptr;
}

// GetID function implementation
string PlaylistNode::GetID(){
   return uniqueID;
}

// GetSongName function implementation
string PlaylistNode::GetSongName(){
   return songName;
}

// GetArtistName function implementation
string PlaylistNode::GetArtistName(){
   return artistName;
}

// GetSongLength function implementation
int PlaylistNode::GetSongLength(){
   return songLength;
}

// GetNext function implementation
PlaylistNode* PlaylistNode::GetNext(){
   return nextNodePtr;
}

// PrintPlaylistNode function implementation
void PlaylistNode::PrintPlaylistNode(){
   cout << "Unique ID: " << uniqueID << endl;
   cout << "Song Name: " << songName << endl;
   cout << "Artist Name: " << artistName << endl;
   cout << "Song Length (in seconds): " << songLength << endl;
}


// Default constructor implementation
Playlist::Playlist(){
   head = tail = 0;
}

// AddSong function implementation
void Playlist::AddSong(string id, string songname, string artistname, int length){
   PlaylistNode* n = new PlaylistNode(id, songname, artistname, length);
   if (head == 0){
       head = tail = n;
   }
   else{
       n->InsertAfter(tail);
       tail = n;
      }
   }

