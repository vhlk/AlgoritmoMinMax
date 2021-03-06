// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_Builder
#include <haxe/ui/components/_TabBar/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_Events
#include <haxe/ui/components/_TabBar/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_TabBarButton
#include <haxe/ui/components/_TabBar/TabBarButton.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
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
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
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
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_309_new,"haxe.ui.components._TabBar.Builder","new",0x7847daf6,"haxe.ui.components._TabBar.Builder.new","haxe/ui/components/TabBar.hx",309,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_316_create,"haxe.ui.components._TabBar.Builder","create",0x73e39e26,"haxe.ui.components._TabBar.Builder.create","haxe/ui/components/TabBar.hx",316,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_319_createContainer,"haxe.ui.components._TabBar.Builder","createContainer",0x5a0cc23b,"haxe.ui.components._TabBar.Builder.createContainer","haxe/ui/components/TabBar.hx",319,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_334_addTab,"haxe.ui.components._TabBar.Builder","addTab",0x96dda1de,"haxe.ui.components._TabBar.Builder.addTab","haxe/ui/components/TabBar.hx",334,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_344_addTabAt,"haxe.ui.components._TabBar.Builder","addTabAt",0x42f08e71,"haxe.ui.components._TabBar.Builder.addTabAt","haxe/ui/components/TabBar.hx",344,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_355_createTabBarButton,"haxe.ui.components._TabBar.Builder","createTabBarButton",0x0961c656,"haxe.ui.components._TabBar.Builder.createTabBarButton","haxe/ui/components/TabBar.hx",355,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_375_get_numComponents,"haxe.ui.components._TabBar.Builder","get_numComponents",0x55c79b69,"haxe.ui.components._TabBar.Builder.get_numComponents","haxe/ui/components/TabBar.hx",375,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_378_addComponent,"haxe.ui.components._TabBar.Builder","addComponent",0x8c850506,"haxe.ui.components._TabBar.Builder.addComponent","haxe/ui/components/TabBar.hx",378,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_385_addComponentAt,"haxe.ui.components._TabBar.Builder","addComponentAt",0x7b950b99,"haxe.ui.components._TabBar.Builder.addComponentAt","haxe/ui/components/TabBar.hx",385,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_392_removeComponent,"haxe.ui.components._TabBar.Builder","removeComponent",0x4a171f6f,"haxe.ui.components._TabBar.Builder.removeComponent","haxe/ui/components/TabBar.hx",392,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_403_removeComponentAt,"haxe.ui.components._TabBar.Builder","removeComponentAt",0x55b15242,"haxe.ui.components._TabBar.Builder.removeComponentAt","haxe/ui/components/TabBar.hx",403,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_411_getComponentIndex,"haxe.ui.components._TabBar.Builder","getComponentIndex",0x9a302161,"haxe.ui.components._TabBar.Builder.getComponentIndex","haxe/ui/components/TabBar.hx",411,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_418_setComponentIndex,"haxe.ui.components._TabBar.Builder","setComponentIndex",0xbd9df96d,"haxe.ui.components._TabBar.Builder.setComponentIndex","haxe/ui/components/TabBar.hx",418,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_426_getComponentAt,"haxe.ui.components._TabBar.Builder","getComponentAt",0x6d5c5744,"haxe.ui.components._TabBar.Builder.getComponentAt","haxe/ui/components/TabBar.hx",426,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_429_validateComponentLayout,"haxe.ui.components._TabBar.Builder","validateComponentLayout",0xd09b28e7,"haxe.ui.components._TabBar.Builder.validateComponentLayout","haxe/ui/components/TabBar.hx",429,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_451_showScrollButtons,"haxe.ui.components._TabBar.Builder","showScrollButtons",0x7611f38d,"haxe.ui.components._TabBar.Builder.showScrollButtons","haxe/ui/components/TabBar.hx",451,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_460_showScrollButtons,"haxe.ui.components._TabBar.Builder","showScrollButtons",0x7611f38d,"haxe.ui.components._TabBar.Builder.showScrollButtons","haxe/ui/components/TabBar.hx",460,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_474_showScrollButtons,"haxe.ui.components._TabBar.Builder","showScrollButtons",0x7611f38d,"haxe.ui.components._TabBar.Builder.showScrollButtons","haxe/ui/components/TabBar.hx",474,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_483_scrollLeft,"haxe.ui.components._TabBar.Builder","scrollLeft",0xafffaade,"haxe.ui.components._TabBar.Builder.scrollLeft","haxe/ui/components/TabBar.hx",483,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_496_scrollRight,"haxe.ui.components._TabBar.Builder","scrollRight",0xc6c2e525,"haxe.ui.components._TabBar.Builder.scrollRight","haxe/ui/components/TabBar.hx",496,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_521_hideScrollButtons,"haxe.ui.components._TabBar.Builder","hideScrollButtons",0x85c85ca8,"haxe.ui.components._TabBar.Builder.hideScrollButtons","haxe/ui/components/TabBar.hx",521,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_3d28c2b2e77aa916_482_boot,"haxe.ui.components._TabBar.Builder","boot",0xbeb0bcdc,"haxe.ui.components._TabBar.Builder.boot","haxe/ui/components/TabBar.hx",482,0xaabf3019)
namespace haxe{
namespace ui{
namespace components{
namespace _TabBar{

void Builder_obj::__construct( ::haxe::ui::components::TabBar tabbar){
            	HX_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_309_new)
HXLINE( 310)		super::__construct(tabbar);
HXLINE( 311)		this->_tabbar = tabbar;
HXLINE( 312)		this->createContainer();
            	}

Dynamic Builder_obj::__CreateEmpty() { return new Builder_obj; }

void *Builder_obj::_hx_vtable = 0;

Dynamic Builder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Builder_obj > _hx_result = new Builder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Builder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x361c08ee;
	}
}

void Builder_obj::create(){
            	HX_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_316_create)
HXDLIN( 316)		this->createContainer();
            	}


