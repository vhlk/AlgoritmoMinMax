// Generated by Haxe 4.2.0
#ifndef INCLUDED_haxe_ui_containers__VerticalSplitter_VerticalSplitterEvents
#define INCLUDED_haxe_ui_containers__VerticalSplitter_VerticalSplitterEvents

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_SplitterEvents
#include <haxe/ui/containers/SplitterEvents.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,Splitter)
HX_DECLARE_CLASS3(haxe,ui,containers,SplitterEvents)
HX_DECLARE_CLASS4(haxe,ui,containers,_VerticalSplitter,VerticalSplitterEvents)
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
HX_DECLARE_CLASS3(haxe,ui,events,Events)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
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
namespace _VerticalSplitter{


class HXCPP_CLASS_ATTRIBUTES VerticalSplitterEvents_obj : public  ::haxe::ui::containers::SplitterEvents_obj
{
	public:
		typedef  ::haxe::ui::containers::SplitterEvents_obj super;
		typedef VerticalSplitterEvents_obj OBJ_;
		VerticalSplitterEvents_obj();

	public:
		enum { _hx_ClassId = 0x7607e63e };

		void __construct( ::haxe::ui::containers::Splitter splitter);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers._VerticalSplitter.VerticalSplitterEvents")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers._VerticalSplitter.VerticalSplitterEvents"); }
		static ::hx::ObjectPtr< VerticalSplitterEvents_obj > __new( ::haxe::ui::containers::Splitter splitter);
		static ::hx::ObjectPtr< VerticalSplitterEvents_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::Splitter splitter);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VerticalSplitterEvents_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VerticalSplitterEvents",f6,d0,54,c2); }

		void onGripperMouseDown( ::haxe::ui::events::MouseEvent event);

		void handleResize( ::haxe::ui::core::Component prev, ::haxe::ui::core::Component next, ::haxe::ui::events::MouseEvent event);

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _VerticalSplitter

#endif /* INCLUDED_haxe_ui_containers__VerticalSplitter_VerticalSplitterEvents */ 
