#define ponto 180
#define traco 180
string morse[]=  {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." }
string letras[]= {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"}
string palavra
string traducao
// notes in the melody:
int melody[] = {
  ponto, traco
};


int noteDurations[] = {
  8, 4
};

void setup() {
  palavra= ". -"
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < len(palavra); thisNote++) {
if (palavra.substring(thisNote,thisNote)= "." )
    {
      tone(ponto)
    }
if (palavra.substring(thisNote,thisNote)= "-")
    {
      tone(traco)
    }
if (palavra.substring(thisNote,thisNote)= " ")
    {
      delay()
    }
    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
}

void loop() {
  // no need to repeat the melody.
}