void Builder_obj::createContainer(){
            	HX_GC_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_319_createContainer)
HXLINE( 320)		if (::hx::IsNull( this->_filler )) {
HXLINE( 321)			this->_filler =  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
HXLINE( 322)			this->_filler->set_id(HX_("tabbar-filler",bf,e2,cc,b0));
HXLINE( 323)			this->_filler->addClass(HX_("tabbar-filler",bf,e2,cc,b0),null(),null());
HXLINE( 324)			this->_tabbar->addComponent(this->_filler);
            		}
HXLINE( 326)		if (::hx::IsNull( this->_container )) {
HXLINE( 327)			this->_container =  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
HXLINE( 328)			this->_container->set_id(HX_("tabbar-contents",e9,7b,ac,dd));
HXLINE( 329)			this->_container->addClass(HX_("tabbar-contents",e9,7b,ac,dd),null(),null());
HXLINE( 330)			this->_tabbar->addComponent(this->_container);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Builder_obj,createContainer,(void))

 ::haxe::ui::core::Component Builder_obj::addTab( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_334_addTab)
HXLINE( 335)		 ::haxe::ui::components::_TabBar::TabBarButton button = this->createTabBarButton(child);
HXLINE( 336)		 ::haxe::ui::core::Component v = this->_container->addComponent(button);
HXLINE( 337)		this->_tabbar->registerInternalEvents(::hx::ClassOf< ::haxe::ui::components::_TabBar::Events >(),true);
HXLINE( 338)		if ((this->_tabbar->get_selectedIndex() < 0)) {
HXLINE( 339)			this->_tabbar->set_selectedIndex(0);
            		}
HXLINE( 341)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,addTab,return )

 ::haxe::ui::core::Component Builder_obj::addTabAt( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_344_addTabAt)
