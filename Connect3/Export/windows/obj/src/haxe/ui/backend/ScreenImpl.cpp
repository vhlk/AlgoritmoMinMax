// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <haxe/ui/backend/TextInputImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_openfl_EventMapper
#include <haxe/ui/backend/openfl/EventMapper.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_events_KeyboardEvent
#include <haxe/ui/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7a615936dd15791e_15_new,"haxe.ui.backend.ScreenImpl","new",0x83c2272a,"haxe.ui.backend.ScreenImpl.new","haxe/ui/backend/ScreenImpl.hx",15,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_22_get_width,"haxe.ui.backend.ScreenImpl","get_width",0xddce9ca7,"haxe.ui.backend.ScreenImpl.get_width","haxe/ui/backend/ScreenImpl.hx",22,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_29_get_height,"haxe.ui.backend.ScreenImpl","get_height",0xed49ee26,"haxe.ui.backend.ScreenImpl.get_height","haxe/ui/backend/ScreenImpl.hx",29,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_37_get_dpi,"haxe.ui.backend.ScreenImpl","get_dpi",0xbe038fbe,"haxe.ui.backend.ScreenImpl.get_dpi","haxe/ui/backend/ScreenImpl.hx",37,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_41_get_focus,"haxe.ui.backend.ScreenImpl","get_focus",0x17f54679,"haxe.ui.backend.ScreenImpl.get_focus","haxe/ui/backend/ScreenImpl.hx",41,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_44_set_focus,"haxe.ui.backend.ScreenImpl","set_focus",0xfb463285,"haxe.ui.backend.ScreenImpl.set_focus","haxe/ui/backend/ScreenImpl.hx",44,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_53_set_title,"haxe.ui.backend.ScreenImpl","set_title",0x06f7e845,"haxe.ui.backend.ScreenImpl.set_title","haxe/ui/backend/ScreenImpl.hx",53,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_64_get_title,"haxe.ui.backend.ScreenImpl","get_title",0x23a6fc39,"haxe.ui.backend.ScreenImpl.get_title","haxe/ui/backend/ScreenImpl.hx",64,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_67_addComponent,"haxe.ui.backend.ScreenImpl","addComponent",0x6c819252,"haxe.ui.backend.ScreenImpl.addComponent","haxe/ui/backend/ScreenImpl.hx",67,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_78_removeComponent,"haxe.ui.backend.ScreenImpl","removeComponent",0xf4ece9a3,"haxe.ui.backend.ScreenImpl.removeComponent","haxe/ui/backend/ScreenImpl.hx",78,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_84_handleSetComponentIndex,"haxe.ui.backend.ScreenImpl","handleSetComponentIndex",0xc8d2ab59,"haxe.ui.backend.ScreenImpl.handleSetComponentIndex","haxe/ui/backend/ScreenImpl.hx",84,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_100_onContainerResize,"haxe.ui.backend.ScreenImpl","onContainerResize",0xb016d000,"haxe.ui.backend.ScreenImpl.onContainerResize","haxe/ui/backend/ScreenImpl.hx",100,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_114_get_container,"haxe.ui.backend.ScreenImpl","get_container",0x414dc062,"haxe.ui.backend.ScreenImpl.get_container","haxe/ui/backend/ScreenImpl.hx",114,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_136_supportsEvent,"haxe.ui.backend.ScreenImpl","supportsEvent",0x6f292f40,"haxe.ui.backend.ScreenImpl.supportsEvent","haxe/ui/backend/ScreenImpl.hx",136,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_144_mapEvent,"haxe.ui.backend.ScreenImpl","mapEvent",0xaff804d4,"haxe.ui.backend.ScreenImpl.mapEvent","haxe/ui/backend/ScreenImpl.hx",144,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_167_unmapEvent,"haxe.ui.backend.ScreenImpl","unmapEvent",0x6d4195ad,"haxe.ui.backend.ScreenImpl.unmapEvent","haxe/ui/backend/ScreenImpl.hx",167,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_183___onMouseEvent,"haxe.ui.backend.ScreenImpl","__onMouseEvent",0x33c7ca4a,"haxe.ui.backend.ScreenImpl.__onMouseEvent","haxe/ui/backend/ScreenImpl.hx",183,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_200___onKeyEvent,"haxe.ui.backend.ScreenImpl","__onKeyEvent",0x2e523d50,"haxe.ui.backend.ScreenImpl.__onKeyEvent","haxe/ui/backend/ScreenImpl.hx",200,0x18a34445)
HX_LOCAL_STACK_FRAME(_hx_pos_7a615936dd15791e_215___onStageResize,"haxe.ui.backend.ScreenImpl","__onStageResize",0x2a8b8f1d,"haxe.ui.backend.ScreenImpl.__onStageResize","haxe/ui/backend/ScreenImpl.hx",215,0x18a34445)
namespace haxe{
namespace ui{
namespace backend{

void ScreenImpl_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_7a615936dd15791e_15_new)
HXLINE( 112)		this->_containerReady = false;
HXLINE(  18)		super::__construct();
HXLINE(  19)		this->_mapping =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic ScreenImpl_obj::__CreateEmpty() { return new ScreenImpl_obj; }

void *ScreenImpl_obj::_hx_vtable = 0;

Dynamic ScreenImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScreenImpl_obj > _hx_result = new ScreenImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScreenImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7f344a3f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7f344a3f;
	} else {
		return inClassId==(int)0x7faef962;
	}
}

