#ifndef TimeConversionUtils_h__
#define TimeConversionUtils_h__ 1

// =================================================================================================
// ADOBE SYSTEMS INCORPORATED
// Copyright 2014 Adobe Systems Incorporated
// All Rights Reserved
//
// NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance with the terms
// of the Adobe license agreement accompanying it.
// =================================================================================================

#include "public/include/XMP_Environment.h"	// ! XMP_Environment.h must be the first included header.
#include "public/include/XMP_Const.h"

#include "XMPFiles/source/XMPFiles_Impl.hpp"

namespace TimeConversionUtils {
	bool ConvertSamplesToSMPTETimecode(
		std::string &		outTimecode,
		XMP_Int64			inSamples,
		XMP_Uns64			inSampleRate,
		const std::string & inTimecodeFormat );

	bool ConvertSMPTETimecodeToSamples(
		XMP_Int64 &			outSamples,
		const std::string & inTimecode,
		XMP_Uns64			inSampleRate,
		const std::string & inTimecodeFormat
		);


};

#endif // TimeConversionUtils_h__
