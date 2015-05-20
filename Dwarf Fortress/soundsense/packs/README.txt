New sounds are added:

<sound logPattern="\*\*\* STARTING NEW GAME \*\*\*" channel="music" loop="stop" playbackThreshhold="0">
  <!-- http://opengameart.org/content/radakan-moldan-chase-over-success -->
  <soundFile fileName="Radakan - Moldan Chase over (success).mp3" />
</sound>

logPattern = regex for pattern, needs escaping for special chars, U know.
channel="music"
loop="stop"
playbackThreshhold="0"
haltOnMatch="false"

logPattern - regular expression matching log line.
channel - string, channel on which sound is played. Sounds played on channel can be looped/stopped prematurely.
loop - string, "start" - sound start loop on channel until different sound is played on channel (if it is non-looped sound, loop will resume when it is done playing) or sound with "stop" is triggered.
concurency - number, number of councured sounds allowd to be played besides this sound. If currenty playing more than that, sound is ignored. In miliseconds, default unlimited.
timeout - number, timeout during which is sound going to be prevented from playing again. In miliseconds default 0.
propability - percentage, Propablity that sound will be played. Default is always played.
delay - number, delay before sound is played. In miliseconds, default 0.
haltOnMatch - boolean, if set to true, sound sense will stop processing long line after it was matched to this sound. Default false
ansiFormat - ANSI escape code, used to color console output.

volumeAdjustment