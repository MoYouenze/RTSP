/*****************************************************************************
* Copyright (C) 2017-2018 Hanson Yu  All rights reserved.
------------------------------------------------------------------------------
* File Module		: 	RtspClient.h
* Description		: 	RtspClient operation center
* Created			: 	2017.09.21.
* Author			: 	Yu Weifeng
* Function List		: 	
* Last Modified 	: 	
* History			: 	
******************************************************************************/
#ifndef RTSP_CLIENT_H
#define RTSP_CLIENT_H

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <map>
#include "TcpSocket.h"
#include "MediaSession.h"

using std::map;
using std::string;

#define RTSP_VERSION	"RTSP/1.0"
#define RTSP_ACK_OK	"RTSP/1.0 200 OK"

#define VIDEO_BUF_LEN	8192

/*****************************************************************************
-Class			: RtspClient
-Description	: 
* Modify Date	  Version		 Author 		  Modification
* -----------------------------------------------
* 2017/09/21	  V1.0.0		 Yu Weifeng 	  Created
******************************************************************************/
class RtspClient : public TcpSocket
{
public:
	RtspClient(char *i_strURL);
	~RtspClient();

	int Init();
	int SendDescribe();
	int HandleDescribeAck(string *o_pVideoTransProtocol,string *o_pTraceID);
	int SendSetup(string *i_pVideoTransProtocol,string *i_pTraceId,int i_iRtpPort);
	int HandleSetupAck(string *o_pSessionId,MediaSession *i_pMediaSession);
	int SendPlay(string *i_pSessionId);
	int HandlePlayAck();
	int GetVideoData(MediaSession *i_pMediaSession,unsigned char *o_VideoData,unsigned int *o_dwDataLen,unsigned int i_dwDataMaxLen);
	int SendTeardown(string *i_pSessionId);
	int HandleTeardownAck();
	
private:
	string m_URL; 	
	int m_iCSeq;
	int m_iRtpPort;
	string m_VideoEncodeFormat;//�ݲ�ʵ��
	int m_iPacketizationMode;//�ݲ�ʵ��
};




#endif