HXLINE( 345)		 ::haxe::ui::components::_TabBar::TabBarButton button = this->createTabBarButton(child);
HXLINE( 346)		 ::haxe::ui::core::Component v = this->_container->addComponentAt(button,index);
HXLINE( 347)		this->_tabbar->registerInternalEvents(::hx::ClassOf< ::haxe::ui::components::_TabBar::Events >(),true);
HXLINE( 348)		if ((this->_tabbar->get_selectedIndex() < 0)) {
HXLINE( 349)			this->_tabbar->set_selectedIndex(0);
            		}
HXLINE( 351)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Builder_obj,addTabAt,return )

 ::haxe::ui::components::_TabBar::TabBarButton Builder_obj::createTabBarButton( ::haxe::ui::core::Component child){
            	HX_GC_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_355_createTabBarButton)
HXLINE( 356)		 ::haxe::ui::components::_TabBar::TabBarButton button =  ::haxe::ui::components::_TabBar::TabBarButton_obj::__alloc( HX_CTX );
HXLINE( 358)		button->addClass(HX_("tabbar-button",01,37,7e,05),null(),null());
HXLINE( 359)		if ((this->_tabbar->get_tabPosition() == HX_("bottom",eb,e6,78,65))) {
HXLINE( 360)			button->addClass(HX_(":bottom",a5,ce,55,d1),null(),null());
            		}
HXLINE( 363)		button->set_id(child->get_id());
HXLINE( 364)		button->set_text(child->get_text());
HXLINE( 365)		button->set_tooltip(child->get_tooltip());
HXLINE( 366)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::components::Button >())) {
HXLINE( 367)			button->set_icon(::hx::TCast<  ::haxe::ui::components::Button >::cast(child)->get_icon());
            		}
HXLINE( 369)		button->set_closable(this->_tabbar->get_closable());
HXLINE( 371)		return button;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,createTabBarButton,return )

 ::Dynamic Builder_obj::get_numComponents(){
            	HX_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_375_get_numComponents)
HXDLIN( 375)		return this->_container->get_numComponents();
            	}


 ::haxe::ui::core::Component Builder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_378_addComponent)
HXLINE( 379)		bool _hx_tmp;
HXDLIN( 379)		bool _hx_tmp1;
HXDLIN( 379)		bool _hx_tmp2;
HXDLIN( 379)		if (::hx::IsInstanceNotEq( child,this->_container )) {
HXLINE( 379)			_hx_tmp2 = ::hx::IsInstanceNotEq( child,this->_scrollLeft );
            		}
            		else {
HXLINE( 379)			_hx_tmp2 = false;
            		}
HXDLIN( 379)		if (_hx_tmp2) {
HXLINE( 379)			_hx_tmp1 = ::hx::IsInstanceNotEq( child,this->_scrollRight );
            		}
            		else {
HXLINE( 379)			_hx_tmp1 = false;
            		}
HXDLIN( 379)		if (_hx_tmp1) {
HXLINE( 379)			_hx_tmp = ::hx::IsInstanceNotEq( child,this->_filler );
            		}
            		else {
HXLINE( 379)			_hx_tmp = false;
            		}
HXDLIN( 379)		if (_hx_tmp) {
HXLINE( 380)			return this->addTab(child);
            		}
HXLINE( 382)		return null();
            	}


 ::haxe::ui::core::Component Builder_obj::addComponentAt( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_385_addComponentAt)
HXLINE( 386)		bool _hx_tmp;
HXDLIN( 386)		bool _hx_tmp1;
HXDLIN( 386)		bool _hx_tmp2;
HXDLIN( 386)		if (::hx::IsInstanceNotEq( child,this->_container )) {
HXLINE( 386)			_hx_tmp2 = ::hx::IsInstanceNotEq( child,this->_scrollLeft );
            		}
            		else {
HXLINE( 386)			_hx_tmp2 = false;
            		}
