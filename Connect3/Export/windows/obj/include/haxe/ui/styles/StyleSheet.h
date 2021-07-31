// Generated by Haxe 4.2.0
#ifndef INCLUDED_haxe_ui_styles_StyleSheet
#define INCLUDED_haxe_ui_styles_StyleSheet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,styles,StyleSheet)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,AnimationKeyFrames)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,ImportElement)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,MediaQuery)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,RuleElement)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace haxe{
namespace ui{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES StyleSheet_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StyleSheet_obj OBJ_;
		StyleSheet_obj();

	public:
		enum { _hx_ClassId = 0x7eedea6a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.StyleSheet")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.StyleSheet"); }
		static ::hx::ObjectPtr< StyleSheet_obj > __new();
		static ::hx::ObjectPtr< StyleSheet_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StyleSheet_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StyleSheet",ce,3f,c7,f2); }

		::String name;
		::Array< ::Dynamic> _imports;
		::Array< ::Dynamic> _rules;
		::Array< ::Dynamic> _mediaQueries;
		 ::haxe::ds::StringMap _animations;
		 ::haxe::ds::StringMap get_animations();
		::Dynamic get_animations_dyn();

		void addImport( ::haxe::ui::styles::elements::ImportElement el);
		::Dynamic addImport_dyn();

		::Array< ::Dynamic> imports;
		::Array< ::Dynamic> get_imports();
		::Dynamic get_imports_dyn();

		::Array< ::Dynamic> rules;
		::Array< ::Dynamic> get_rules();
		::Dynamic get_rules_dyn();

		 ::haxe::ui::styles::elements::RuleElement findRule(::String selector);
		::Dynamic findRule_dyn();

		void removeRule(::String selector);
		::Dynamic removeRule_dyn();

		void removeAllRules();
		::Dynamic removeAllRules_dyn();

		void clear();
		::Dynamic clear_dyn();

		void addRule( ::haxe::ui::styles::elements::RuleElement el);
		::Dynamic addRule_dyn();

		void addMediaQuery( ::haxe::ui::styles::elements::MediaQuery el);
		::Dynamic addMediaQuery_dyn();

		void addAnimation( ::haxe::ui::styles::elements::AnimationKeyFrames el);
		::Dynamic addAnimation_dyn();

		void parse(::String css);
		::Dynamic parse_dyn();

		void merge( ::haxe::ui::styles::StyleSheet styleSheet);
		::Dynamic merge_dyn();

		 ::haxe::ui::styles::Style buildStyleFor( ::haxe::ui::core::Component c, ::haxe::ui::styles::Style style);
		::Dynamic buildStyleFor_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_StyleSheet */ 
