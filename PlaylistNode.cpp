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
