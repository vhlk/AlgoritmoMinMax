// Generated by Haxe 4.2.0
#ifndef INCLUDED_haxe_ui_containers_SplitterEvents
#define INCLUDED_haxe_ui_containers_SplitterEvents

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,Splitter)
HX_DECLARE_CLASS3(haxe,ui,containers,SplitterEvents)
HX_DECLARE_CLASS4(haxe,ui,containers,_Splitter,SizerGripper)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,IDirectionalComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,events,Events)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,geom,Point)
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


class HXCPP_CLASS_ATTRIBUTES SplitterEvents_obj : public  ::haxe::ui::events::Events_obj
{
	public:
		typedef  ::haxe::ui::events::Events_obj super;
		typedef SplitterEvents_obj OBJ_;
		SplitterEvents_obj();

	public:
		enum { _hx_ClassId = 0x51675034 };

		void __construct( ::haxe::ui::containers::Splitter splitter);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.SplitterEvents")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.SplitterEvents"); }
		static ::hx::ObjectPtr< SplitterEvents_obj > __new( ::haxe::ui::containers::Splitter splitter);
		static ::hx::ObjectPtr< SplitterEvents_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::Splitter splitter);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SplitterEvents_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SplitterEvents",e0,bd,fb,d1); }

		 ::haxe::ui::containers::Splitter _splitter;
		void _hx_register();

		void unregister();

		 ::haxe::ui::containers::_Splitter::SizerGripper _currentGripper;
		 ::haxe::ui::geom::Point _currentOffset;
		virtual void onGripperMouseDown( ::haxe::ui::events::MouseEvent event);
		::Dynamic onGripperMouseDown_dyn();

		void onScreenMouseMove( ::haxe::ui::events::MouseEvent event);
		::Dynamic onScreenMouseMove_dyn();

		virtual void handleResize( ::haxe::ui::core::Component prev, ::haxe::ui::core::Component next, ::haxe::ui::events::MouseEvent event);
		::Dynamic handleResize_dyn();

		void onScreenMouseUp( ::haxe::ui::events::MouseEvent event);
		::Dynamic onScreenMouseUp_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_SplitterEvents */ 
