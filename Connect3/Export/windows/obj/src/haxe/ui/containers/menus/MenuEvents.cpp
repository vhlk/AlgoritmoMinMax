// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_Menu
#include <haxe/ui/containers/menus/Menu.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuEvent
#include <haxe/ui/containers/menus/MenuEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuEvents
#include <haxe/ui/containers/menus/MenuEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuItem
#include <haxe/ui/containers/menus/MenuItem.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__Menu_Builder
#include <haxe/ui/containers/menus/_Menu/Builder.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Point
#include <haxe/ui/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_df76b766e179ab3e_56_new,"haxe.ui.containers.menus.MenuEvents","new",0x7dff5b6e,"haxe.ui.containers.menus.MenuEvents.new","haxe/ui/containers/menus/Menu.hx",56,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_67_register,"haxe.ui.containers.menus.MenuEvents","register",0x1b3b4895,"haxe.ui.containers.menus.MenuEvents.register","haxe/ui/containers/menus/Menu.hx",67,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_95_unregister,"haxe.ui.containers.menus.MenuEvents","unregister",0x38d1a06e,"haxe.ui.containers.menus.MenuEvents.unregister","haxe/ui/containers/menus/Menu.hx",95,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_109_onMouseOver,"haxe.ui.containers.menus.MenuEvents","onMouseOver",0x56327608,"haxe.ui.containers.menus.MenuEvents.onMouseOver","haxe/ui/containers/menus/Menu.hx",109,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_113_onMouseOut,"haxe.ui.containers.menus.MenuEvents","onMouseOut",0x6442ce5a,"haxe.ui.containers.menus.MenuEvents.onMouseOut","haxe/ui/containers/menus/Menu.hx",113,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_116_onItemClick,"haxe.ui.containers.menus.MenuEvents","onItemClick",0xa86f0e24,"haxe.ui.containers.menus.MenuEvents.onItemClick","haxe/ui/containers/menus/Menu.hx",116,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_128_onItemMouseOver,"haxe.ui.containers.menus.MenuEvents","onItemMouseOver",0x6461f9f5,"haxe.ui.containers.menus.MenuEvents.onItemMouseOver","haxe/ui/containers/menus/Menu.hx",128,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_148_onItemMouseOut,"haxe.ui.containers.menus.MenuEvents","onItemMouseOut",0x1768e70d,"haxe.ui.containers.menus.MenuEvents.onItemMouseOut","haxe/ui/containers/menus/Menu.hx",148,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_156_showSubMenu,"haxe.ui.containers.menus.MenuEvents","showSubMenu",0x30dac0d0,"haxe.ui.containers.menus.MenuEvents.showSubMenu","haxe/ui/containers/menus/Menu.hx",156,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_176_hideCurrentSubMenu,"haxe.ui.containers.menus.MenuEvents","hideCurrentSubMenu",0x38a23d1a,"haxe.ui.containers.menus.MenuEvents.hideCurrentSubMenu","haxe/ui/containers/menus/Menu.hx",176,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_191_onHidden,"haxe.ui.containers.menus.MenuEvents","onHidden",0x76de981b,"haxe.ui.containers.menus.MenuEvents.onHidden","haxe/ui/containers/menus/Menu.hx",191,0x5a36fdb9)
HX_LOCAL_STACK_FRAME(_hx_pos_df76b766e179ab3e_198_findRootMenu,"haxe.ui.containers.menus.MenuEvents","findRootMenu",0xb52ba96c,"haxe.ui.containers.menus.MenuEvents.findRootMenu","haxe/ui/containers/menus/Menu.hx",198,0x5a36fdb9)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{

void MenuEvents_obj::__construct( ::haxe::ui::containers::menus::Menu menu){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_56_new)
HXLINE( 107)		this->_over = false;
HXLINE(  60)		this->parentMenu = null();
HXLINE(  59)		this->currentSubMenu = null();
HXLINE(  58)		this->_currentItem = null();
HXLINE(  63)		super::__construct(menu);
HXLINE(  64)		this->_menu = menu;
            	}

Dynamic MenuEvents_obj::__CreateEmpty() { return new MenuEvents_obj; }

void *MenuEvents_obj::_hx_vtable = 0;

Dynamic MenuEvents_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuEvents_obj > _hx_result = new MenuEvents_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MenuEvents_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0548a7cc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0548a7cc;
	} else {
		return inClassId==(int)0x261a4bfc;
	}
}

