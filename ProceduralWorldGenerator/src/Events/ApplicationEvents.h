#pragma once

#include "Event.h"

class WindowResizeEvent : public Event
{
public:
	WindowResizeEvent(uint16_t width, uint16_t height)
		: m_Width(width), m_Height(height)
	{
	}

	inline uint16_t GetWidth() const { return m_Width; }
	inline uint16_t GetHeight() const { return m_Height; }

	std::string ToString() const override
	{
		std::stringstream ss;
		ss << "WindowResizeEvent: " << m_Width << ", " << m_Height;
		return ss.str();
	}

	static EventType GetStaticType() { return EventType::WindowResize; }
	EventType GetEventType() const override { return GetStaticType(); }
	const char* GetName() const override { return "WindowResize"; }
	int GetCategoryFlags() const override { return EventCategoryApplication; }

private:
	uint16_t m_Width, m_Height;
};

class WindowCloseEvent : public Event
{
public:
	WindowCloseEvent() = default;

	static EventType GetStaticType() { return EventType::WindowClose; }
	EventType GetEventType() const override { return GetStaticType(); }
	const char* GetName() const override { return "WindowClose"; }
	int GetCategoryFlags() const override { return EventCategoryApplication; }

};

class AppTickEvent : public Event
{
public:
	AppTickEvent() = default;

	static EventType GetStaticType() { return EventType::AppTick; }
	EventType GetEventType() const override { return GetStaticType(); }
	const char* GetName() const override { return "AppTick"; }
	int GetCategoryFlags() const override { return EventCategoryApplication; }

};

class AppUpdateEvent : public Event
{
public:
	AppUpdateEvent() = default;

	static EventType GetStaticType() { return EventType::AppTick; }
	EventType GetEventType() const override { return GetStaticType(); }
	const char* GetName() const override { return "AppTick"; }
	int GetCategoryFlags() const override { return EventCategoryApplication; }

};

class AppRenderEvent : public Event
{
public:
	AppRenderEvent() = default;

	static EventType GetStaticType() { return EventType::AppRender; }
	EventType GetEventType() const override { return GetStaticType(); }
	const char* GetName() const override { return "AppRender"; }
	int GetCategoryFlags() const override { return EventCategoryApplication; }
};
