// Generated by Haxe 4.2.0
#ifndef INCLUDED_haxe_ui_parsers_ui_LayoutInfo
#define INCLUDED_haxe_ui_parsers_ui_LayoutInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,parsers,ui,LayoutInfo)

namespace haxe{
namespace ui{
namespace parsers{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES LayoutInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LayoutInfo_obj OBJ_;
		LayoutInfo_obj();

	public:
		enum { _hx_ClassId = 0x2a9eea02 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.ui.LayoutInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.ui.LayoutInfo"); }
		static ::hx::ObjectPtr< LayoutInfo_obj > __new();
		static ::hx::ObjectPtr< LayoutInfo_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LayoutInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LayoutInfo",58,b4,0b,d7); }

		::String type;
		 ::haxe::ds::StringMap properties;
};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui

#endif /* INCLUDED_haxe_ui_parsers_ui_LayoutInfo */ 