Float ScreenImpl_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_22_get_width)
HXLINE(  23)		 ::openfl::display::DisplayObjectContainer _hx_tmp = this->get_container();
HXDLIN(  23)		if (::hx::IsInstanceEq( _hx_tmp,::openfl::Lib_obj::get_current()->stage )) {
HXLINE(  24)			return ( (Float)(::openfl::Lib_obj::get_current()->stage->stageWidth) );
            		}
HXLINE(  26)		return this->get_container()->get_width();
            	}


Float ScreenImpl_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_29_get_height)
HXLINE(  30)		 ::openfl::display::DisplayObjectContainer _hx_tmp = this->get_container();
HXDLIN(  30)		if (::hx::IsInstanceEq( _hx_tmp,::openfl::Lib_obj::get_current()->stage )) {
HXLINE(  31)			return ( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) );
            		}
HXLINE(  33)		return this->get_container()->get_height();
            	}


Float ScreenImpl_obj::get_dpi(){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_37_get_dpi)
HXDLIN(  37)		return ::lime::_hx_system::System_obj::getDisplay(0)->dpi;
            	}


 ::haxe::ui::core::Component ScreenImpl_obj::get_focus(){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_41_get_focus)
HXDLIN(  41)		return ( ( ::haxe::ui::core::Component)(::openfl::Lib_obj::get_current()->stage->get_focus()) );
            	}


 ::haxe::ui::core::Component ScreenImpl_obj::set_focus( ::haxe::ui::core::Component value){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_44_set_focus)
HXLINE(  45)		bool _hx_tmp;
HXDLIN(  45)		if (::hx::IsNotNull( value )) {
HXLINE(  45)			_hx_tmp = value->hasTextInput();
            		}
            		else {
HXLINE(  45)			_hx_tmp = false;
            		}
HXDLIN(  45)		if (_hx_tmp) {
HXLINE(  46)			 ::openfl::display::Stage _hx_tmp = ::openfl::Lib_obj::get_current()->stage;
HXDLIN(  46)			_hx_tmp->set_focus(value->getTextInput()->textField);
            		}
            		else {
HXLINE(  48)			::openfl::Lib_obj::get_current()->stage->set_focus(value);
            		}
HXLINE(  50)		return value;
            	}


::String ScreenImpl_obj::set_title(::String s){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_53_set_title)
HXLINE(  57)		::openfl::Lib_obj::get_current()->stage->window->set_title(s);
HXLINE(  58)		return s;
            	}


::String ScreenImpl_obj::get_title(){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_64_get_title)
HXDLIN(  64)		return ::openfl::Lib_obj::get_current()->stage->window->_hx___title;
            	}


 ::haxe::ui::core::Component ScreenImpl_obj::addComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_67_addComponent)
HXLINE(  68)		component->set_scaleX(::haxe::ui::Toolkit_obj::get_scaleX());
HXLINE(  69)		component->set_scaleY(::haxe::ui::Toolkit_obj::get_scaleY());
HXLINE(  70)		if ((this->_topLevelComponents->indexOf(component,null()) == -1)) {
HXLINE(  71)			this->_topLevelComponents->push(component);
HXLINE(  72)			this->get_container()->addChild(component);
HXLINE(  73)			this->onContainerResize(null());
            		}
