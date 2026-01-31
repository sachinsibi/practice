# Snake Game Website Specifications

## Overview
A responsive web-based Snake game that users can play directly in their browser with touch swipe controls.

## Core Requirements

### Display
- Game board must fit entirely within the viewport (no scrolling)
- Full-screen layout that adapts to any screen size
- Prevent all default scrolling behavior on the page
- Border/game area should use 100vh and 100vw appropriately

### Controls
- **Touch devices**: Swipe gestures to control snake direction
  - Swipe up: Move up
  - Swipe down: Move down
  - Swipe left: Move left
  - Swipe right: Move right
- **Desktop fallback**: Arrow keys for keyboard control
- Prevent default touch behaviors (pull-to-refresh, scroll, zoom)

### Gameplay
- Snake grows when eating food
- Game ends when snake collides with itself or walls
- Score tracking based on food consumed
- Increasing difficulty (speed) as score increases
- Start/restart game functionality

### Technical Requirements
- Vanilla HTML, CSS, and JavaScript (no frameworks required)
- Touch event handling with `touchstart` and `touchend` for swipe detection
- CSS `overflow: hidden` on body to prevent scrolling
- CSS `touch-action: none` to disable browser touch gestures
- Responsive canvas or grid-based game board
- RequestAnimationFrame for smooth game loop

### UI Elements
- Game board (centered, maximum size while fitting viewport)
- Current score display
- High score display (localStorage persistence)
- Game over screen with restart option
- Optional: Start screen with instructions

### Mobile Considerations
- Viewport meta tag: `<meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no">`
- Prevent double-tap zoom
- Minimum swipe distance threshold to avoid accidental inputs
- Visual feedback on swipe detection (optional)
