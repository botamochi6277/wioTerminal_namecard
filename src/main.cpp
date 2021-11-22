#include <Arduino.h>
#include <LGFX_TFT_eSPI.hpp>
#include "avatar.hpp"
#include "twitter.hpp"
#include "t_rex.hpp"
static TFT_eSPI tft;

// define image size
#define IMG_WIDTH (320)
#define IMG_HEIGHT (240)

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(WIO_KEY_A, INPUT_PULLUP);
  pinMode(WIO_KEY_B, INPUT_PULLUP);
  pinMode(WIO_KEY_C, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);

  tft.init();
  tft.setRotation(1);

  tft.drawJpg(avatar, sizeof(avatar), 0, 0, IMG_WIDTH, IMG_HEIGHT);
  // tft.drawPng(img, sizeof(img), 0, 0, IMG_WIDTH, IMG_HEIGHT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  if (digitalRead(WIO_KEY_A) == LOW)
  {
    Serial.println("A Key pressed");
    tft.drawJpg(avatar, sizeof(avatar), 0, 0, IMG_WIDTH, IMG_HEIGHT);
    delay(500); // locking key
  }
  else if (digitalRead(WIO_KEY_B) == LOW)
  {
    Serial.println("B Key pressed");
    tft.drawJpg(twitter, sizeof(twitter), 0, 0, IMG_WIDTH, IMG_HEIGHT);
    delay(500); // locking key
  }
  else if (digitalRead(WIO_KEY_C) == LOW)
  {
    Serial.println("C Key pressed");
    tft.drawJpg(t_rex, sizeof(t_rex), 0, 0, IMG_WIDTH, IMG_HEIGHT);
    delay(500); // locking key
  }
  delay(200);
}

// https://wioterminal.s3-ap-northeast-1.amazonaws.com/index.html
