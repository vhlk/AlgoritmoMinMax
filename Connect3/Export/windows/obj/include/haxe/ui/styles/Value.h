// Generated by Haxe 4.2.0
#ifndef INCLUDED_haxe_ui_styles_Value
#define INCLUDED_haxe_ui_styles_Value

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,Dimension)
HX_DECLARE_CLASS3(haxe,ui,styles,Value)
namespace haxe{
namespace ui{
namespace styles{


class Value_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Value_obj OBJ_;

	public:
		Value_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("haxe.ui.styles.Value",17,3a,64,46); }
		::String __ToString() const { return HX_("Value.",bd,77,4b,84) + _hx_tag; }

		static ::haxe::ui::styles::Value VBool(bool v);
		static ::Dynamic VBool_dyn();
		static ::haxe::ui::styles::Value VCall(::String f,::Array< ::Dynamic> vl);
		static ::Dynamic VCall_dyn();
		static ::haxe::ui::styles::Value VColor(int v);
		static ::Dynamic VColor_dyn();
		static ::haxe::ui::styles::Value VComposite(::Array< ::Dynamic> vl);
		static ::Dynamic VComposite_dyn();
		static ::haxe::ui::styles::Value VConstant(::String v);
		static ::Dynamic VConstant_dyn();
		static ::haxe::ui::styles::Value VDimension( ::haxe::ui::styles::Dimension v);
		static ::Dynamic VDimension_dyn();
		static ::haxe::ui::styles::Value VNone;
		static inline ::haxe::ui::styles::Value VNone_dyn() { return VNone; }
		static ::haxe::ui::styles::Value VNumber(Float v);
		static ::Dynamic VNumber_dyn();
		static ::haxe::ui::styles::Value VString(::String v);
		static ::Dynamic VString_dyn();
		static ::haxe::ui::styles::Value VTime(Float v,::String unit);
		static ::Dynamic VTime_dyn();
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_Value */ 