void MenuEvents_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_67_register)
HXLINE(  68)		if (!(this->hasEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn()))) {
HXLINE(  69)			this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn(),null());
            		}
HXLINE(  71)		if (!(this->hasEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn()))) {
HXLINE(  72)			this->registerEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn(),null());
            		}
HXLINE(  75)		{
HXLINE(  75)			int _g = 0;
HXDLIN(  75)			 ::haxe::ui::containers::menus::Menu _this = this->_menu;
HXDLIN(  75)			::Array< ::Dynamic> _g1;
HXDLIN(  75)			if (::hx::IsNull( _this->_children )) {
HXLINE(  75)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  75)				_g1 = _this->_children;
            			}
HXDLIN(  75)			while((_g < _g1->length)){
HXLINE(  75)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  75)				_g = (_g + 1);
HXLINE(  76)				if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::containers::menus::MenuItem >())) {
HXLINE(  77)					 ::haxe::ui::containers::menus::MenuItem item = ::hx::TCast<  ::haxe::ui::containers::menus::MenuItem >::cast(child);
HXLINE(  78)					if (!(item->hasEvent(HX_("click",48,7c,5e,48),this->onItemClick_dyn()))) {
HXLINE(  79)						item->registerEvent(HX_("click",48,7c,5e,48),this->onItemClick_dyn(),null());
            					}
HXLINE(  81)					if (!(item->hasEvent(HX_("mouseover",f9,1d,34,0b),this->onItemMouseOver_dyn()))) {
HXLINE(  82)						item->registerEvent(HX_("mouseover",f9,1d,34,0b),this->onItemMouseOver_dyn(),null());
            					}
HXLINE(  84)					if (!(item->hasEvent(HX_("mouseout",89,2f,36,a4),this->onItemMouseOut_dyn()))) {
HXLINE(  85)						item->registerEvent(HX_("mouseout",89,2f,36,a4),this->onItemMouseOut_dyn(),null());
            					}
            				}
            			}
            		}
HXLINE(  90)		if (!(this->hasEvent(HX_("hidden",6a,ff,95,4c),this->onHidden_dyn()))) {
HXLINE(  91)			this->registerEvent(HX_("hidden",6a,ff,95,4c),this->onHidden_dyn(),null());
            		}
            	}


void MenuEvents_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_95_unregister)
HXLINE(  96)		this->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->onMouseOver_dyn());
HXLINE(  97)		this->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->onMouseOut_dyn());
HXLINE(  98)		{
HXLINE(  98)			int _g = 0;
HXDLIN(  98)			 ::haxe::ui::containers::menus::Menu _this = this->_menu;
HXDLIN(  98)			::Array< ::Dynamic> _g1;
HXDLIN(  98)			if (::hx::IsNull( _this->_children )) {
HXLINE(  98)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  98)				_g1 = _this->_children;
            			}
HXDLIN(  98)			while((_g < _g1->length)){
HXLINE(  98)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  98)				_g = (_g + 1);
HXLINE(  99)				child->unregisterEvent(HX_("click",48,7c,5e,48),this->onItemClick_dyn());
HXLINE( 100)				child->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->onItemMouseOver_dyn());
HXLINE( 101)				child->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->onItemMouseOut_dyn());
            			}
            		}
HXLINE( 104)		this->unregisterEvent(HX_("hidden",6a,ff,95,4c),this->onHidden_dyn());
            	}


void MenuEvents_obj::onMouseOver( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_109_onMouseOver)
HXDLIN( 109)		this->_over = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuEvents_obj,onMouseOver,(void))

void MenuEvents_obj::onMouseOut( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_113_onMouseOut)
HXDLIN( 113)		this->_over = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuEvents_obj,onMouseOut,(void))

void MenuEvents_obj::onItemClick( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_df76b766e179ab3e_116_onItemClick)
HXLINE( 117)		 ::haxe::ui::containers::menus::MenuItem item = ::hx::TCast<  ::haxe::ui::containers::menus::MenuItem >::cast(event->target);
HXLINE( 118)		if (!(item->get_expandable())) {
HXLINE( 119)			 ::haxe::ui::containers::menus::MenuEvent event =  ::haxe::ui::containers::menus::MenuEvent_obj::__alloc( HX_CTX ,HX_("menuselected",fa,a6,03,90),null(),null());
HXLINE( 120)			event->menu = this->_menu;
HXLINE( 121)			event->menuItem = item;
HXLINE( 122)			this->findRootMenu()->dispatch(event);
HXLINE( 123)			this->hideCurrentSubMenu();
HXLINE( 124)			this->findRootMenu()->hide();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuEvents_obj,onItemClick,(void))

