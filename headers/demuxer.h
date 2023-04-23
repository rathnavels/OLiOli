#pragma once
#include <string>

extern "C"
{
#include "libavformat/avformat.h"
}

class Demuxer
{
public:
	Demuxer(const std::string& file_name);
	~Demuxer();

	AVCodecParameters* video_codec_parameter();
	AVRational time_base();

	int video_stream_index();
	bool operator()(AVPacket& packet);
	
private:
	AVFormatContext* format_context_{};
	int video_stream_index_{};
};