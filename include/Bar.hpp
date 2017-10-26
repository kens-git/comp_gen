#pragma once

#include <vector>

#include "NoteEvent.hpp"

using std::vector;


class Bar {
    public:
        Bar();

        float getLength();
        void addNote(Note note, float duration);

    private:
        vector<NoteEvent> mNoteEvents;
};
