#include <TFT_eSPI.h>
#include <gamma.h>
#include <time.h>
#include <stdlib.h>

//Optional Darude Sandstorm Music

//const float nA1 = 55;
//const float nB1 = 61.74;
//const float nD2 = 73.42;
//const float nE2 = 82.41;
//const float nA2 = 110;
//const float nB2 = 123.47;
//const float nD3 = 146.83;
//const float nE3 = 164.81;
//const float nA3 = 220;
//const float nB3 = 246.94;
//const float nD4 = 293.66;
//const float nE4 = 329.63;
//const float nA4 = 440;
//const float nB4 = 493.88;
//const float nD5 = 587.33;
//const float nE5 = 659.25;
//const float nA5 = 880;
//const float nB5 = 987.77;
//long timeset = 0;
//long debounce = 20;
//int noteSpace = 24; 
//int noteSpace2 = 12;
//int _16thNote = 110;
//int dotted16th = 1.5 * _16thNote;
//int _8thNote = 2 * _16thNote;
//int dotted8th = 1.5 * _8thNote;
//int _4thNote = 2 * _8thNote;
//int dotted4th = 1.5 * _4thNote;
//int halfNote = 2 * _4thNote;
//int dottedHalf = 1.5 * halfNote;
//int wholeNote = 2 * halfNote;
//unsigned long curtime = millis();


//void setup() {


//delay(3000);
//}

//void loop() {
// choon();
//}


// void choon(){
// //button1 = LOW;
// for (int choon1 = 1; choon1 <= 2; choon1++){
// for (int shittles = 1; shittles < 5; shittles++){
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nB2,_16thNote);
// delay(_16thNote + noteSpace2);

// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_8thNote);
// delay(_8thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nB2,_16thNote);
// delay(_16thNote + noteSpace2);

// tone(8,nE5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nE5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nE5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nE5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nE5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nE5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nE5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nE2,_16thNote);
// delay(_16thNote + noteSpace2);

// tone(8,nD5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nD5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nD5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nD5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nD5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nD2,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nD5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nD2,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nA4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nA1,_16thNote);
// delay(_16thNote + noteSpace2);
// }

// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nB2,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nB2,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nB2,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nB2,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nD5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nD3,_16thNote);
// delay(_16thNote + noteSpace2);

// for (int build0 = 1; build0 < 4; build0++){
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nB2,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nB2,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nB2,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nD5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nD3,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nD5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nD3,_16thNote);
// delay(_16thNote + noteSpace2);
// }

// for (int build1 = 1; build1 < 5; build1++){
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nB2,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nD5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nD3,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nD5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nD3,_16thNote);
// delay(_16thNote + noteSpace2);
// }

// for (int build2 = 1; build2 < 5; build2++){
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nD5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(7,nD3,_16thNote);
// delay(_16thNote + noteSpace2);
// }

// for (int build3 = 1; build3 < 17; build3++){
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// }


// }

// tone(8,nB5,wholeNote);
// delay(wholeNote + noteSpace2);
// tone(8,nA5,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nE4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nD4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nA4,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nE3,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nD3,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB3,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nA3,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nE2,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nD2,_16thNote);
// delay(_16thNote + noteSpace2);
// tone(8,nB2,halfNote);
// delay(_16thNote + noteSpace2);
// }


//create the screen variable from the library
TFT_eSPI tft = TFT_eSPI();


#define LEFT_BUTTON_PIN 5
#define RIGHT_BUTTON_PIN 3
#define FIRE_BUTTON_PIN 10


//boarders
const int boardWidth = 32;
const int boardHeight = 48;

// Matrice Dimensions
const uint8_t MAT_WIDTH = 32;
const uint8_t MAT_HEIGHT = 48;


// define the wiring of the inputs
//const int POTENTIOMETER_PIN_NUMBER = 5;
//const int BUTTON_PIN_NUMBER = 10;


// global constant for the number of Invaders in the game
const int NUM_ENEMIES = 16;


const int MAX_LEVEL = 4;
const int MAX_INVADERS = 16;


const int CANNON_BALL_DELAY = 1;
const int INVADER_DELAY = 1000;


