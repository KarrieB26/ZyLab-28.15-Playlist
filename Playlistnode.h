#ifndef POLYLIST_H
#define POLYLIST_H
#include <iostream>
#include <string>
using namespace std;

class PlaylistNode{
public:
   PlaylistNode();
   PlaylistNode(string id, string songname, string artist, int length);
   
   string GetID();
   string GetSongName();
   string GetArtistName();
   int GetSongLength();
   PlaylistNode* GetNext();
   
   void InsertAfter(PlaylistNode* ptr);
   void SetNext(PlaylistNode* ptr);
   
   void PrintPlaylistNode();

private:
   string uniqueID;
   string songName;
   string artistName;
   int songLength;
   PlaylistNode* nextNodePtr;
};


class Playlist{
private:
   PlaylistNode *head;
   PlaylistNode *tail;

public:
   Playlist();
   void AddSong(string id, string songname, string artistname, int length);
   bool RemoveSong(string id);
   void PrintList();
   bool ChangePosition(int oldPos, int newPos);
   void SongsByArtist(string artist);
   int TotalTime();
};
#endif
