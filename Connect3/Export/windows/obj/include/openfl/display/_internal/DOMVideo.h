// Generated by Haxe 4.2.0
#ifndef INCLUDED_openfl_display__internal_DOMVideo
#define INCLUDED_openfl_display__internal_DOMVideo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DOMRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display,_internal,DOMVideo)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Video)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES DOMVideo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DOMVideo_obj OBJ_;
		DOMVideo_obj();

	public:
		enum { _hx_ClassId = 0x4252a2ab };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.DOMVideo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.DOMVideo"); }

		inline static ::hx::ObjectPtr< DOMVideo_obj > __new() {
			::hx::ObjectPtr< DOMVideo_obj > __this = new DOMVideo_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DOMVideo_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DOMVideo_obj *__this = (DOMVideo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DOMVideo_obj), false, "openfl.display._internal.DOMVideo"));
			*(void **)__this = DOMVideo_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DOMVideo_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DOMVideo",b9,42,2a,9a); }

		static void __boot();
		static  ::Dynamic __meta__;
		static void clear( ::openfl::media::Video video, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic clear_dyn();

		static void render( ::openfl::media::Video video, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderDrawable( ::openfl::media::Video video, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableClear( ::openfl::media::Video video, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic renderDrawableClear_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_DOMVideo */ 