HXLINE(  75)		return component;
            	}


 ::haxe::ui::core::Component ScreenImpl_obj::removeComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_78_removeComponent)
HXLINE(  79)		this->_topLevelComponents->remove(component);
HXLINE(  80)		this->get_container()->removeChild(component);
HXLINE(  81)		return component;
            	}


void ScreenImpl_obj::handleSetComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_84_handleSetComponentIndex)
HXLINE(  85)		this->_topLevelComponents->remove(child);
HXLINE(  86)		this->_topLevelComponents->insert(index,child);
HXLINE(  88)		int offset = 0;
HXLINE(  89)		{
HXLINE(  89)			int _g = 0;
HXDLIN(  89)			int _g1 = this->get_container()->get_numChildren();
HXDLIN(  89)			while((_g < _g1)){
HXLINE(  89)				_g = (_g + 1);
HXDLIN(  89)				int i = (_g - 1);
HXLINE(  90)				 ::openfl::display::DisplayObject c = this->get_container()->getChildAt(i);
HXLINE(  91)				if (::Std_obj::isOfType(c,::hx::ClassOf< ::haxe::ui::core::Component >())) {
HXLINE(  92)					offset = i;
HXLINE(  93)					goto _hx_goto_10;
            				}
            			}
            			_hx_goto_10:;
            		}
HXLINE(  97)		this->get_container()->setChildIndex(child,(index + offset));
            	}


void ScreenImpl_obj::onContainerResize( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_100_onContainerResize)
HXLINE( 101)		{
HXLINE( 101)			int _g = 0;
HXDLIN( 101)			::Array< ::Dynamic> _g1 = this->_topLevelComponents;
HXDLIN( 101)			while((_g < _g1->length)){
HXLINE( 101)				 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 101)				_g = (_g + 1);
HXLINE( 102)				if (::hx::IsGreater( c->get_percentWidth(),0 )) {
HXLINE( 103)					Float _hx_tmp = this->get_width();
HXDLIN( 103)					c->set_width(((_hx_tmp * ( (Float)(c->get_percentWidth()) )) / ( (Float)(100) )));
            				}
HXLINE( 105)				if (::hx::IsGreater( c->get_percentHeight(),0 )) {
HXLINE( 106)					Float _hx_tmp = this->get_height();
HXDLIN( 106)					c->set_height(((_hx_tmp * ( (Float)(c->get_percentHeight()) )) / ( (Float)(100) )));
            				}
            			}
            		}
HXLINE( 109)		this->_hx___onStageResize();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenImpl_obj,onContainerResize,(void))

 ::openfl::display::DisplayObjectContainer ScreenImpl_obj::get_container(){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_114_get_container)
HXLINE( 115)		 ::openfl::display::Stage c = null();
HXLINE( 116)		bool _hx_tmp;
HXDLIN( 116)		if (::hx::IsNotNull( this->get_options() )) {
HXLINE( 116)			_hx_tmp = ::hx::IsNull( this->get_options()->__Field(HX_("container",41,75,73,bf),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 116)			_hx_tmp = true;
            		}
HXDLIN( 116)		if (_hx_tmp) {
HXLINE( 117)			c = ::openfl::Lib_obj::get_current()->stage;
            		}
            		else {
HXLINE( 119)			c = ( ( ::openfl::display::Stage)(this->get_options()->__Field(HX_("container",41,75,73,bf),::hx::paccDynamic)) );
            		}
HXLINE( 122)		if ((this->_containerReady == false)) {
HXLINE( 123)			c->stage->set_quality(0);
HXLINE( 124)			c->set_scaleMode(2);
HXLINE( 125)			c->align = 6;
HXLINE( 126)			c->addEventListener(HX_("resize",f4,59,7b,08),this->onContainerResize_dyn(),null(),null(),null());
HXLINE( 127)			this->_containerReady = true;
            		}
HXLINE( 130)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenImpl_obj,get_container,return )

bool ScreenImpl_obj::supportsEvent(::String type){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_136_supportsEvent)
HXLINE( 137)		if ((type == HX_("resize",f4,59,7b,08))) {
HXLINE( 138)			return true;
            		}
