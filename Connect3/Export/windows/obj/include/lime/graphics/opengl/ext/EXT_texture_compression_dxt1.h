// Generated by Haxe 4.2.0
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_compression_dxt1
#define INCLUDED_lime_graphics_opengl_ext_EXT_texture_compression_dxt1

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_b718990e202eab9f_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_texture_compression_dxt1)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_texture_compression_dxt1_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_texture_compression_dxt1_obj OBJ_;
		EXT_texture_compression_dxt1_obj();

	public:
		enum { _hx_ClassId = 0x02b37796 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_texture_compression_dxt1")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_texture_compression_dxt1"); }

		inline static ::hx::ObjectPtr< EXT_texture_compression_dxt1_obj > __new() {
			::hx::ObjectPtr< EXT_texture_compression_dxt1_obj > __this = new EXT_texture_compression_dxt1_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_texture_compression_dxt1_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_texture_compression_dxt1_obj *__this = (EXT_texture_compression_dxt1_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_texture_compression_dxt1_obj), false, "lime.graphics.opengl.ext.EXT_texture_compression_dxt1"));
			*(void **)__this = EXT_texture_compression_dxt1_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_b718990e202eab9f_4_new)
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_texture_compression_dxt1)(__this) )->COMPRESSED_RGBA_S3TC_DXT1_EXT = 33777;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::EXT_texture_compression_dxt1)(__this) )->COMPRESSED_RGB_S3TC_DXT1_EXT = 33776;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_texture_compression_dxt1_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_texture_compression_dxt1",6c,ae,f4,76); }

		int COMPRESSED_RGB_S3TC_DXT1_EXT;
		int COMPRESSED_RGBA_S3TC_DXT1_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_texture_compression_dxt1 */ 
