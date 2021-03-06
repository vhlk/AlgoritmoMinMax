// Generated by Haxe 4.2.0
#ifndef INCLUDED_haxe_ui_containers_SplitterBuilder
#define INCLUDED_haxe_ui_containers_SplitterBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,Splitter)
HX_DECLARE_CLASS3(haxe,ui,containers,SplitterBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,CompositeBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,IDirectionalComponent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
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
namespace containers{


class HXCPP_CLASS_ATTRIBUTES SplitterBuilder_obj : public  ::haxe::ui::core::CompositeBuilder_obj
{
	public:
		typedef  ::haxe::ui::core::CompositeBuilder_obj super;
		typedef SplitterBuilder_obj OBJ_;
		SplitterBuilder_obj();

	public:
		enum { _hx_ClassId = 0x22d44d84 };

		void __construct( ::haxe::ui::containers::Splitter splitter);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.SplitterBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.SplitterBuilder"); }
		static ::hx::ObjectPtr< SplitterBuilder_obj > __new( ::haxe::ui::containers::Splitter splitter);
		static ::hx::ObjectPtr< SplitterBuilder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::Splitter splitter);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SplitterBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SplitterBuilder",74,5a,6a,53); }

		 ::haxe::ui::containers::Splitter _splitter;
		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		virtual ::String getSplitterClass();
		::Dynamic getSplitterClass_dyn();

		void onComponentShown( ::haxe::ui::events::UIEvent e);
		::Dynamic onComponentShown_dyn();

		void onComponentHidden( ::haxe::ui::events::UIEvent e);
		::Dynamic onComponentHidden_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_SplitterBuilder */ 