HXDLIN( 386)		if (_hx_tmp2) {
HXLINE( 386)			_hx_tmp1 = ::hx::IsInstanceNotEq( child,this->_scrollRight );
            		}
            		else {
HXLINE( 386)			_hx_tmp1 = false;
            		}
HXDLIN( 386)		if (_hx_tmp1) {
HXLINE( 386)			_hx_tmp = ::hx::IsInstanceNotEq( child,this->_filler );
            		}
            		else {
HXLINE( 386)			_hx_tmp = false;
            		}
HXDLIN( 386)		if (_hx_tmp) {
HXLINE( 387)			return this->addTabAt(child,index);
            		}
HXLINE( 389)		return null();
            	}


 ::haxe::ui::core::Component Builder_obj::removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_392_removeComponent)
HXLINE( 393)		bool _hx_tmp;
HXDLIN( 393)		bool _hx_tmp1;
HXDLIN( 393)		bool _hx_tmp2;
HXDLIN( 393)		if (::hx::IsInstanceNotEq( child,this->_container )) {
HXLINE( 393)			_hx_tmp2 = ::hx::IsInstanceNotEq( child,this->_scrollLeft );
            		}
            		else {
HXLINE( 393)			_hx_tmp2 = false;
            		}
HXDLIN( 393)		if (_hx_tmp2) {
HXLINE( 393)			_hx_tmp1 = ::hx::IsInstanceNotEq( child,this->_scrollRight );
            		}
            		else {
HXLINE( 393)			_hx_tmp1 = false;
            		}
HXDLIN( 393)		if (_hx_tmp1) {
HXLINE( 393)			_hx_tmp = ::hx::IsInstanceNotEq( child,this->_filler );
            		}
            		else {
HXLINE( 393)			_hx_tmp = false;
            		}
HXDLIN( 393)		if (_hx_tmp) {
HXLINE( 394)			int index = this->_container->getComponentIndex(child);
HXLINE( 395)			if ((index != -1)) {
HXLINE( 396)				this->_tabbar->removeTab(index);
HXLINE( 397)				return child;
            			}
            		}
HXLINE( 400)		return null();
            	}


 ::haxe::ui::core::Component Builder_obj::removeComponentAt(int index,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_403_removeComponentAt)
HXLINE( 404)		 ::haxe::ui::core::Component child = this->_container->getComponentAt(index);
HXLINE( 405)		if (::hx::IsNotNull( child )) {
HXLINE( 406)			this->_tabbar->removeTab(index);
            		}
HXLINE( 408)		return child;
            	}


int Builder_obj::getComponentIndex( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_411_getComponentIndex)
HXLINE( 412)		bool _hx_tmp;
HXDLIN( 412)		bool _hx_tmp1;
HXDLIN( 412)		bool _hx_tmp2;
HXDLIN( 412)		if (::hx::IsInstanceNotEq( child,this->_container )) {
HXLINE( 412)			_hx_tmp2 = ::hx::IsInstanceNotEq( child,this->_scrollLeft );
            		}
            		else {
HXLINE( 412)			_hx_tmp2 = false;
            		}
HXDLIN( 412)		if (_hx_tmp2) {
HXLINE( 412)			_hx_tmp1 = ::hx::IsInstanceNotEq( child,this->_scrollRight );
            		}
            		else {
HXLINE( 412)			_hx_tmp1 = false;
            		}
HXDLIN( 412)		if (_hx_tmp1) {
HXLINE( 412)			_hx_tmp = ::hx::IsInstanceNotEq( child,this->_filler );
            		}
            		else {
HXLINE( 412)			_hx_tmp = false;
            		}
HXDLIN( 412)		if (_hx_tmp) {
HXLINE( 413)			return this->_container->getComponentIndex(child);
            		}
HXLINE( 415)		return -1;
            	}


 ::haxe::ui::core::Component Builder_obj::setComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_418_setComponentIndex)
