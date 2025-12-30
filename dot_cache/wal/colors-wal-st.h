const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0f1c22", /* black   */
  [1] = "#116B92", /* red     */
  [2] = "#4574A4", /* green   */
  [3] = "#1295A5", /* yellow  */
  [4] = "#6193B0", /* blue    */
  [5] = "#0EA8D6", /* magenta */
  [6] = "#0DD6EA", /* cyan    */
  [7] = "#c3c6c7", /* white   */

  /* 8 bright colors */
  [8]  = "#5e6c73",  /* black   */
  [9]  = "#116B92",  /* red     */
  [10] = "#4574A4", /* green   */
  [11] = "#1295A5", /* yellow  */
  [12] = "#6193B0", /* blue    */
  [13] = "#0EA8D6", /* magenta */
  [14] = "#0DD6EA", /* cyan    */
  [15] = "#c3c6c7", /* white   */

  /* special colors */
  [256] = "#0f1c22", /* background */
  [257] = "#c3c6c7", /* foreground */
  [258] = "#c3c6c7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
