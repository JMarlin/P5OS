NOTE: This software is from some time in July of 2005. More work was done in the year following which included the switch into 32-bit Protected Mode, FAT12 filesystem read/write support, system timer support and a custom executable format and loader. Unfortunately, as far as I can tell, these later revisions were lost to the sands of time. If I ever manage to find them again, I will dance for joy and immediately upload them.


P5OSR0ppb
------

       This software will be changed radically by the next full release, however this release of the kernel has been included simply to demonstrate the main focus of this release, PBOOT. This code was created by Joseph Marlin (stithyoshi@users.sourcefore.net) and all questions and complaints should be addressed accordingly. 
       
     Building The Image:
     ------------------ 
       
       Building this image should be basically platform independant; as an example, this code has been developed, built and tested on both a HP Laptop and a Mac Mini. However, it was just a bit more independent with the last semi-release as it was all NASM assembly and NASM is easily moved between platforms, even non x86 platforms, with little fuss. This semi-release now has a kernel written in C so there are a few updates to the required binary list:
     
      Required Binaries:
    
             >NASM
             >GCC (must produce x86 code)
          
       Nasm is a fairly standard tool which can be found very easily for most x86 operating systems and built on others. Makeboot, thankfully, has been removed from the list, so it's now that much easier for anyone interested in this project to build it as you probably already have the required tools. Once those two tools have been built, installed, and placed in your PATH you simply have to enter the directory this readme is in and execute the build script (build.bat for dos/windows and build.sh for unices). This will produce a disk image called pboot.img and a binary file called p5kern.bin. At this point you need to manually put the kernel in the disk image using your favorite tool. In MacOS X, you can simply double-click pboot.img to mount it and then drag p5kern.bin into it and eject pboot. In windows, I recommend using WinImage. I don't really know of any floppy disk utilities for plain ol' unix, but I suppose that if you had to you could rawwrite, dd or cat pboot.img onto a floppy, put p5kern.bin on it and then either use that floppy natively or cat/dd it back into an image file for use with an emu.  
       
     Using The Image:
     ---------------
     
        You can use pboot.img/p5kern.bin with any emulator as you would any other floppy image or, if you have a copy of rawwrite on your system, you could even write it to a disk and boot off of it. It may not work on all systems; some P3s and P4s don't like the code for some reason. This really must be debugged. But that is for a future release. For now, either use a compatible computer (which is hit or miss) or stick to an emulator. 
        There are only two commands that P5OSR0 undersatnds: CLR, which clears the screen, and CHPROMPT, which can be used to change the string displayed for the prompt. In this kernel semi-release CHPROMPT isn't even implemented yet, though I have added the HELP command which is basically there to tell you the kernel version and the other two commands on this system. That's it. Overall P5OSR0 is a very useful OS.    
   
    Testing:
    -------
    
        This software has been built on an HP P4 laptop running Windows XP Home and an Apple Mac Mini Running Mac OS X 10.4.6 without any problems.

        This software has been tested on an IBM Aptiva with a 133Mhz Pentium and 64Mb RAM, a Compaq LTE Elite laptop with a 486 and 28Mb of memory, Bochs 2.3-Pre1 for Windows, Bochs 2.0.2 for Mac OS X and Q for Mac OS X. Since the last release there were no changes which could break hardware compatibility, so it is assumed that this release will still work on these platforms. I'll test it when I fix my USB to IDE cable so that I can write floppies in my sadly roundabout way again. 
        
     
      