HXLINE( 419)		bool _hx_tmp;
HXDLIN( 419)		bool _hx_tmp1;
HXDLIN( 419)		bool _hx_tmp2;
HXDLIN( 419)		if (::hx::IsInstanceNotEq( child,this->_container )) {
HXLINE( 419)			_hx_tmp2 = ::hx::IsInstanceNotEq( child,this->_scrollLeft );
            		}
            		else {
HXLINE( 419)			_hx_tmp2 = false;
            		}
HXDLIN( 419)		if (_hx_tmp2) {
HXLINE( 419)			_hx_tmp1 = ::hx::IsInstanceNotEq( child,this->_scrollRight );
            		}
            		else {
HXLINE( 419)			_hx_tmp1 = false;
            		}
HXDLIN( 419)		if (_hx_tmp1) {
HXLINE( 419)			_hx_tmp = ::hx::IsInstanceNotEq( child,this->_filler );
            		}
            		else {
HXLINE( 419)			_hx_tmp = false;
            		}
HXDLIN( 419)		if (_hx_tmp) {
HXLINE( 420)			return this->_container->setComponentIndex(child,index);
            		}
HXLINE( 422)		return null();
            	}


 ::haxe::ui::core::Component Builder_obj::getComponentAt(int index){
            	HX_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_426_getComponentAt)
HXDLIN( 426)		return this->_container->getComponentAt(index);
            	}


bool Builder_obj::validateComponentLayout(){
            	HX_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_429_validateComponentLayout)
HXLINE( 430)		bool _hx_tmp;
HXDLIN( 430)		if (::hx::IsNotEq( this->_tabbar->get_native(),true )) {
HXLINE( 430)			_hx_tmp = ::hx::IsNull( this->_container );
            		}
            		else {
HXLINE( 430)			_hx_tmp = true;
            		}
HXDLIN( 430)		if (_hx_tmp) {
HXLINE( 431)			return false;
            		}
HXLINE( 434)		if (::hx::IsNull( this->_containerPosition )) {
HXLINE( 435)			this->_containerPosition = this->_tabbar->get_layout()->get_paddingLeft();
            		}
HXLINE( 438)		bool _hx_tmp1;
HXDLIN( 438)		Float _hx_tmp2 = this->_container->get_width();
HXDLIN( 438)		if ((_hx_tmp2 > this->_tabbar->get_layout()->get_usableWidth())) {
HXLINE( 438)			_hx_tmp1 = (this->_tabbar->get_layout()->get_usableWidth() > 0);
            		}
            		else {
HXLINE( 438)			_hx_tmp1 = false;
            		}
HXDLIN( 438)		if (_hx_tmp1) {
HXLINE( 439)			this->showScrollButtons();
HXLINE( 440)			this->_container->set_left(this->_containerPosition);
            		}
            		else {
HXLINE( 442)			this->hideScrollButtons();
HXLINE( 443)			this->_containerPosition = null();
            		}
HXLINE( 446)		return true;
            	}


void Builder_obj::showScrollButtons(){
            	HX_GC_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_451_showScrollButtons)
HXDLIN( 451)		 ::haxe::ui::components::_TabBar::Builder _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 452)		if (::hx::IsNull( this->_scrollLeft )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::_TabBar::Builder,_gthis) HXARGC(1)
            			void _hx_run( ::haxe::ui::events::MouseEvent e){
            				HX_GC_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_460_showScrollButtons)
HXLINE( 460)				_gthis->scrollLeft();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 453)			this->_scrollLeft =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 454)			this->_scrollLeft->set_id(HX_("tabbar-scroll-left",18,70,e0,85));
HXLINE( 455)			this->_scrollLeft->addClass(HX_("tabbar-scroll-left",18,70,e0,85),null(),null());
HXLINE( 456)			this->_scrollLeft->set_includeInLayout(false);
HXLINE( 457)			this->_scrollLeft->set_repeater(true);
HXLINE( 458)			this->_tabbar->addComponent(this->_scrollLeft);
HXLINE( 459)			this->_scrollLeft->set_onClick( ::Dynamic(new _hx_Closure_0(_gthis)));
            		}
            		else {
HXLINE( 463)			this->_scrollLeft->show();
            		}
