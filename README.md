# Text Editor

This text editor is created using FTLK GC++ UI toolkit. We want our text editor to achieve the following functions:

1. Provide a menubar/menus for all functions.
2. Edit a single text file, possibly with multiple views.
3. Load from a file.
4. Save to a file.
5. Cut/copy/delete/paste functions.
6. Search and replace functions.
7. Keep track of when the file has been changed.


## Installation
1. Install the latest release.
2. Install the latest release of FTLK.
3. In the source directory, run
```
ftlk-config --compile editor.cpp
```
4. Then, in the same directory, run
```
./editor
```