# 🎨 Turbo C Console Paint

A small experimental **paint program built in C for Turbo C / DOSBox**.

Instead of using a graphical interface, this project uses the **Turbo C console screen as a drawing canvas**. You can move around the screen and paint characters to create drawings, patterns, and pixel-style text art.

---

## ✨ Features

- 🖥️ Draw directly on the Turbo C output screen
- ⌨️ Keyboard-controlled cursor movement
- 🎨 Toggle drawing mode
- 📦 2D character-based canvas
- 🧠 Uses arrays to store the drawing
- 🔄 Renders the saved drawing back to the console
- 🕹️ Designed for **Turbo C / DOSBox**

---

## 🛠️ Technologies Used

- **C**
- **Turbo C**
- **DOSBox**
- `conio.h`
- 2D Arrays
- Keyboard Input

---

## 🎯 Project Idea

The main idea behind this project was to experiment with using a **text-mode console as a drawing canvas**.

Each character position on the screen acts like a tiny pixel. By moving around the console and enabling drawing mode, the user can create simple drawings, patterns, and text-based art.

This project was mainly created to explore:

- 2D arrays
- Screen coordinates
- Keyboard input
- Loops and conditions
- Functions in C
- Character-based graphics

---

## 🖼️ Output

### Output 1

![Turbo C Paint Output 1](https://raw.githubusercontent.com/YOUR-USERNAME/YOUR-REPOSITORY/main/output1.png)

### Output 2

![Turbo C Paint Output 2](https://raw.githubusercontent.com/YOUR-USERNAME/YOUR-REPOSITORY/main/output2.png)

> Replace `YOUR-USERNAME` and `YOUR-REPOSITORY` with your GitHub username and repository name.

---

## 🎮 Controls

| Key | Action |
|-----|--------|
| `→` | Move Right |
| `←` | Move Left |
| `↑` | Move Up |
| `↓` | Move Down |
| `A` | Toggle Drawing Mode |
| `ESC` | Exit Drawing |

---

## 🖥️ How It Works

The program maintains a **2D array representing the console screen**.

Each position in the array corresponds to a character position on the Turbo C screen.

When drawing mode is enabled, the current position is stored in the array. After drawing is finished, the program scans the array and renders the stored pixels back onto the console.

---

## 💻 Running the Project

This project is designed for the **Turbo C environment**, usually run through **DOSBox** on modern systems.

### Steps

1. Open Turbo C through DOSBox.
2. Load the source file.
3. Compile the program.
4. Run the program.
5. Use the keyboard controls to draw.

---

## 📂 Project Structure

```text
Turbo-C-Console-Paint/
│
├── BOX.C
├── README.md
├── output1.png
└── output2.png
