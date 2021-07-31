// Generated by Haxe 4.2.0
#ifndef INCLUDED_openfl_display_GraphicsSolidFill
#define INCLUDED_openfl_display_GraphicsSolidFill

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
HX_DECLARE_CLASS2(openfl,display,GraphicsSolidFill)
HX_DECLARE_CLASS2(openfl,display,IGraphicsData)
HX_DECLARE_CLASS2(openfl,display,IGraphicsFill)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES GraphicsSolidFill_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GraphicsSolidFill_obj OBJ_;
		GraphicsSolidFill_obj();

	public:
		enum { _hx_ClassId = 0x1fa34595 };

		void __construct(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display.GraphicsSolidFill")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display.GraphicsSolidFill"); }
		static ::hx::ObjectPtr< GraphicsSolidFill_obj > __new(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha);
		static ::hx::ObjectPtr< GraphicsSolidFill_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GraphicsSolidFill_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("GraphicsSolidFill",e3,55,be,a3); }

		Float alpha;
		int color;
		int _hx___graphicsDataType;
		int _hx___graphicsFillType;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_GraphicsSolidFill */ 