void MenuEvents_obj::onItemMouseOver( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_128_onItemMouseOver)
HXLINE( 129)		 ::haxe::ui::containers::menus::_Menu::Builder builder = ::hx::TCast<  ::haxe::ui::containers::menus::_Menu::Builder >::cast(this->_menu->_compositeBuilder);
HXLINE( 130)		 ::haxe::ds::ObjectMap subMenus = builder->_subMenus;
HXLINE( 131)		 ::haxe::ui::containers::menus::MenuItem item = ::hx::TCast<  ::haxe::ui::containers::menus::MenuItem >::cast(event->target);
HXLINE( 133)		{
HXLINE( 133)			int _g = 0;
HXDLIN( 133)			 ::haxe::ui::containers::menus::Menu _this = this->_menu;
HXDLIN( 133)			::Array< ::Dynamic> _g1;
HXDLIN( 133)			if (::hx::IsNull( _this->_children )) {
HXLINE( 133)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 133)				_g1 = _this->_children;
            			}
HXDLIN( 133)			while((_g < _g1->length)){
HXLINE( 133)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 133)				_g = (_g + 1);
HXLINE( 134)				if (::hx::IsInstanceNotEq( child,item )) {
HXLINE( 135)					child->removeClass(HX_(":hover",42,d3,17,5c),true,true);
            				}
            			}
            		}
HXLINE( 139)		if (::hx::IsNotNull( ( ( ::haxe::ui::containers::menus::Menu)(subMenus->get(item)) ) )) {
HXLINE( 140)			this->_currentItem = item;
HXLINE( 141)			this->showSubMenu(( ( ::haxe::ui::containers::menus::Menu)(subMenus->get(item)) ),item);
            		}
            		else {
HXLINE( 143)			this->hideCurrentSubMenu();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuEvents_obj,onItemMouseOver,(void))

void MenuEvents_obj::onItemMouseOut( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_148_onItemMouseOut)
HXDLIN( 148)		if (::hx::IsNotNull( this->currentSubMenu )) {
HXLINE( 149)			this->_currentItem->addClass(HX_(":hover",42,d3,17,5c),true,true);
HXLINE( 150)			return;
            		}
            		else {
HXLINE( 152)			this->_currentItem = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuEvents_obj,onItemMouseOut,(void))

void MenuEvents_obj::showSubMenu( ::haxe::ui::containers::menus::Menu subMenu, ::haxe::ui::containers::menus::MenuItem source){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_156_showSubMenu)
HXLINE( 157)		this->hideCurrentSubMenu();
HXLINE( 158)		subMenu->set_menuStyleNames(this->_menu->get_menuStyleNames());
HXLINE( 159)		subMenu->addClass(this->_menu->get_menuStyleNames(),null(),null());
HXLINE( 160)		 ::haxe::ui::geom::Point componentOffset = source->getComponentOffset();
HXLINE( 161)		Float left = source->get_screenLeft();
HXDLIN( 161)		Float left1 = (left + source->get_actualComponentWidth());
HXDLIN( 161)		Float left2 = (left1 + componentOffset->x);
HXLINE( 162)		Float top = source->get_screenTop();
HXLINE( 163)		::haxe::ui::core::Screen_obj::get_instance()->addComponent(subMenu);
HXLINE( 164)		subMenu->syncComponentValidation(null());
HXLINE( 166)		Float _hx_tmp = (left2 + subMenu->get_actualComponentWidth());
HXDLIN( 166)		if ((_hx_tmp > ::haxe::ui::core::Screen_obj::get_instance()->get_width())) {
HXLINE( 167)			Float left = source->get_screenLeft();
HXDLIN( 167)			left2 = (left - subMenu->get_actualComponentWidth());
            		}
HXLINE( 170)		subMenu->set_left(left2);
HXLINE( 171)		subMenu->set_top(top);
HXLINE( 173)		this->currentSubMenu = subMenu;
            	}


HX_DEFINE_DYNAMIC_FUNC2(MenuEvents_obj,showSubMenu,(void))

