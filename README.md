# wioTerminal Namecard

![example workflow](https://github.com/botamochi6277/wioTerminal_namecard/actions/workflows/ci-platformio.yml/badge.svg)

![namecard](https://user-images.githubusercontent.com/14128408/146183351-93818b28-cade-48f7-87a0-565f6c1e062a.gif)

A namecard with SEEED [wioTerminal](https://wiki.seeedstudio.com/Wio-Terminal-Getting-Started/) without SD card.
You can display an avatar image, a twitter 2D code and a google chrome 2D code.
You can change images with pushing buttons.

## Usage

clone this repository.

```
git clone https://github.com/botamochi6277/wioTerminal_namecard.git
```

open the clone folder with VScode installed [PlatformIO](https://platformio.org).

Create images (340x240) as jpeg image.
Convert the images to array with [this site](https://wioterminal.s3-ap-northeast-1.amazonaws.com/index.html).
Copy replace array in following header files.

- avatar.hpp : avatar image
- twitter.hpp: twitter 2D code
- t_rex.hpp: google chrome 2D code

## References

https://qiita.com/carcon999/items/4fbcef49bcb667737390
