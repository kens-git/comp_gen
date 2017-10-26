// NoteEvent is used to give the same interface to both Notes and chords, because
// a Bar shouldn't have to differentiate between a single Note and a chord, just
// how long (the duration) the 'NoteEvent' is
//
// Note that (no pun intended) there is no 'Chord' class, but, a NoteEvent that holds
// multiple Notes is considered a chord

#pragma once

#include <vector>

#include "Note.hpp"

using std::vector;

class NoteEvent {
    public:
        NoteEvent() = default;
        NoteEvent(Note note, float duration) { mNotes.push_back(note); mDuration = duration; }
        NoteEvent(vector<Note> notes, float duration) : mNotes(notes), mDuration(duration) { }

        unsigned int getNumNotes() { return mNotes.size(); }
        vector<Note> getNotes() { return mNotes; }

    private:
        vector<Note> mNotes;
        float mDuration;
};
