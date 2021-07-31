// Generated by Haxe 4.2.0
#ifndef INCLUDED_haxe_ui_styles_animation_util_Actuator
#define INCLUDED_haxe_ui_styles_animation_util_Actuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,styles,animation,util,Actuator)
HX_DECLARE_CLASS5(haxe,ui,styles,animation,util,ActuatorOptions)
HX_DECLARE_CLASS5(haxe,ui,styles,animation,util,ColorPropertyDetails)
HX_DECLARE_CLASS5(haxe,ui,styles,animation,util,PropertyDetails)
HX_DECLARE_CLASS5(haxe,ui,styles,animation,util,StringPropertyDetails)

namespace haxe{
namespace ui{
namespace styles{
namespace animation{
namespace util{


class HXCPP_CLASS_ATTRIBUTES Actuator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Actuator_obj OBJ_;
		Actuator_obj();

	public:
		enum { _hx_ClassId = 0x2d51ba5f };

		void __construct( ::Dynamic target, ::Dynamic properties,Float duration, ::haxe::ui::styles::animation::util::ActuatorOptions options);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.animation.util.Actuator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.animation.util.Actuator"); }
		static ::hx::ObjectPtr< Actuator_obj > __new( ::Dynamic target, ::Dynamic properties,Float duration, ::haxe::ui::styles::animation::util::ActuatorOptions options);
		static ::hx::ObjectPtr< Actuator_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic target, ::Dynamic properties,Float duration, ::haxe::ui::styles::animation::util::ActuatorOptions options);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Actuator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Actuator",59,b9,59,9a); }

		static  ::haxe::ui::styles::animation::util::Actuator tween( ::Dynamic target, ::Dynamic properties,Float duration, ::haxe::ui::styles::animation::util::ActuatorOptions options);
		static ::Dynamic tween_dyn();

		 ::Dynamic target;
		 ::Dynamic properties;
		Float duration;
		Float delay;
		void stop();
		::Dynamic stop_dyn();

		void run();
		::Dynamic run_dyn();

		Float _currentTime;
		 ::Dynamic _easeFunc;
		Dynamic _easeFunc_dyn() { return _easeFunc;}
		 ::Dynamic _onComplete;
		Dynamic _onComplete_dyn() { return _onComplete;}
		 ::Dynamic _onUpdate;
		Dynamic _onUpdate_dyn() { return _onUpdate;}
		bool _stopped;
		::Array< ::Dynamic> _propertyDetails;
		::Array< ::Dynamic> _colorPropertyDetails;
		::Array< ::Dynamic> _stringPropertyDetails;
		void _initialize();
		::Dynamic _initialize_dyn();

		void _nextFrame();
		::Dynamic _nextFrame_dyn();

		void _apply(Float position);
		::Dynamic _apply_dyn();

		void _finish();
		::Dynamic _finish_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation
} // end namespace util

#endif /* INCLUDED_haxe_ui_styles_animation_util_Actuator */ 
