/*
 * output_display.c
 *
 *  Created on: Nov 5, 2022
 *      Author: HELLO SON
 */

#include "output_display.h"
#include "main.h"
void display7SEG (int time)
{
	if(time==0)
	{
		HAL_GPIO_WritePin(P_1_GPIO_Port, P_1_Pin, RESET);
		HAL_GPIO_WritePin(P_2_GPIO_Port, P_2_Pin, RESET);
		HAL_GPIO_WritePin(P_3_GPIO_Port, P_3_Pin, RESET);
		HAL_GPIO_WritePin(P_4_GPIO_Port, P_4_Pin, RESET);
		HAL_GPIO_WritePin(P_5_GPIO_Port, P_5_Pin, RESET);
		HAL_GPIO_WritePin(P_6_GPIO_Port, P_6_Pin, RESET);
		HAL_GPIO_WritePin(P_7_GPIO_Port, P_7_Pin, SET);
	}
	else if(time==1)
	{
		HAL_GPIO_WritePin(P_1_GPIO_Port, P_1_Pin, SET);
		HAL_GPIO_WritePin(P_2_GPIO_Port, P_2_Pin, RESET);
		HAL_GPIO_WritePin(P_3_GPIO_Port, P_3_Pin, RESET);
		HAL_GPIO_WritePin(P_4_GPIO_Port, P_4_Pin, SET);
		HAL_GPIO_WritePin(P_5_GPIO_Port, P_5_Pin, SET);
		HAL_GPIO_WritePin(P_6_GPIO_Port, P_6_Pin, SET);
		HAL_GPIO_WritePin(P_7_GPIO_Port, P_7_Pin, SET);
	}
	else if(time==2)
	{
		HAL_GPIO_WritePin(P_1_GPIO_Port, P_1_Pin, RESET);
		HAL_GPIO_WritePin(P_2_GPIO_Port, P_2_Pin, RESET);
		HAL_GPIO_WritePin(P_3_GPIO_Port, P_3_Pin, SET);
		HAL_GPIO_WritePin(P_4_GPIO_Port, P_4_Pin, RESET);
		HAL_GPIO_WritePin(P_5_GPIO_Port, P_5_Pin, RESET);
		HAL_GPIO_WritePin(P_6_GPIO_Port, P_6_Pin, SET);
		HAL_GPIO_WritePin(P_7_GPIO_Port, P_7_Pin, RESET);
	}
	else if(time==3)
	{
		HAL_GPIO_WritePin(P_1_GPIO_Port, P_1_Pin, RESET);
		HAL_GPIO_WritePin(P_2_GPIO_Port, P_2_Pin, RESET);
		HAL_GPIO_WritePin(P_3_GPIO_Port, P_3_Pin, RESET);
		HAL_GPIO_WritePin(P_4_GPIO_Port, P_4_Pin, RESET);
		HAL_GPIO_WritePin(P_5_GPIO_Port, P_5_Pin, SET);
		HAL_GPIO_WritePin(P_6_GPIO_Port, P_6_Pin, SET);
		HAL_GPIO_WritePin(P_7_GPIO_Port, P_7_Pin, RESET);
	}
	else if(time==4)
	{
		HAL_GPIO_WritePin(P_1_GPIO_Port, P_1_Pin, SET);
		HAL_GPIO_WritePin(P_2_GPIO_Port, P_2_Pin, RESET);
		HAL_GPIO_WritePin(P_3_GPIO_Port, P_3_Pin, RESET);
		HAL_GPIO_WritePin(P_4_GPIO_Port, P_4_Pin, SET);
		HAL_GPIO_WritePin(P_5_GPIO_Port, P_5_Pin, SET);
		HAL_GPIO_WritePin(P_6_GPIO_Port, P_6_Pin, RESET);
		HAL_GPIO_WritePin(P_7_GPIO_Port, P_7_Pin, RESET);
	}
	else if(time==5)
	{
		HAL_GPIO_WritePin(P_1_GPIO_Port, P_1_Pin, RESET);
		HAL_GPIO_WritePin(P_2_GPIO_Port, P_2_Pin, SET);
		HAL_GPIO_WritePin(P_3_GPIO_Port, P_3_Pin, RESET);
		HAL_GPIO_WritePin(P_4_GPIO_Port, P_4_Pin, RESET);
		HAL_GPIO_WritePin(P_5_GPIO_Port, P_5_Pin, SET);
		HAL_GPIO_WritePin(P_6_GPIO_Port, P_6_Pin, RESET);
		HAL_GPIO_WritePin(P_7_GPIO_Port, P_7_Pin, RESET);
	}
	else if(time==6)
	{
		HAL_GPIO_WritePin(P_1_GPIO_Port, P_1_Pin, RESET);
		HAL_GPIO_WritePin(P_2_GPIO_Port, P_2_Pin, SET);
		HAL_GPIO_WritePin(P_3_GPIO_Port, P_3_Pin, RESET);
		HAL_GPIO_WritePin(P_4_GPIO_Port, P_4_Pin, RESET);
		HAL_GPIO_WritePin(P_5_GPIO_Port, P_5_Pin, RESET);
		HAL_GPIO_WritePin(P_6_GPIO_Port, P_6_Pin, RESET);
		HAL_GPIO_WritePin(P_7_GPIO_Port, P_7_Pin, RESET);
	}
	else if(time==7)
	{
		HAL_GPIO_WritePin(P_1_GPIO_Port, P_1_Pin, RESET);
		HAL_GPIO_WritePin(P_2_GPIO_Port, P_2_Pin, RESET);
		HAL_GPIO_WritePin(P_3_GPIO_Port, P_3_Pin, RESET);
		HAL_GPIO_WritePin(P_4_GPIO_Port, P_4_Pin, SET);
		HAL_GPIO_WritePin(P_5_GPIO_Port, P_5_Pin, SET);
		HAL_GPIO_WritePin(P_6_GPIO_Port, P_6_Pin, SET);
		HAL_GPIO_WritePin(P_7_GPIO_Port, P_7_Pin, SET);
	}
	else if(time==8)
	{
		HAL_GPIO_WritePin(P_1_GPIO_Port, P_1_Pin, RESET);
		HAL_GPIO_WritePin(P_2_GPIO_Port, P_2_Pin, RESET);
		HAL_GPIO_WritePin(P_3_GPIO_Port, P_3_Pin, RESET);
		HAL_GPIO_WritePin(P_4_GPIO_Port, P_4_Pin, RESET);
		HAL_GPIO_WritePin(P_5_GPIO_Port, P_5_Pin, RESET);
		HAL_GPIO_WritePin(P_6_GPIO_Port, P_6_Pin, RESET);
		HAL_GPIO_WritePin(P_7_GPIO_Port, P_7_Pin, RESET);
	}
	else if(time==9)
	{
		HAL_GPIO_WritePin(P_1_GPIO_Port, P_1_Pin, RESET);
		HAL_GPIO_WritePin(P_2_GPIO_Port, P_2_Pin, RESET);
		HAL_GPIO_WritePin(P_3_GPIO_Port, P_3_Pin, RESET);
		HAL_GPIO_WritePin(P_4_GPIO_Port, P_4_Pin, RESET);
		HAL_GPIO_WritePin(P_5_GPIO_Port, P_5_Pin, SET);
		HAL_GPIO_WritePin(P_6_GPIO_Port, P_6_Pin, RESET);
		HAL_GPIO_WritePin(P_7_GPIO_Port, P_7_Pin, RESET);
	}
}
