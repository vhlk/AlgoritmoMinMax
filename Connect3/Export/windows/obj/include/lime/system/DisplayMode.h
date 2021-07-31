// Generated by Haxe 4.2.0
#ifndef INCLUDED_lime_system_DisplayMode
#define INCLUDED_lime_system_DisplayMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_bad5236c57cf1a4a_32_new)
HX_DECLARE_CLASS2(lime,_hx_system,DisplayMode)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES DisplayMode_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DisplayMode_obj OBJ_;
		DisplayMode_obj();

	public:
		enum { _hx_ClassId = 0x431bb6fd };

		void __construct(int width,int height,int refreshRate,int pixelFormat);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.system.DisplayMode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.system.DisplayMode"); }

		inline static ::hx::ObjectPtr< DisplayMode_obj > __new(int width,int height,int refreshRate,int pixelFormat) {
			::hx::ObjectPtr< DisplayMode_obj > __this = new DisplayMode_obj();
			__this->__construct(width,height,refreshRate,pixelFormat);
			return __this;
		}

		inline static ::hx::ObjectPtr< DisplayMode_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height,int refreshRate,int pixelFormat) {
			DisplayMode_obj *__this = (DisplayMode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DisplayMode_obj), false, "lime.system.DisplayMode"));
			*(void **)__this = DisplayMode_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_bad5236c57cf1a4a_32_new)
HXLINE(  33)		( ( ::lime::_hx_system::DisplayMode)(__this) )->width = width;
HXLINE(  34)		( ( ::lime::_hx_system::DisplayMode)(__this) )->height = height;
HXLINE(  35)		( ( ::lime::_hx_system::DisplayMode)(__this) )->refreshRate = refreshRate;
HXLINE(  36)		( ( ::lime::_hx_system::DisplayMode)(__this) )->pixelFormat = pixelFormat;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DisplayMode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DisplayMode",a5,0a,86,14); }

		int height;
		int pixelFormat;
		int refreshRate;
		int width;
};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_DisplayMode */ 
