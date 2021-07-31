// Generated by Haxe 4.2.0
#ifndef INCLUDED_haxe_ui_styles_elements_AnimationKeyFrames
#define INCLUDED_haxe_ui_styles_elements_AnimationKeyFrames

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,styles,elements,AnimationKeyFrame)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,AnimationKeyFrames)

namespace haxe{
namespace ui{
namespace styles{
namespace elements{


class HXCPP_CLASS_ATTRIBUTES AnimationKeyFrames_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AnimationKeyFrames_obj OBJ_;
		AnimationKeyFrames_obj();

	public:
		enum { _hx_ClassId = 0x04dbef80 };

		void __construct(::String id,::Array< ::Dynamic> keyframes);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.elements.AnimationKeyFrames")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.elements.AnimationKeyFrames"); }
		static ::hx::ObjectPtr< AnimationKeyFrames_obj > __new(::String id,::Array< ::Dynamic> keyframes);
		static ::hx::ObjectPtr< AnimationKeyFrames_obj > __alloc(::hx::Ctx *_hx_ctx,::String id,::Array< ::Dynamic> keyframes);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimationKeyFrames_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimationKeyFrames",21,43,41,cf); }

		::String id;
		::Array< ::Dynamic> _keyframes;
		::Array< ::Dynamic> keyFrames;
		::Array< ::Dynamic> get_keyFrames();
		::Dynamic get_keyFrames_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace elements

#endif /* INCLUDED_haxe_ui_styles_elements_AnimationKeyFrames */ 
