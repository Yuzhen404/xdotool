#define XDO_ERROR 1
#define XDO_SUCCESS 0

/**
 * Move the mouse to a specific location.
 *
 * @param x the target X coordinate on the screen in pixels.
 * @param y the target Y coordinate on the screen in pixels.
 * @param screen the screen (number) you want to move on.
 */
int xdo_move_mouse(const xdo_t *xdo, int x, int y, int screen);

/**
 * Send a mouse press (aka mouse down) for a given button at the current mouse
 * location.
 *
 * @param window The window you want to send the event to or CURRENTWINDOW
 * @param button The mouse button. Generally, 1 is left, 2 is middle, 3 is
 *    right, 4 is wheel up, 5 is wheel down.
 */
int xdo_mouse_down(const xdo_t *xdo, Window window, int button);

/**
 * Send a mouse release (aka mouse up) for a given button at the current mouse
 * location.
 *
 * @param window The window you want to send the event to or CURRENTWINDOW
 * @param button The mouse button. Generally, 1 is left, 2 is middle, 3 is
 *    right, 4 is wheel up, 5 is wheel down.
 */
int xdo_mouse_up(const xdo_t *xdo, Window window, int button);

/**
 * Wait for the mouse to move from a location. This function will block
 * until the condition has been satisfied.
 *
 * @param origin_x the X position you expect the mouse to move from
 * @param origin_y the Y position you expect the mouse to move from
 */
int xdo_wait_for_mouse_move_from(const xdo_t *xdo, int origin_x, int origin_y);

/**
 * Wait for the mouse to move to a location. This function will block
 * until the condition has been satisfied.
 *
 * @param dest_x the X position you expect the mouse to move to
 * @param dest_y the Y position you expect the mouse to move to
 */
int xdo_wait_for_mouse_move_to(const xdo_t *xdo, int dest_x, int dest_y);