HXLINE( 140)		return ::hx::IsNotNull( ::haxe::ui::backend::openfl::EventMapper_obj::HAXEUI_TO_OPENFL->get(type) );
            	}


void ScreenImpl_obj::mapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_144_mapEvent)
HXDLIN( 144)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("keydown",81,3d,6e,b1)) ||  (_hx_switch_0==HX_("keyup",ba,d5,fe,de)) ){
HXLINE( 154)			if ((this->_mapping->exists(type) == false)) {
HXLINE( 155)				this->_mapping->set(type,listener);
HXLINE( 156)				 ::openfl::display::Stage _hx_tmp = ::openfl::Lib_obj::get_current()->stage;
HXDLIN( 156)				_hx_tmp->addEventListener(::haxe::ui::backend::openfl::EventMapper_obj::HAXEUI_TO_OPENFL->get_string(type),this->_hx___onKeyEvent_dyn(),null(),null(),null());
            			}
HXLINE( 154)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==HX_("resize",f4,59,7b,08)) ){
HXLINE( 160)			if ((this->_mapping->exists(type) == false)) {
HXLINE( 161)				this->_mapping->set(type,listener);
            			}
HXLINE( 160)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==HX_("click",48,7c,5e,48)) ||  (_hx_switch_0==HX_("doubleclick",97,93,48,3a)) ||  (_hx_switch_0==HX_("mousedown",07,85,e9,03)) ||  (_hx_switch_0==HX_("mousemove",b6,6f,dc,09)) ||  (_hx_switch_0==HX_("mouseout",89,2f,36,a4)) ||  (_hx_switch_0==HX_("mouseover",f9,1d,34,0b)) ||  (_hx_switch_0==HX_("mouseup",c0,0f,73,c0)) ||  (_hx_switch_0==HX_("rightclick",ec,f2,f5,b7)) ||  (_hx_switch_0==HX_("rightmousedown",ab,1d,2b,41)) ||  (_hx_switch_0==HX_("rightmouseup",64,77,d0,dd)) ){
HXLINE( 148)			if ((this->_mapping->exists(type) == false)) {
HXLINE( 149)				this->_mapping->set(type,listener);
HXLINE( 150)				 ::openfl::display::Stage _hx_tmp = ::openfl::Lib_obj::get_current()->stage;
HXDLIN( 150)				_hx_tmp->addEventListener(::haxe::ui::backend::openfl::EventMapper_obj::HAXEUI_TO_OPENFL->get_string(type),this->_hx___onMouseEvent_dyn(),null(),null(),null());
            			}
HXLINE( 148)			goto _hx_goto_16;
            		}
            		_hx_goto_16:;
            	}


void ScreenImpl_obj::unmapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_7a615936dd15791e_167_unmapEvent)
HXDLIN( 167)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("keydown",81,3d,6e,b1)) ||  (_hx_switch_0==HX_("keyup",ba,d5,fe,de)) ){
HXLINE( 175)			this->_mapping->remove(type);
HXLINE( 176)			 ::openfl::display::Stage _hx_tmp = ::openfl::Lib_obj::get_current()->stage;
HXDLIN( 176)			_hx_tmp->removeEventListener(::haxe::ui::backend::openfl::EventMapper_obj::HAXEUI_TO_OPENFL->get_string(type),this->_hx___onKeyEvent_dyn(),null());
HXLINE( 174)			goto _hx_goto_18;
            		}
            		if (  (_hx_switch_0==HX_("resize",f4,59,7b,08)) ){
HXLINE( 179)			this->_mapping->remove(type);
HXDLIN( 179)			goto _hx_goto_18;
            		}
            		if (  (_hx_switch_0==HX_("click",48,7c,5e,48)) ||  (_hx_switch_0==HX_("doubleclick",97,93,48,3a)) ||  (_hx_switch_0==HX_("mousedown",07,85,e9,03)) ||  (_hx_switch_0==HX_("mousemove",b6,6f,dc,09)) ||  (_hx_switch_0==HX_("mouseout",89,2f,36,a4)) ||  (_hx_switch_0==HX_("mouseover",f9,1d,34,0b)) ||  (_hx_switch_0==HX_("mouseup",c0,0f,73,c0)) ||  (_hx_switch_0==HX_("rightclick",ec,f2,f5,b7)) ||  (_hx_switch_0==HX_("rightmousedown",ab,1d,2b,41)) ||  (_hx_switch_0==HX_("rightmouseup",64,77,d0,dd)) ){
HXLINE( 171)			this->_mapping->remove(type);
HXLINE( 172)			 ::openfl::display::Stage _hx_tmp = ::openfl::Lib_obj::get_current()->stage;
HXDLIN( 172)			_hx_tmp->removeEventListener(::haxe::ui::backend::openfl::EventMapper_obj::HAXEUI_TO_OPENFL->get_string(type),this->_hx___onMouseEvent_dyn(),null());
HXLINE( 168)			goto _hx_goto_18;
            		}
            		_hx_goto_18:;
            	}


