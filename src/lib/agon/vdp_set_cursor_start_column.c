#include <agon/vdp_vdu.h>
#include <stdio.h>
#include <mos_api.h>
#include <stdbool.h>
#include <stdlib.h>

static VDU_A_B_CMD_B vdu_set_cursor_start_column = { 23, 0, 0x8A, 0 }; 

void vdp_set_cursor_start_column( int n )
{
	vdu_set_cursor_start_column.b0 = n;
	VDP_PUTS( vdu_set_cursor_start_column );
}