void MenuEvents_obj::hideCurrentSubMenu(){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_176_hideCurrentSubMenu)
HXLINE( 177)		if (::hx::IsNull( this->currentSubMenu )) {
HXLINE( 178)			return;
            		}
HXLINE( 181)		{
HXLINE( 181)			int _g = 0;
HXDLIN( 181)			 ::haxe::ui::containers::menus::Menu _this = this->currentSubMenu;
HXDLIN( 181)			::Array< ::Dynamic> _g1;
HXDLIN( 181)			if (::hx::IsNull( _this->_children )) {
HXLINE( 181)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 181)				_g1 = _this->_children;
            			}
HXDLIN( 181)			while((_g < _g1->length)){
HXLINE( 181)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 181)				_g = (_g + 1);
HXLINE( 182)				child->removeClass(HX_(":hover",42,d3,17,5c),true,true);
            			}
            		}
HXLINE( 185)		 ::haxe::ui::containers::menus::MenuEvents subMenuEvents = ::hx::TCast<  ::haxe::ui::containers::menus::MenuEvents >::cast(this->currentSubMenu->_internalEvents);
HXLINE( 186)		subMenuEvents->hideCurrentSubMenu();
HXLINE( 187)		::haxe::ui::core::Screen_obj::get_instance()->removeComponent(this->currentSubMenu);
HXLINE( 188)		this->currentSubMenu = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuEvents_obj,hideCurrentSubMenu,(void))

void MenuEvents_obj::onHidden( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_191_onHidden)
HXLINE( 192)		{
HXLINE( 192)			int _g = 0;
HXDLIN( 192)			 ::haxe::ui::containers::menus::Menu _this = this->_menu;
HXDLIN( 192)			::Array< ::Dynamic> _g1;
HXDLIN( 192)			if (::hx::IsNull( _this->_children )) {
HXLINE( 192)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 192)				_g1 = _this->_children;
            			}
HXDLIN( 192)			while((_g < _g1->length)){
HXLINE( 192)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 192)				_g = (_g + 1);
HXLINE( 193)				child->removeClass(HX_(":hover",42,d3,17,5c),true,true);
            			}
            		}
HXLINE( 195)		this->hideCurrentSubMenu();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuEvents_obj,onHidden,(void))

 ::haxe::ui::containers::menus::Menu MenuEvents_obj::findRootMenu(){
            	HX_STACKFRAME(&_hx_pos_df76b766e179ab3e_198_findRootMenu)
HXLINE( 199)		 ::haxe::ui::containers::menus::Menu root = null();
HXLINE( 200)		 ::haxe::ui::containers::menus::Menu ref = this->_menu;
HXLINE( 201)		while(::hx::IsNotNull( ref )){
HXLINE( 202)			 ::haxe::ui::containers::menus::MenuEvents events = ::hx::TCast<  ::haxe::ui::containers::menus::MenuEvents >::cast(ref->_internalEvents);
HXLINE( 203)			if (::hx::IsNull( events->parentMenu )) {
HXLINE( 204)				root = events->_menu;
HXLINE( 205)				goto _hx_goto_16;
            			}
HXLINE( 208)			ref = events->parentMenu;
            		}
            		_hx_goto_16:;
HXLINE( 211)		return root;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuEvents_obj,findRootMenu,return )


::hx::ObjectPtr< MenuEvents_obj > MenuEvents_obj::__new( ::haxe::ui::containers::menus::Menu menu) {
	::hx::ObjectPtr< MenuEvents_obj > __this = new MenuEvents_obj();
	__this->__construct(menu);
	return __this;
}

::hx::ObjectPtr< MenuEvents_obj > MenuEvents_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::menus::Menu menu) {
	MenuEvents_obj *__this = (MenuEvents_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuEvents_obj), true, "haxe.ui.containers.menus.MenuEvents"));
	*(void **)__this = MenuEvents_obj::_hx_vtable;
	__this->__construct(menu);
	return __this;
}

MenuEvents_obj::MenuEvents_obj()
{
}

