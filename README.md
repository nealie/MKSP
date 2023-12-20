# MKSP

## Modular Keyboard for Small Printers

![Mk1](Images/Mk1.jpg)

MKSP is a hand wired printable keyboard, along with a set of printable
key caps, that can be printed on a small 3d printer. It uses cherry
MX style keys (in my case Gateron browns).

I wanted to print an ortholinear keyboard using my Prusa Mini 3d printer, 
but most case designs are just too wide for this diminuitive printer.
Instead I decided to design one myself using FreeCAD. The parts are
all parametric, driven from a spreadsheet of parameters, so in theory
it's easy to change anything. Unfortunately with FreeCAD this will result
in something breaking, but hopefully this has been minimised.

Currently these are the files used for my Mk1, which I have constructed
and am indeed using it to type this document.

The case parts are all printed in PLA with a 0.4mm nozzle (although I started
with a 0.6mm, but was not happy with the quality). The key caps are also
printed in PLA, but with a 0.25mm nozzle. The key legends are applied using Prusaslicer,
as unfortunately FreeCAD seems to be a bit rubbish at text. The legends are generally
large enough so that a permanent marker can be used to make them easily visible.

## Controller

The design currently uses a Waveshare RP2040-Plus, which is a Raspberry Pi
Pico clone, but with a better USB-C connector.

## Firmware

I originally planned to use KMK as I'm lazy and it looked really easy to use.
Unfortunately this uses CircuitPython which did not then officially support
the RP2040-Plus, resulting in some really odd crashes.

Because of this I changed to QMK, which surprisingly wasn't as difficult to use
as I'd expected, and this seems to work perfectly.

## Hardware

The following is needed to bolt everything together:

- 8x M3 4mm threaded heat set inserts.
- 12x M3 12mm machine screws.
- 4x M3 nuts.
- 8x M3 washers.
