#include "Bar.hpp"

float Bar::getLength() {
    for (NoteEvent event : mNoteEvents) {

    }
}

void Bar::addNote(Note note, float duration) {
    mNoteEvents.push_back(NoteEvent(note, duration));
}
