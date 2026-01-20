# cls 🚀

A blazing fast, true clear command for macOS & Linux.

**cls** is a tiny C utility that instantly wipes your terminal screen and scrollback buffer. Unlike the standard `clear` command (which often just scrolls text up), `cls` sends the precise ANSI escape codes to reset your view completely.

---

## ⚡ Why use this?

- **True Clear:** Removes all previous output from the scrollback history
- **Insanely Fast:** Written in C, compiled to native binary
- **Tiny:** The core payload is just 11 bytes
- **Universal:** Works on zsh, bash, fish, and inside scripts

---

## 🍎 Manual Installation (macOS & Linux)

You can build and install `cls` directly from the source code.

### Step 1: Download & Extract

Download Source code (`zip`) from:  
https://github.com/NVSRahul/cls/releases

Open your terminal and go to your Downloads folder:
```sh
cd ~/Downloads
```

Extract the archive and enter the directory  
(*replace `1.0.0` with the version you downloaded*):
```sh
unzip cls-1.0.0.zip
cd cls-1.0.0
```

### Step 2: Install

Compile and install `cls`.  
You will be asked for your password to allow copying the binary into `/usr/local/bin`.

```sh
sudo make install PREFIX=/usr/local
```

### Step 3: Run it

Installation is instant.  
You can now clear your terminal completely using:

```sh
cls
```

---

## 🗑️ Uninstalling

To remove `cls` from your system:
```sh
sudo rm /usr/local/bin/cls
```

---

## 📄 License

MIT License © 2026 NVSRahul

For full license details, see: [@NVSRahul/cls/files/LICENSE](https://github.com/NVSRahul/cls/blob/main/LICENSE)
