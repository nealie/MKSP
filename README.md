# MKSP

## Modular Keyboard for Small Printers

I wanted to print an ortholimear keyboard using my Prusa Mini 3d printer, 
but most case designs are just too wide for this diminuitive printer.
Instead I decided to design one myself using FreeCAD.

Currently these are the files used for my Mk1, which I have constructed
and am indeed using it to type this document.

## Controller

The design currently uses a Waveshare RP2040-Plus, which is a Raspberry Pi
Pico clone, but with a better USB-C connector.

## Firmware

I originally planned to use KMK as I'm lazy as it looked really easy to use.
Unfortunately this uses CircuitPython which did not then officially support
the RP2040-Plus, resulting in some really odd crashes.

Because of this I changed to QMK, which surprisingly wasn't as difficult to use
as I'd expected, and this seems to work perfectly.