const int strengths[MAX_LEVEL][MAX_INVADERS] = { { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
                                                 { 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2 },
                                                 { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1 },
                                                 { 5, 4, 5, 4, 5, 4, 5, 4, 2, 3, 2, 3, 2, 3, 2, 3 } };



// the following functions are for printing messages
void print_level(int level);
void print_lives(int lives);
void game_over();


class Color {
public:
  uint8_t red;
  uint8_t green;
  uint8_t blue;
  Color() {
    red = 0;
    green = 0;
    blue = 0;
  }
  Color(uint8_t r, uint8_t g, uint8_t b) {
    red = r;
    green = g;
    blue = b;
  }
  uint16_t to_565() const {
    return tft.color565(red, green, blue);
  }
};


const Color BLACK(0, 0, 0);
const Color RED(255, 0, 0);
const Color ORANGE(255, 165, 0);
const Color YELLOW(255, 255, 0);
const Color GREEN(0, 255, 0);
const Color BLUE(0, 0, 255);
const Color PURPLE(128, 0, 128);
const Color WHITE(255, 255, 255);
const Color LIME(0, 255, 0);
const Color AQUA(0, 255, 255);


class Invader {
public:
  // Constructors
  Invader() {
    x = 0;
    y = 0;
    strength = 0;
    time = millis();
  }
  // sets values for private date members x and y
  Invader(int x_arg, int y_arg) {
    x = x_arg;
    y = y_arg;
    time = millis();
  }
  // sets values for private data members
  Invader(int x_arg, int y_arg, int strength_arg) {
    x = x_arg;
    y = y_arg;
    strength = strength_arg;
    time = millis();
  }
  // sets values for private data members
  void initialize(int x_arg, int y_arg, int strength_arg) {
    x = x_arg;
    y = y_arg;
    strength = strength_arg;
    time = millis();
  }

  // getters
  int get_x() const {
    return x;
  }
  int get_y() const {
    return y;
  }
  int get_strength() const {
    return strength;
  }


  // setters
  void set_pos(int x_arg, int y_arg) {
    x = x_arg;
    y = y_arg;
  }
  void set_strength(int s) {
    strength = s;
    time = millis();
  }

  // Moves the Invader down the screen by one row
  // Modifies: y
  void move() {
    if (strength > 0 && (millis() - time) > INVADER_DELAY) {
      erase();
      y++;
      if (y >= (boardHeight + 4)) {
        reached_bottom = true;
      } else {
        draw();
      }
      time = millis();
    }
  }


  bool has_touched_player(int x_arg, int y_arg) {
    if (get_strength() > 0) {
      bool _cannon = (x <= x_arg && x >= (x + 3)) && (y_arg == (y + 3));
      bool _overlap = false;
      for (int i = x; i <= (x + 3); i++) {
        for (int j = (x_arg - 1); j <= (x_arg + 1); j++) {
          _overlap = (i == j);
        }
      }


      bool _body = _overlap && ((y_arg + 1) == (y + 3));


      if (_cannon && _body) {
        return true;
      }
    }
    return false;
  }


  bool has_reached_bottom() {
    return reached_bottom;
  }


  void clear_reached_bottom() {
    reached_bottom = false;
  }

  // draws the Invader if its strength is greater than 0
  // calls: draw_with_rgb
  void draw() {
    switch (get_strength()) {
      case 1:
        draw_with_rgb(TFT_RED, TFT_BLUE);
        break;
      case 2:
        draw_with_rgb(TFT_ORANGE, TFT_BLUE);
        break;
      case 3:
        draw_with_rgb(TFT_YELLOW, TFT_BLUE);
        break;
      case 4:
        draw_with_rgb(TFT_GREEN, TFT_BLUE);
        break;
      case 5:
        draw_with_rgb(TFT_BLUE, TFT_BLUE);
        break;
      case 6:
        draw_with_rgb(TFT_PURPLE, TFT_BLUE);
        break;
      case 7:
        draw_with_rgb(TFT_WHITE, TFT_BLUE);
        break;
      default:
        break;
    }
  }

  // draws black where the Invader used to be
  // calls: draw_with_rgb
  void erase() {
    draw_with_rgb(TFT_BLACK, TFT_BLACK);
  }

  // Invader is hit by a Cannonball.
  // Modifies: strength
  // calls: draw, erase
  void hit() {
    strength--;
    if (strength <= 0) {
      erase();
    } else {
      draw();
    }
  }


  bool has_been_hit(int x_arg, int y_arg) {
    if (get_strength() > 0) {
      bool _x = x_arg == (x + 1) || x_arg == (x + 2);
      bool _y = y_arg == (y + 1);

      if (_x && _y) {
        return true;
      }
    }
    return false;
  }


private:
  int x;
  int y;
  int strength;
  unsigned long time;
  bool reached_bottom = false;

  // draws the Invader
  void draw_with_rgb(uint32_t A, uint32_t B) {
    tft.fillRect(8 * x + 8, 8 * y, 8, 16, A);
    tft.fillRect(8 * x + 16, 8 * y, 8, 16, A);

    tft.fillRect(8 * x + 0, 8 * y + 8, 8, 8, A);
    tft.fillRect(8 * x + 8, 8 * y + 8, 8, 8, B);
    tft.fillRect(8 * x + 16, 8 * y + 8, 8, 8, B);
    tft.fillRect(8 * x + 24, 8 * y + 8, 8, 8, A);

    tft.fillRect(8 * x + 0, 8 * y + 16, 8, 8, A);
    tft.fillRect(8 * x + 8, 8 * y + 16, 8, 8, A);
    tft.fillRect(8 * x + 16, 8 * y + 16, 8, 8, A);
    tft.fillRect(8 * x + 24, 8 * y + 16, 8, 8, A);
    tft.fillRect(8 * x + 0, 8 * y + 24, 8, 8, A);
    tft.fillRect(8 * x + 24, 8 * y + 24, 8, 8, A);
  }
};

class Cannonball {
public:
  Cannonball() {
    x = 0;
    y = 0;
    fired = false;
    time = millis();
  }

  // resets private data members to initial values
  void reset() {
    x = 0;
    y = 0;
    fired = false;
    time = millis();
  }

  // getters
  int get_x() const {
    return x;
  }
  int get_y() const {
    return y;
  }
  bool has_been_fired() const {
    return fired;
  }

  // sets private data members
  void fire(int x_arg, int y_arg) {
    x = x_arg;
    y = y_arg;
    fired = true;
  }



  // moves the Cannonball and detects if it goes off the screen
  // Modifies: y, fired
  void move() {
    if (fired && (millis() - time) > CANNON_BALL_DELAY) {
      erase();
      y-=2 ;
      if (y < 0) {
        reset();
      } else {
        draw();
      }
      time = millis();
    }
  }

  // resets private data members to initial values
  void hit() {
    erase();
    reset();
  }

  // draws the Cannonball, if it is fired
  void draw() {
    tft.fillRect(8 * x, 8 * y, 8, 8, TFT_ORANGE);
    tft.fillRect(8 * x, 8 * y - 1, 8, 8, TFT_ORANGE);
  }

  // draws black where the Cannonball used to be
  void erase() {
    tft.fillRect(8 * x, 8 * y, 8, 8, TFT_BLACK);
    tft.fillRect(8 * x, 8 * y - 1, 8, 8, TFT_BLACK);
  }


private:
  int x;
  int y;
  bool fired;
  unsigned long time;
};


class Player {
public:
  Player() {
    x = 1;
    y = boardHeight - 2;
    lives = 3;
  }

  // getters
  int get_x() const {
    return x;
  }
  int get_y() const {
    return y;
  }
  int get_lives() const {
    return lives;
  }

  // setter
  void set_x(int x_arg) {
    x = x_arg;
  }

  // Modifies: lives
  void die() {
    lives--;
  }

  // draws the Player
  // calls: draw_with_rgb
  void draw(uint32_t color) {
    draw_with_rgb(color);
  }

  // draws black where the Player used to be
  // calls: draw_with_rgb
  void erase() {
    draw_with_rgb(TFT_BLACK);
  }


private:
  int x;
  int y;
  int lives = 0;


  // sets private data members x and y to initial values
  void initialize(int x_arg, int y_arg) {
    x = x_arg;
    y = y_arg;
    lives = 3;
  }

  // draws the player
  void draw_with_rgb(uint32_t color) {
    tft.fillRect(8 * x, 450, 8, 8, color);
    tft.fillRect(8 * x - 1 * 8, 450, 8, 8, color);
    tft.fillRect(8 * x + 1 * 8, 450, 8, 8, color);
    // player's cannon
    tft.fillRect(8 * x, 442, 8, 8, color);
  }
};


class Game {
public:
  Game() {
    level = 1;
    time = 0;
  }


  // sets up a new game of Space Invaders
  // Modifies: global variable matrix
  void setup(int level_arg = 1) {
    level = level_arg;
    if (level == 1) {
      num_invaders = 8;
    } else {
      num_invaders = 16;
    }


    reset_invaders();
    print_level(level);
    delay(2000);
    print_lives(player.get_lives());
    delay(2000);
    tft.fillScreen(TFT_BLACK);
  }

  // advances the game simulation one step and renders the graphics
  // see spec for details of game
  // Modifies: global variable matrix
  void update(bool button_pressed) {

    if (is_game_over) {
      game_over();
      delay(2000);
      return;
    }

    // Update the position of the player based on the value of the potentiometer
    player.erase();
    //player.set_x(((MAT_WIDTH) * potentiometer_value) / 1024);

    if (digitalRead(LEFT_BUTTON_PIN) == LOW) {
      player.set_x(player.get_x() - 1);
      Serial.println("Moved left");
      Serial.println(player.get_x());
    } else if (digitalRead(RIGHT_BUTTON_PIN) == LOW) {
      player.set_x(player.get_x() + 1);
      Serial.println("Moved right");
      Serial.println(player.get_x());
    }
    player.draw(TFT_WHITE);


    // Update the position of the cannonball, including detecting if a new cannonball is being fired
    if (button_pressed && !ball.has_been_fired()) {
      ball.fire(player.get_x(), 55);
    //  InvaderBall.fireInvader(enemies[rand(NUM_INVADERS)].get_x, enemies[rand(NUM_INVADERS)].get_y) //starting y coordinate for invader cannon
  //make new invader cannon calss
  //if player fires call fireInvader()

    }
    ball.move();


    // Update the position of each invader
    for (int i = 0; i < num_invaders; i++) {
      enemies[i].draw();
      // Move enemy
      if ((i / 8 == 0) || enemies_killed(8)) {
        enemies[i].move();
      }


      // Detect if the cannonball is colliding with any of the invaders;
      // if so, both the cannonball and the invader disappear
      if (ball.has_been_fired()) {
        if (enemies[i].has_been_hit(ball.get_x(), ball.get_y())||enemies[i].has_been_hit(ball.get_x(), ball.get_y()-1)||enemies[i].has_been_hit(ball.get_x(),ball.get_y()-2)) {
          // redraw the enemy
          enemies[i].hit();
          // erase the ball
          ball.hit();


          // Detect if all the invaders are killed; if so, start the next level
          if (level_cleared()) {
            Serial.println("Level Cleared!");
            next_level();
          }
        }
      }


      // Detect if the player is colliding with any of the invaders; if so, the player loses a life and the level restarts
      if (enemies[i].has_touched_player(player.get_x(), player.get_y()) || enemies[i].has_reached_bottom()) {
        player.die();
        if (player.get_lives() < 1) {
          is_game_over = true;
          game_over();
        } else {
          reset_level();
        }
      }
    }
  }


private:
  int level;
  unsigned long time;
  Player player;
  Cannonball ball;
  Invader enemies[NUM_ENEMIES];
 // InvaderCannonball//this is the class Invaderball;
  int num_invaders;
  bool is_game_over = false;


  // Check if first N enemies killed
  bool enemies_killed(int first_n = 16) {
    for (int n = 0; n < first_n; n++) {
      if (enemies[n].get_strength() != 0) {
        return false;
      }
    }
    return true;
  }


  // check if Player defeated all Invaders in current level
  bool level_cleared() {
    return enemies_killed(NUM_ENEMIES);
  }


  // Next level
  void next_level() {
    level++;
    setup(level);
  }


  // set up a level
  void reset_level() {
    setup(level);
  }


  // reset the enemies
  void reset_invaders() {
    int strength;
    for (int i = 0; i < num_invaders; ++i) {
      if (level >= 1 && level <= 4) {
        strength = strengths[level - 1][i];
      } else {
        strength = random(1, 8);
      }

      enemies[i].set_strength(strength);
      enemies[i].set_pos(((i % 8) * 4)+i%8, (num_invaders / 16) * (1 - (i / 8)) * 5);
      enemies[i].clear_reached_bottom();
    }
  }
};


// a global variable that represents the game Space Invaders
Game game;


// see https://www.arduino.cc/reference/en/language/structure/sketch/setup/
void setup() {
  Serial.begin(9600);
  pinMode(FIRE_BUTTON_PIN, INPUT_PULLUP);
  pinMode(LEFT_BUTTON_PIN, INPUT_PULLUP);
  pinMode(RIGHT_BUTTON_PIN, INPUT_PULLUP);
  tft.begin();
  game.setup(1);
//  choon();  
}


// see https://www.arduino.cc/reference/en/language/structure/sketch/loop/
void loop() {
  //  int total = 0;
  //  int num_readings = 10;
  //  for (int i = 0; i < num_readings; i++) {
  //    total += digitalRead(LEFT_BUTTON_PIN);
  //  }
  //  int potentiometer_value = total / num_readings;

//  choon();
  bool button_pressed = (digitalRead(FIRE_BUTTON_PIN) == LOW);
//  choon();
  game.update(button_pressed);
//  choon();
}


// displays Level
void print_level(int level) {
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(15, 220);
  tft.setTextSize(8);
  tft.setTextColor(TFT_WHITE);
  tft.print('L');
  tft.print('E');
  tft.print('V');
  tft.print('E');
  tft.print('L');
  tft.print(' ');
  tft.print(level);
}


// displays number of lives
void print_lives(int lives) {
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(15, 220);
  tft.setTextSize(8);
  tft.setTextColor(TFT_WHITE);
  tft.print('L');
  tft.print('I');
  tft.print('V');
  tft.print('E');
  tft.print('S');
  tft.print(' ');
  tft.print(lives);
}


// displays "game over"
void game_over() {
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(15, 220);
  tft.setTextSize(5);
  tft.setTextColor(TFT_WHITE);
  tft.print('G');
  tft.print('A');
  tft.print('M');
  tft.print('E');
  tft.print(' ');
  tft.print('O');
  tft.print('V');
  tft.print('E');
  tft.print('R');
  choon();
}
