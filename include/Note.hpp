// Note just holds the note name, NoteEvent holds the Note(s) and the duration

#pragma once

#include <string>

using std::string;

class Note {
    public:
        Note() = default;
        Note(const string& name) : mName(name) { }

        void setName(const string& name);
        string getName();

    private:
        string mName;
};
