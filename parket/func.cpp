#include <Windows.h>


namespace 
{

	struct resultValue
	{
		double quantityByLength;
		double quantityByWidth;
		double restLength;
		double restWidth;
		double total;
	};
	resultValue returnValueG(int length, int width, int boardLength, int boardWidth)
	{
		resultValue returnValue;
		returnValue.quantityByLength = length / boardLength;
		returnValue.quantityByWidth = width / boardWidth;
		returnValue.restLength = length - (boardLength * length / boardLength);
		returnValue.restWidth = width - (boardWidth * width / boardWidth);
		returnValue.total = length / boardLength * width / boardWidth;
		return returnValue;
	};
	resultValue returnValueW(int length, int width, int boardLength, int boardWidth)
	{
		resultValue returnValue;
		returnValue.quantityByLength = length / boardWidth;
		returnValue.quantityByWidth = width / boardLength;
		returnValue.restLength = length - (boardWidth * length / boardWidth);
		returnValue.restWidth = width - (boardLength * width / boardLength);
		returnValue.total = length / boardWidth * width / boardLength;
		return returnValue;
	};
}