void MenuEvents_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuEvents);
	HX_MARK_MEMBER_NAME(_menu,"_menu");
	HX_MARK_MEMBER_NAME(_currentItem,"_currentItem");
	HX_MARK_MEMBER_NAME(currentSubMenu,"currentSubMenu");
	HX_MARK_MEMBER_NAME(parentMenu,"parentMenu");
	HX_MARK_MEMBER_NAME(_over,"_over");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuEvents_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_menu,"_menu");
	HX_VISIT_MEMBER_NAME(_currentItem,"_currentItem");
	HX_VISIT_MEMBER_NAME(currentSubMenu,"currentSubMenu");
	HX_VISIT_MEMBER_NAME(parentMenu,"parentMenu");
	HX_VISIT_MEMBER_NAME(_over,"_over");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuEvents_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_menu") ) { return ::hx::Val( _menu ); }
		if (HX_FIELD_EQ(inName,"_over") ) { return ::hx::Val( _over ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		if (HX_FIELD_EQ(inName,"onHidden") ) { return ::hx::Val( onHidden_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parentMenu") ) { return ::hx::Val( parentMenu ); }
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return ::hx::Val( onMouseOut_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return ::hx::Val( onMouseOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"onItemClick") ) { return ::hx::Val( onItemClick_dyn() ); }
		if (HX_FIELD_EQ(inName,"showSubMenu") ) { return ::hx::Val( showSubMenu_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentItem") ) { return ::hx::Val( _currentItem ); }
		if (HX_FIELD_EQ(inName,"findRootMenu") ) { return ::hx::Val( findRootMenu_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentSubMenu") ) { return ::hx::Val( currentSubMenu ); }
		if (HX_FIELD_EQ(inName,"onItemMouseOut") ) { return ::hx::Val( onItemMouseOut_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onItemMouseOver") ) { return ::hx::Val( onItemMouseOver_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hideCurrentSubMenu") ) { return ::hx::Val( hideCurrentSubMenu_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuEvents_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_menu") ) { _menu=inValue.Cast<  ::haxe::ui::containers::menus::Menu >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_over") ) { _over=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parentMenu") ) { parentMenu=inValue.Cast<  ::haxe::ui::containers::menus::Menu >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentItem") ) { _currentItem=inValue.Cast<  ::haxe::ui::containers::menus::MenuItem >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentSubMenu") ) { currentSubMenu=inValue.Cast<  ::haxe::ui::containers::menus::Menu >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuEvents_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_menu",7e,61,6a,fb));
	outFields->push(HX_("_currentItem",ed,4b,5b,e4));
	outFields->push(HX_("currentSubMenu",06,50,f1,23));
	outFields->push(HX_("parentMenu",e9,53,6b,e7));
	outFields->push(HX_("_over",33,ad,c9,fc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuEvents_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::menus::Menu */ ,(int)offsetof(MenuEvents_obj,_menu),HX_("_menu",7e,61,6a,fb)},
	{::hx::fsObject /*  ::haxe::ui::containers::menus::MenuItem */ ,(int)offsetof(MenuEvents_obj,_currentItem),HX_("_currentItem",ed,4b,5b,e4)},
	{::hx::fsObject /*  ::haxe::ui::containers::menus::Menu */ ,(int)offsetof(MenuEvents_obj,currentSubMenu),HX_("currentSubMenu",06,50,f1,23)},
	{::hx::fsObject /*  ::haxe::ui::containers::menus::Menu */ ,(int)offsetof(MenuEvents_obj,parentMenu),HX_("parentMenu",e9,53,6b,e7)},
	{::hx::fsBool,(int)offsetof(MenuEvents_obj,_over),HX_("_over",33,ad,c9,fc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuEvents_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuEvents_obj_sMemberFields[] = {
	HX_("_menu",7e,61,6a,fb),
	HX_("_currentItem",ed,4b,5b,e4),
	HX_("currentSubMenu",06,50,f1,23),
	HX_("parentMenu",e9,53,6b,e7),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("_over",33,ad,c9,fc),
	HX_("onMouseOver",fa,2c,50,18),
	HX_("onMouseOut",a8,bb,d4,81),
	HX_("onItemClick",16,c5,8c,6a),
	HX_("onItemMouseOver",e7,11,8b,3d),
	HX_("onItemMouseOut",5b,93,36,b2),
	HX_("showSubMenu",c2,77,f8,f2),
	HX_("hideCurrentSubMenu",68,28,f7,92),
	HX_("onHidden",e9,f5,42,2c),
	HX_("findRootMenu",3a,06,0e,cd),
	::String(null()) };

::hx::Class MenuEvents_obj::__mClass;

void MenuEvents_obj::__register()
{
	MenuEvents_obj _hx_dummy;
	MenuEvents_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus.MenuEvents",7c,cc,bd,98);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuEvents_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuEvents_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuEvents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuEvents_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus