// Generated by Haxe 4.2.0
#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_pack_reverse_row_order
#define INCLUDED_lime_graphics_opengl_ext_ANGLE_pack_reverse_row_order

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c1c02b5b920f81ba_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,ANGLE_pack_reverse_row_order)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES ANGLE_pack_reverse_row_order_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ANGLE_pack_reverse_row_order_obj OBJ_;
		ANGLE_pack_reverse_row_order_obj();

	public:
		enum { _hx_ClassId = 0x1182a038 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.ANGLE_pack_reverse_row_order")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.ANGLE_pack_reverse_row_order"); }

		inline static ::hx::ObjectPtr< ANGLE_pack_reverse_row_order_obj > __new() {
			::hx::ObjectPtr< ANGLE_pack_reverse_row_order_obj > __this = new ANGLE_pack_reverse_row_order_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ANGLE_pack_reverse_row_order_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ANGLE_pack_reverse_row_order_obj *__this = (ANGLE_pack_reverse_row_order_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ANGLE_pack_reverse_row_order_obj), false, "lime.graphics.opengl.ext.ANGLE_pack_reverse_row_order"));
			*(void **)__this = ANGLE_pack_reverse_row_order_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c1c02b5b920f81ba_6_new)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::ANGLE_pack_reverse_row_order)(__this) )->PACK_REVERSE_ROW_ORDER_ANGLE = 37796;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ANGLE_pack_reverse_row_order_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ANGLE_pack_reverse_row_order",f2,1c,e0,65); }

		int PACK_REVERSE_ROW_ORDER_ANGLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_ANGLE_pack_reverse_row_order */ 