void ScreenImpl_obj::_hx___onMouseEvent( ::openfl::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_7a615936dd15791e_183___onMouseEvent)
HXLINE( 184)		::String type = ::haxe::ui::backend::openfl::EventMapper_obj::OPENFL_TO_HAXEUI->get_string(event->type);
HXLINE( 185)		if (::hx::IsNotNull( type )) {
HXLINE( 186)			 ::Dynamic fn = this->_mapping->get(type);
HXLINE( 187)			if (::hx::IsNotNull( fn )) {
HXLINE( 188)				 ::haxe::ui::events::MouseEvent mouseEvent =  ::haxe::ui::events::MouseEvent_obj::__alloc( HX_CTX ,type);
HXLINE( 189)				mouseEvent->_originalEvent = event;
HXLINE( 190)				Float event1 = event->stageX;
HXDLIN( 190)				mouseEvent->screenX = (event1 / ::haxe::ui::Toolkit_obj::get_scaleX());
HXLINE( 191)				Float event2 = event->stageY;
HXDLIN( 191)				mouseEvent->screenY = (event2 / ::haxe::ui::Toolkit_obj::get_scaleY());
HXLINE( 192)				mouseEvent->buttonDown = event->buttonDown;
HXLINE( 193)				mouseEvent->ctrlKey = event->ctrlKey;
HXLINE( 194)				mouseEvent->shiftKey = event->shiftKey;
HXLINE( 195)				fn(mouseEvent);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenImpl_obj,_hx___onMouseEvent,(void))

void ScreenImpl_obj::_hx___onKeyEvent( ::openfl::events::KeyboardEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_7a615936dd15791e_200___onKeyEvent)
HXLINE( 201)		::String type = ::haxe::ui::backend::openfl::EventMapper_obj::OPENFL_TO_HAXEUI->get_string(event->type);
HXLINE( 202)		if (::hx::IsNotNull( type )) {
HXLINE( 203)			 ::Dynamic fn = this->_mapping->get(type);
HXLINE( 204)			if (::hx::IsNotNull( fn )) {
HXLINE( 205)				 ::haxe::ui::events::KeyboardEvent keyboardEvent =  ::haxe::ui::events::KeyboardEvent_obj::__alloc( HX_CTX ,type);
HXLINE( 206)				keyboardEvent->_originalEvent = event;
HXLINE( 207)				keyboardEvent->keyCode = event->keyCode;
HXLINE( 208)				keyboardEvent->ctrlKey = event->ctrlKey;
HXLINE( 209)				keyboardEvent->shiftKey = event->shiftKey;
HXLINE( 210)				fn(keyboardEvent);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenImpl_obj,_hx___onKeyEvent,(void))

void ScreenImpl_obj::_hx___onStageResize(){
            	HX_GC_STACKFRAME(&_hx_pos_7a615936dd15791e_215___onStageResize)
HXLINE( 216)		::String type = HX_("resize",f4,59,7b,08);
HXLINE( 217)		if (::hx::IsNotNull( type )) {
HXLINE( 218)			 ::Dynamic fn = this->_mapping->get(type);
HXLINE( 219)			if (::hx::IsNotNull( fn )) {
HXLINE( 220)				 ::haxe::ui::events::UIEvent uiEvent =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,type,null(),null());
HXLINE( 221)				fn(uiEvent);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenImpl_obj,_hx___onStageResize,(void))


::hx::ObjectPtr< ScreenImpl_obj > ScreenImpl_obj::__new() {
	::hx::ObjectPtr< ScreenImpl_obj > __this = new ScreenImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ScreenImpl_obj > ScreenImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ScreenImpl_obj *__this = (ScreenImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScreenImpl_obj), true, "haxe.ui.backend.ScreenImpl"));
	*(void **)__this = ScreenImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScreenImpl_obj::ScreenImpl_obj()
{
}

void ScreenImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenImpl);
	HX_MARK_MEMBER_NAME(_mapping,"_mapping");
	HX_MARK_MEMBER_NAME(_containerReady,"_containerReady");
	HX_MARK_MEMBER_NAME(container,"container");
	 ::haxe::ui::backend::ScreenBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScreenImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_mapping,"_mapping");
	HX_VISIT_MEMBER_NAME(_containerReady,"_containerReady");
	HX_VISIT_MEMBER_NAME(container,"container");
	 ::haxe::ui::backend::ScreenBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScreenImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"get_dpi") ) { return ::hx::Val( get_dpi_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_mapping") ) { return ::hx::Val( _mapping ); }
		if (HX_FIELD_EQ(inName,"mapEvent") ) { return ::hx::Val( mapEvent_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_focus") ) { return ::hx::Val( get_focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return ::hx::Val( set_focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return ::hx::Val( set_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_title") ) { return ::hx::Val( get_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"container") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_container() : container ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"unmapEvent") ) { return ::hx::Val( unmapEvent_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"__onKeyEvent") ) { return ::hx::Val( _hx___onKeyEvent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_container") ) { return ::hx::Val( get_container_dyn() ); }
		if (HX_FIELD_EQ(inName,"supportsEvent") ) { return ::hx::Val( supportsEvent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__onMouseEvent") ) { return ::hx::Val( _hx___onMouseEvent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_containerReady") ) { return ::hx::Val( _containerReady ); }
		if (HX_FIELD_EQ(inName,"__onStageResize") ) { return ::hx::Val( _hx___onStageResize_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onContainerResize") ) { return ::hx::Val( onContainerResize_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"handleSetComponentIndex") ) { return ::hx::Val( handleSetComponentIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScreenImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_mapping") ) { _mapping=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { container=inValue.Cast<  ::openfl::display::DisplayObjectContainer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_containerReady") ) { _containerReady=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_mapping",8f,d4,32,7e));
	outFields->push(HX_("_containerReady",01,38,5f,e1));
	outFields->push(HX_("container",41,75,73,bf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScreenImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ScreenImpl_obj,_mapping),HX_("_mapping",8f,d4,32,7e)},
	{::hx::fsBool,(int)offsetof(ScreenImpl_obj,_containerReady),HX_("_containerReady",01,38,5f,e1)},
	{::hx::fsObject /*  ::openfl::display::DisplayObjectContainer */ ,(int)offsetof(ScreenImpl_obj,container),HX_("container",41,75,73,bf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScreenImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String ScreenImpl_obj_sMemberFields[] = {
	HX_("_mapping",8f,d4,32,7e),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("get_dpi",f4,0b,c1,26),
	HX_("get_focus",2f,bc,32,48),
	HX_("set_focus",3b,a8,83,2b),
	HX_("set_title",fb,5d,35,37),
	HX_("get_title",ef,71,e4,53),
	HX_("addComponent",5c,12,a8,0e),
	HX_("removeComponent",d9,8b,72,50),
	HX_("handleSetComponentIndex",8f,73,b6,f4),
	HX_("onContainerResize",b6,eb,f1,31),
	HX_("_containerReady",01,38,5f,e1),
	HX_("container",41,75,73,bf),
	HX_("get_container",18,49,d7,80),
	HX_("supportsEvent",f6,b7,b2,ae),
	HX_("mapEvent",de,37,07,ed),
	HX_("unmapEvent",37,1f,cb,72),
	HX_("__onMouseEvent",d4,e0,95,8c),
	HX_("__onKeyEvent",5a,bd,78,d0),
	HX_("__onStageResize",53,31,11,86),
	::String(null()) };

::hx::Class ScreenImpl_obj::__mClass;

void ScreenImpl_obj::__register()
{
	ScreenImpl_obj _hx_dummy;
	ScreenImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ScreenImpl",38,0a,49,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScreenImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScreenImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScreenImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScreenImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
