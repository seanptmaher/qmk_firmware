# koda

* Keyboard Maintainer: [odd-rocket](https://github.com/larrbo)

* Hardware Supported: NOTE: This is for RP2040, specifically helios (read the wiki page on the compatibility) NOT typical pro  micro. You'll have to figure out how to build it for pro micro if you're using one of those chips.


## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* Short RST to GND for >500ms

Then compile, and drop the uf2 file onto the removable drive that appears. for troubleshooting, use `sudo dmesg -wH`.

