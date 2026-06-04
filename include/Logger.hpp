#pragma once

#include <string>

class Logger
{
public:
	static Logger& getInstance();
	void log( const std::string strMsg );

private:
	Logger();
};