HXLINE( 466)		if (::hx::IsNull( this->_scrollRight )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::haxe::ui::components::_TabBar::Builder,_gthis) HXARGC(1)
            			void _hx_run( ::haxe::ui::events::MouseEvent e){
            				HX_GC_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_474_showScrollButtons)
HXLINE( 474)				_gthis->scrollRight();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 467)			this->_scrollRight =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 468)			this->_scrollRight->set_id(HX_("tabbar-scroll-right",ab,b2,8e,15));
HXLINE( 469)			this->_scrollRight->addClass(HX_("tabbar-scroll-right",ab,b2,8e,15),null(),null());
HXLINE( 470)			this->_scrollRight->set_includeInLayout(false);
HXLINE( 471)			this->_scrollRight->set_repeater(true);
HXLINE( 472)			this->_tabbar->addComponent(this->_scrollRight);
HXLINE( 473)			this->_scrollRight->set_onClick( ::Dynamic(new _hx_Closure_1(_gthis)));
            		}
            		else {
HXLINE( 477)			this->_scrollRight->show();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Builder_obj,showScrollButtons,(void))

void Builder_obj::scrollLeft(){
            	HX_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_483_scrollLeft)
HXLINE( 484)		bool _hx_tmp;
HXDLIN( 484)		if (::hx::IsNotNull( this->_scrollLeft )) {
HXLINE( 484)			_hx_tmp = (this->_scrollLeft->get_hidden() == true);
            		}
            		else {
HXLINE( 484)			_hx_tmp = true;
            		}
HXDLIN( 484)		if (_hx_tmp) {
HXLINE( 485)			return;
            		}
HXLINE( 488)		Float x = (this->_container->get_left() + 20);
HXLINE( 489)		if ((x > this->_tabbar->get_layout()->get_paddingLeft())) {
HXLINE( 490)			x = this->_tabbar->get_layout()->get_paddingLeft();
            		}
HXLINE( 492)		this->_containerPosition = x;
HXLINE( 493)		this->_container->set_left(x);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Builder_obj,scrollLeft,(void))

void Builder_obj::scrollRight(){
            	HX_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_496_scrollRight)
HXLINE( 497)		bool _hx_tmp;
HXDLIN( 497)		if (::hx::IsNotNull( this->_scrollLeft )) {
HXLINE( 497)			_hx_tmp = (this->_scrollLeft->get_hidden() == true);
            		}
            		else {
HXLINE( 497)			_hx_tmp = true;
            		}
HXDLIN( 497)		if (_hx_tmp) {
HXLINE( 498)			return;
            		}
HXLINE( 501)		Float x = (( (Float)(this->_container->get_left()) ) - ( (Float)(20) ));
HXLINE( 502)		Float max = this->_container->get_width();
HXDLIN( 502)		Float max1 = -((max - this->_tabbar->get_width()));
HXLINE( 504)		 ::haxe::ui::components::Button left = this->_tabbar->findComponent(HX_("tabbar-scroll-left",18,70,e0,85),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 505)		 ::haxe::ui::components::Button right = this->_tabbar->findComponent(HX_("tabbar-scroll-right",ab,b2,8e,15),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 506)		bool _hx_tmp1;
HXDLIN( 506)		if (::hx::IsNotNull( left )) {
HXLINE( 506)			_hx_tmp1 = (left->get_hidden() == false);
            		}
            		else {
HXLINE( 506)			_hx_tmp1 = false;
            		}
HXDLIN( 506)		if (_hx_tmp1) {
HXLINE( 507)			max1 = (max1 - left->get_width());
HXLINE( 508)			max1 = (max1 - this->_tabbar->get_layout()->get_horizontalSpacing());
            		}
