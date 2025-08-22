#include <dt-bindings/zmk/keys.h>

/**
 * Action Combos
 */

#define CMD RC // PC
// #define CMD RG // Mac

#define X_UNDO  &kp CMD(Z)
#define X_CUT   &kp CMD(X)
// #define X_COPY  &kp CMD(C)
#define X_COPY  &kp CMD(W) // Ergol
#define X_PASTE &kp CMD(V)
// #define X_REDO  &kp CMD(Y)
#define X_REDO  &kp CMD(P) // Ergol

// #define X_CLOSE &kp CMD(W)
#define X_CLOSE &kp CMD(T) // Ergol
#define X_SAVE  &kp CMD(S)
#define X_ALL   &kp CMD(A)

#define X_SHTAB &kp RS(TAB)
#define X_PREV  &kp LA(LEFT)
#define X_NEXT  &kp LA(RIGHT)
