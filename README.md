# Dwarf Fortress Hyperstart

![Vanilla DF and phobeus graphic set comparison](comparison.gif?raw=true "Vanilla DF and phobeus graphic set comparison")

Hyperstart is an opinionated fork of the [Lazy Newb Pack](http://lazynewbpack.com) - the defacto best collection of tools and configuration for Dwarf Fortress, the fantasy world simulator / game for __windows__. It's aim is to improve accessability and ease of play by providing more useful configuration and defaults for core functionality.

Hyperstart aims to improve the experience for new players with these key features:

1. No setup - download, unzip and immediately play
2. Better key bindings for navigation

## Installation
1. [Download](https://github.com/Epigene/dwarf_fortress_hyperstart/archive/master.zip) this repo
2. Unzip
3. Open the `_Launch` folder and see if you can launch (in order specified)  
    1. DwarfFortress (should run with the DFHack plugin automatically)
    2. Dwarf Therapist
    3. Quickfort
4. Once DF is running, pick "Continue Playing" and the pre-made band of dwarves will be loaded to do your bidding.

## Sounds
Vanilla dwarf fortess comes with the one soundtrack track. We love it, but more variety is nice.  
[Soundsense](http://df.zweistein.cz/soundsense/) is the way to go if you want music in Dwarf Fortress.  
Unfortunately I (opinionated opinion) think it too heavy and provide a radically trimmed-down version at [df-minimal-soundsense](https://github.com/Epigene/df-minimal-soundsense/releases).

## Bindings
DF is verbose - reading the menus will usually reveal what keys do what, however navigation can be tricky, this is why navigation keys have been moved to the __left side of the keyboard__.  
`1` and `2` move up and down menus respectively.  
`3` and `4` move up and down Z-levels respectively.  
Arrow keys and PageUp/PageDown are used to navigate menus where numbers will not work.  
Numpad can also be used.  

## Quickfort
The pack comes with several blueprints to be used with the quickfort DFHack plugin, no more designating by hand!

## More advice
This is 2015. [Boatmurdered](http://lparchive.org/Dwarf-Fortress-Boatmurdered/), while a valuable and entertaining read, does not represent the state of DF for years now, chiefly because the game is 3D now, spanning countless depth levels from treetops all the way down to the bottom.  

DF has a steep learning curve. It is akin to flying a plane - one must have a solid understanding of almost everything it can do to even do the most basic thing, which is still awesome. Familiarize yourself with Dwarf Therapist, it is crucial for managing what your dwarves can and will do.

Read through [DF's quickstart guide in the wiki](http://dwarffortresswiki.org/index.php/DF2014:Quickstart_guide)

It is recommended to watch a __recent__ "lets play" video to see what DF is all about and how simple things like digging stairs up and down Z-levels are done.  

Feel free to experiment, read through the menus and google for advice. [Double-slit piercing aquifers](http://dwarffortresswiki.org/index.php/v0.34:Double-slit_method) and [Making artificial waterfalls](http://dwarffortresswiki.org/index.php/v0.34:Waterfall) will come in time.

# Setting up from scratch
## 1. Get vanilla DF
Visit [the official webpage](http://www.bay12games.com/dwarves/).

## 2. Get Phobeus texture replacement pack
See [phobeus' thread](http://dffd.bay12games.com/file.php?id=2430).
Download just the texture replacement, unzip in DF directory.  
Run `PhobeusTilesetAssembler.exe` to configure replacements.
Then run `df_phoebus_init_updater.bat`.

You can also [look around for althernatives in the wiki](http://dwarffortresswiki.org/index.php/DF2014:Graphics_set_repository).

## 3. Replace key bindings

Move the `interface.txt` file from hyperstart root to your DF installation folder's `data/init` directory, replacing the file there.

Notable changes:
```
1 for menu up and 2 for menu down.  
3 for Z up and 4 for Z down seems to work.
```

## 4. (optional) Restore saves

Move the contents of `OLD DF/data/save` to `NEW DF/data/save`.  

You may need to run save fixer for your texture replacement pack.  
For Phobeus the file is called `df_savegame_updater.bat`.  

## 5. Get latest Dwarf Therapist
Either [google for it](https://www.google.lv/?ion=1&espv=2#q=dwarf+therapist) or try [the thread](http://www.bay12forums.com/smf/index.php?PHPSESSID=9e839cc39296fbcdacb657b47a5f0c2c&topic=122968.0) and click for latest release.

__NB__, Therapist relies on memory layout being known; this is usually provided by the DFHack project. There have been periods when memory layout is not available for months. 

## 6. Set up Soundsense
Download the latest release of [df-minimal-soundsense](https://github.com/Epigene/df-minimal-soundsense/releases) and place the contents in your DF folder so that the structure is `DF/soundsense/soundSense.exe`.  

## 7. (optional) Use DFHack
Look over [releases](https://github.com/DFHack/dfhack/releases).  
Only use a version specifically designed for your version of DF.  

When installing make sure to make original copies of files DFH replaces.  

## 8. (optional) Use Quickfort
Provided you use the keybindings from hyperstart, the quickfort from hyperstart should work.  
If you use other keybindings, you may need to configure keys Quickfort uses in `Quickfort/config/keys.json`.  

## 9. (optional) Configure game options
Edit the `data/init/d_init.txt` file:

```rb
[TEMPERATURE:NO] # set to NO for less hassle
[WEATHER:NO]
[ECONOMY:YES]
[INVADERS:YES]
[CAVEINS:YES]
[ARTIFACTS:YES]
[ZERO_RENT:NO]
[TESTING_ARENA:NO]
[WALKING_SPREADS_SPATTER_DWF:NO]
[WALKING_SPREADS_SPATTER_ADV:NO]

[PATH_COST:1:10:20:50]

[STORE_DIST_ITEM_DECREASE:20]
[STORE_DIST_SEED_COMBINE:100]
[STORE_DIST_BUCKET_COMBINE:100]
[STORE_DIST_BARREL_COMBINE:100]
[STORE_DIST_BIN_COMBINE:100]

[SET_LABOR_LISTS:NO]
```
