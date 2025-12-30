/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x0f1c22ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc3c6c7ff, 0x0f1c22ff, 0x5e6c73ff },
	[SchemeSel]  = { 0xc3c6c7ff, 0x4574A4ff, 0x116B92ff },
	[SchemeUrg]  = { 0xc3c6c7ff, 0x116B92ff, 0x4574A4ff },
};
