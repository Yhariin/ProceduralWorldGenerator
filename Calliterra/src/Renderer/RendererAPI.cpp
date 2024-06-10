#include "pch.h"
#include "RendererAPI.h"

#include "Platform/DX11/DX11RendererAPI.h"

RendererAPI::API RendererAPI::s_API = RendererAPI::API::DX11;

std::unique_ptr<RendererAPI>RendererAPI::Create()
{
	switch (s_API)
	{
	case RendererAPI::API::None: 
		//TODO Throw Assert here
		LOG_ERROR("RendererAPI::None");
		return nullptr;
	case RendererAPI::API::DX11:
		return std::make_unique<DX11RendererAPI>();
	}

	LOG_ERROR("Unknown RendererAPI");
	return nullptr;
	
}