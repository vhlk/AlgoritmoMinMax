// Generated by Haxe 4.2.0
#ifndef INCLUDED_haxe_ui_binding_BindingInfo
#define INCLUDED_haxe_ui_binding_BindingInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,binding,BindingInfo)
HX_DECLARE_CLASS3(haxe,ui,binding,PropertyInfo)

namespace haxe{
namespace ui{
namespace binding{


class HXCPP_CLASS_ATTRIBUTES BindingInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BindingInfo_obj OBJ_;
		BindingInfo_obj();

	public:
		enum { _hx_ClassId = 0x7c741b10 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.binding.BindingInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.binding.BindingInfo"); }
		static ::hx::ObjectPtr< BindingInfo_obj > __new();
		static ::hx::ObjectPtr< BindingInfo_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BindingInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BindingInfo",33,0e,bc,9b); }

		 ::haxe::ds::StringMap props;
		 ::haxe::ui::binding::PropertyInfo addProp(::String name,::String script);
		::Dynamic addProp_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace binding

#endif /* INCLUDED_haxe_ui_binding_BindingInfo */ 