HXLINE( 510)		bool _hx_tmp2;
HXDLIN( 510)		if (::hx::IsNotNull( right )) {
HXLINE( 510)			_hx_tmp2 = (right->get_hidden() == false);
            		}
            		else {
HXLINE( 510)			_hx_tmp2 = false;
            		}
HXDLIN( 510)		if (_hx_tmp2) {
HXLINE( 511)			max1 = (max1 - right->get_width());
            		}
HXLINE( 514)		if ((x < max1)) {
HXLINE( 515)			x = max1;
            		}
HXLINE( 517)		this->_containerPosition = x;
HXLINE( 518)		this->_container->set_left(x);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Builder_obj,scrollRight,(void))

void Builder_obj::hideScrollButtons(){
            	HX_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_521_hideScrollButtons)
HXLINE( 522)		if (::hx::IsNotNull( this->_scrollLeft )) {
HXLINE( 523)			this->_scrollLeft->hide();
            		}
HXLINE( 525)		if (::hx::IsNotNull( this->_scrollRight )) {
HXLINE( 526)			this->_scrollRight->hide();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Builder_obj,hideScrollButtons,(void))

int Builder_obj::SCROLL_INCREMENT;


::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::components::TabBar tabbar) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(tabbar);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::TabBar tabbar) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.components._TabBar.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(tabbar);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_tabbar,"_tabbar");
	HX_MARK_MEMBER_NAME(_container,"_container");
	HX_MARK_MEMBER_NAME(_filler,"_filler");
	HX_MARK_MEMBER_NAME(_scrollLeft,"_scrollLeft");
	HX_MARK_MEMBER_NAME(_scrollRight,"_scrollRight");
	HX_MARK_MEMBER_NAME(_containerPosition,"_containerPosition");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tabbar,"_tabbar");
	HX_VISIT_MEMBER_NAME(_container,"_container");
	HX_VISIT_MEMBER_NAME(_filler,"_filler");
	HX_VISIT_MEMBER_NAME(_scrollLeft,"_scrollLeft");
	HX_VISIT_MEMBER_NAME(_scrollRight,"_scrollRight");
	HX_VISIT_MEMBER_NAME(_containerPosition,"_containerPosition");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"addTab") ) { return ::hx::Val( addTab_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_tabbar") ) { return ::hx::Val( _tabbar ); }
		if (HX_FIELD_EQ(inName,"_filler") ) { return ::hx::Val( _filler ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addTabAt") ) { return ::hx::Val( addTabAt_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_container") ) { return ::hx::Val( _container ); }
		if (HX_FIELD_EQ(inName,"scrollLeft") ) { return ::hx::Val( scrollLeft_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollLeft") ) { return ::hx::Val( _scrollLeft ); }
		if (HX_FIELD_EQ(inName,"scrollRight") ) { return ::hx::Val( scrollRight_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_scrollRight") ) { return ::hx::Val( _scrollRight ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addComponentAt") ) { return ::hx::Val( addComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentAt") ) { return ::hx::Val( getComponentAt_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createContainer") ) { return ::hx::Val( createContainer_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_numComponents") ) { return ::hx::Val( get_numComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponentAt") ) { return ::hx::Val( removeComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentIndex") ) { return ::hx::Val( getComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setComponentIndex") ) { return ::hx::Val( setComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"showScrollButtons") ) { return ::hx::Val( showScrollButtons_dyn() ); }
		if (HX_FIELD_EQ(inName,"hideScrollButtons") ) { return ::hx::Val( hideScrollButtons_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createTabBarButton") ) { return ::hx::Val( createTabBarButton_dyn() ); }
		if (HX_FIELD_EQ(inName,"_containerPosition") ) { return ::hx::Val( _containerPosition ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"validateComponentLayout") ) { return ::hx::Val( validateComponentLayout_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Builder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_tabbar") ) { _tabbar=inValue.Cast<  ::haxe::ui::components::TabBar >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filler") ) { _filler=inValue.Cast<  ::haxe::ui::containers::Box >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_container") ) { _container=inValue.Cast<  ::haxe::ui::containers::HBox >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollLeft") ) { _scrollLeft=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_scrollRight") ) { _scrollRight=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_containerPosition") ) { _containerPosition=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_tabbar",3d,cc,cc,ea));
	outFields->push(HX_("_container",02,f1,15,1b));
	outFields->push(HX_("_filler",4f,1f,a6,f3));
	outFields->push(HX_("_scrollLeft",d3,63,f9,d7));
	outFields->push(HX_("_scrollRight",90,02,4b,99));
	outFields->push(HX_("_containerPosition",cb,1f,7e,46));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::TabBar */ ,(int)offsetof(Builder_obj,_tabbar),HX_("_tabbar",3d,cc,cc,ea)},
	{::hx::fsObject /*  ::haxe::ui::containers::HBox */ ,(int)offsetof(Builder_obj,_container),HX_("_container",02,f1,15,1b)},
	{::hx::fsObject /*  ::haxe::ui::containers::Box */ ,(int)offsetof(Builder_obj,_filler),HX_("_filler",4f,1f,a6,f3)},
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(Builder_obj,_scrollLeft),HX_("_scrollLeft",d3,63,f9,d7)},
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(Builder_obj,_scrollRight),HX_("_scrollRight",90,02,4b,99)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Builder_obj,_containerPosition),HX_("_containerPosition",cb,1f,7e,46)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Builder_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Builder_obj::SCROLL_INCREMENT,HX_("SCROLL_INCREMENT",1d,e8,39,c4)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_tabbar",3d,cc,cc,ea),
	HX_("_container",02,f1,15,1b),
	HX_("_filler",4f,1f,a6,f3),
	HX_("create",fc,66,0f,7c),
	HX_("createContainer",a5,2e,68,60),
	HX_("addTab",b4,6a,09,9f),
	HX_("addTabAt",c7,b8,40,84),
	HX_("createTabBarButton",2c,78,02,d7),
	HX_("get_numComponents",53,76,26,3b),
	HX_("addComponent",5c,12,a8,0e),
	HX_("addComponentAt",6f,9a,96,16),
	HX_("removeComponent",d9,8b,72,50),
	HX_("removeComponentAt",2c,2d,10,3b),
	HX_("getComponentIndex",4b,fc,8e,7f),
	HX_("setComponentIndex",57,d4,fc,a2),
	HX_("getComponentAt",1a,e6,5d,08),
	HX_("validateComponentLayout",51,0f,38,5a),
	HX_("_scrollLeft",d3,63,f9,d7),
	HX_("_scrollRight",90,02,4b,99),
	HX_("showScrollButtons",77,ce,70,5b),
	HX_("_containerPosition",cb,1f,7e,46),
	HX_("scrollLeft",b4,96,6f,05),
	HX_("scrollRight",8f,54,41,33),
	HX_("hideScrollButtons",92,37,27,6b),
	::String(null()) };

static void Builder_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Builder_obj::SCROLL_INCREMENT,"SCROLL_INCREMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Builder_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Builder_obj::SCROLL_INCREMENT,"SCROLL_INCREMENT");
};

#endif

::hx::Class Builder_obj::__mClass;

static ::String Builder_obj_sStaticFields[] = {
	HX_("SCROLL_INCREMENT",1d,e8,39,c4),
	::String(null())
};

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TabBar.Builder",04,e8,dd,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Builder_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Builder_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Builder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Builder_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Builder_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Builder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Builder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Builder_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3d28c2b2e77aa916_482_boot)
HXDLIN( 482)		SCROLL_INCREMENT = 20;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TabBar
