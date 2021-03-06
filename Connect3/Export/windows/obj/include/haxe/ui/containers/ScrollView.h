// Generated by Haxe 4.2.0
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#define INCLUDED_haxe_ui_containers_ScrollView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
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


class HXCPP_CLASS_ATTRIBUTES ScrollView_obj : public  ::haxe::ui::core::Component_obj
{
	public:
		typedef  ::haxe::ui::core::Component_obj super;
		typedef ScrollView_obj OBJ_;
		ScrollView_obj();

	public:
		enum { _hx_ClassId = 0x433ebabe };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.ScrollView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.ScrollView"); }
		static ::hx::ObjectPtr< ScrollView_obj > __new();
		static ::hx::ObjectPtr< ScrollView_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScrollView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScrollView",32,c5,bf,02); }

		void validateComponentInternal(::hx::Null< bool >  nextFrame);

		void ensureVisible( ::haxe::ui::core::Component component);
		::Dynamic ensureVisible_dyn();

		virtual void registerComposite();

		virtual void registerBehaviours();

		bool get_virtual();
		::Dynamic get_virtual_dyn();

		bool set_virtual(bool value);
		::Dynamic set_virtual_dyn();

		::String get_contentLayoutName();
		::Dynamic get_contentLayoutName_dyn();

		::String set_contentLayoutName(::String value);
		::Dynamic set_contentLayoutName_dyn();

		Float get_contentWidth();
		::Dynamic get_contentWidth_dyn();

		Float set_contentWidth(Float value);
		::Dynamic set_contentWidth_dyn();

		Float get_percentContentWidth();
		::Dynamic get_percentContentWidth_dyn();

		Float set_percentContentWidth(Float value);
		::Dynamic set_percentContentWidth_dyn();

		Float get_contentHeight();
		::Dynamic get_contentHeight_dyn();

		Float set_contentHeight(Float value);
		::Dynamic set_contentHeight_dyn();

		Float get_percentContentHeight();
		::Dynamic get_percentContentHeight_dyn();

		Float set_percentContentHeight(Float value);
		::Dynamic set_percentContentHeight_dyn();

		Float get_hscrollPos();
		::Dynamic get_hscrollPos_dyn();

		Float set_hscrollPos(Float value);
		::Dynamic set_hscrollPos_dyn();

		Float get_hscrollMax();
		::Dynamic get_hscrollMax_dyn();

		Float set_hscrollMax(Float value);
		::Dynamic set_hscrollMax_dyn();

		Float get_hscrollPageSize();
		::Dynamic get_hscrollPageSize_dyn();

		Float set_hscrollPageSize(Float value);
		::Dynamic set_hscrollPageSize_dyn();

		Float get_vscrollPos();
		::Dynamic get_vscrollPos_dyn();

		Float set_vscrollPos(Float value);
		::Dynamic set_vscrollPos_dyn();

		Float get_vscrollMax();
		::Dynamic get_vscrollMax_dyn();

		Float set_vscrollMax(Float value);
		::Dynamic set_vscrollMax_dyn();

		Float get_vscrollPageSize();
		::Dynamic get_vscrollPageSize_dyn();

		Float set_vscrollPageSize(Float value);
		::Dynamic set_vscrollPageSize_dyn();

		::String get_scrollMode();
		::Dynamic get_scrollMode_dyn();

		::String set_scrollMode(::String value);
		::Dynamic set_scrollMode_dyn();

		 ::haxe::ui::core::Component get_contents();
		::Dynamic get_contents_dyn();

		 ::haxe::ui::core::Component set_contents( ::haxe::ui::core::Component value);
		::Dynamic set_contents_dyn();

		virtual  ::haxe::ui::core::ComponentContainer cloneComponent();

		virtual  ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_ScrollView */ 
