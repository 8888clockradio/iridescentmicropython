%% DO NOT EDIT this file manually; it was automatically
%% generated from `Documentation/snippets/new/`.
%%
%% Make any changes in `Documentation/snippets/new/`,
%% then run `scripts/auxiliar/makelsr.pl --new`.
%%
%% This file is in the public domain.
%%
%% Note: this file works from version 2.23.13.

\version "2.23.13"

\header {
  lsrtags = "pitches, specific-notation"

  texidoc = "
Using property @code{NoteCollision.fa-merge-direction}, the
direction of @q{fa} shape note heads (@q{fa}, @q{faThin}, etc.)
can be controlled independently of the stem direction if two
voices with the same pitch and different stem directions are
merged.  If this property is not set, the @q{down} glyph variant
is used.
"

  doctitle = "Direction of merged 'fa' shape note heads"
} % begin verbatim


{
  \clef bass

  << { \aikenHeads
       f2
       \override Staff.NoteCollision.fa-merge-direction = #UP
       f2 }
  \\ { \aikenHeads
       f2
       f2 }
  >>
}
