#include "../include/Logger.hpp"

#include<iostream>

Logger::Logger()
{
}

Logger& Logger::getInstance()
{
	static Logger instance;
	return instance;
}

void Logger::log( const std::string strMsg )
{
	std::cout << strMsg << std::endl;
}