// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_binding_BindingManager
#include <haxe/ui/binding/BindingManager.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonBuilder
#include <haxe/ui/components/ButtonBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#include <haxe/ui/components/ButtonEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDown
#include <haxe/ui/components/DropDown.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownBuilder
#include <haxe/ui/components/DropDownBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownEvents
#include <haxe/ui/components/DropDownEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components__DropDown_DataSourceBehaviour
#include <haxe/ui/components/_DropDown/DataSourceBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__DropDown_HideDropDown
#include <haxe/ui/components/_DropDown/HideDropDown.h>
#endif
#ifndef INCLUDED_haxe_ui_components__DropDown_SelectedIndexBehaviour
#include <haxe/ui/components/_DropDown/SelectedIndexBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__DropDown_SelectedItemBehaviour
#include <haxe/ui/components/_DropDown/SelectedItemBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_452ff4130146a79f_21_new,"haxe.ui.components.DropDown","new",0x0439cb49,"haxe.ui.components.DropDown.new","haxe/ui/components/DropDown.hx",21,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_464_hideDropDown,"haxe.ui.components.DropDown","hideDropDown",0x3d60030a,"haxe.ui.components.DropDown.hideDropDown","haxe/ui/macros/Macros.hx",464,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_37_onThemeChanged,"haxe.ui.components.DropDown","onThemeChanged",0xdcbb8961,"haxe.ui.components.DropDown.onThemeChanged","haxe/ui/components/DropDown.hx",37,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_71_registerComposite,"haxe.ui.components.DropDown","registerComposite",0x7c2bc5cd,"haxe.ui.components.DropDown.registerComposite","haxe/ui/macros/Macros.hx",71,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_369_registerBehaviours,"haxe.ui.components.DropDown","registerBehaviours",0xad205b10,"haxe.ui.components.DropDown.registerBehaviours","haxe/ui/macros/Macros.hx",369,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_388_get_handlerStyleNames,"haxe.ui.components.DropDown","get_handlerStyleNames",0x4894e941,"haxe.ui.components.DropDown.get_handlerStyleNames","haxe/ui/macros/Macros.hx",388,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_417_set_handlerStyleNames,"haxe.ui.components.DropDown","set_handlerStyleNames",0x9c9db74d,"haxe.ui.components.DropDown.set_handlerStyleNames","haxe/ui/macros/Macros.hx",417,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_388_get_dataSource,"haxe.ui.components.DropDown","get_dataSource",0x484c0aa5,"haxe.ui.components.DropDown.get_dataSource","haxe/ui/macros/Macros.hx",388,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_431_set_dataSource,"haxe.ui.components.DropDown","set_dataSource",0x686bf319,"haxe.ui.components.DropDown.set_dataSource","haxe/ui/macros/Macros.hx",431,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_388_get_type,"haxe.ui.components.DropDown","get_type",0xec1a86ba,"haxe.ui.components.DropDown.get_type","haxe/ui/macros/Macros.hx",388,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_417_set_type,"haxe.ui.components.DropDown","set_type",0x9a77e02e,"haxe.ui.components.DropDown.set_type","haxe/ui/macros/Macros.hx",417,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_388_get_virtual,"haxe.ui.components.DropDown","get_virtual",0x4c348a0b,"haxe.ui.components.DropDown.get_virtual","haxe/ui/macros/Macros.hx",388,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_431_set_virtual,"haxe.ui.components.DropDown","set_virtual",0x56a19117,"haxe.ui.components.DropDown.set_virtual","haxe/ui/macros/Macros.hx",431,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_388_get_dropdownWidth,"haxe.ui.components.DropDown","get_dropdownWidth",0xec094035,"haxe.ui.components.DropDown.get_dropdownWidth","haxe/ui/macros/Macros.hx",388,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_431_set_dropdownWidth,"haxe.ui.components.DropDown","set_dropdownWidth",0x0f771841,"haxe.ui.components.DropDown.set_dropdownWidth","haxe/ui/macros/Macros.hx",431,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_388_get_dropdownHeight,"haxe.ui.components.DropDown","get_dropdownHeight",0x525e66d8,"haxe.ui.components.DropDown.get_dropdownHeight","haxe/ui/macros/Macros.hx",388,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_431_set_dropdownHeight,"haxe.ui.components.DropDown","set_dropdownHeight",0x2f0d994c,"haxe.ui.components.DropDown.set_dropdownHeight","haxe/ui/macros/Macros.hx",431,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_388_get_dropdownSize,"haxe.ui.components.DropDown","get_dropdownSize",0x65bbb172,"haxe.ui.components.DropDown.get_dropdownSize","haxe/ui/macros/Macros.hx",388,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_431_set_dropdownSize,"haxe.ui.components.DropDown","set_dropdownSize",0xbbfd9ee6,"haxe.ui.components.DropDown.set_dropdownSize","haxe/ui/macros/Macros.hx",431,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_388_get_selectedIndex,"haxe.ui.components.DropDown","get_selectedIndex",0x387262b7,"haxe.ui.components.DropDown.get_selectedIndex","haxe/ui/macros/Macros.hx",388,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_431_set_selectedIndex,"haxe.ui.components.DropDown","set_selectedIndex",0x5be03ac3,"haxe.ui.components.DropDown.set_selectedIndex","haxe/ui/macros/Macros.hx",431,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_384_get_selectedItem,"haxe.ui.components.DropDown","get_selectedItem",0xff1f790e,"haxe.ui.components.DropDown.get_selectedItem","haxe/ui/macros/Macros.hx",384,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_394_set_selectedItem,"haxe.ui.components.DropDown","set_selectedItem",0x55616682,"haxe.ui.components.DropDown.set_selectedItem","haxe/ui/macros/Macros.hx",394,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_495_get_value,"haxe.ui.components.DropDown","get_value",0xc2086b71,"haxe.ui.components.DropDown.get_value","haxe/ui/macros/Macros.hx",495,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_498_set_value,"haxe.ui.components.DropDown","set_value",0xa559577d,"haxe.ui.components.DropDown.set_value","haxe/ui/macros/Macros.hx",498,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1ada4a6f9c033a55_525_cloneComponent,"haxe.ui.components.DropDown","cloneComponent",0xdad9f557,"haxe.ui.components.DropDown.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",525,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_351_self,"haxe.ui.components.DropDown","self",0xb1a61c83,"haxe.ui.components.DropDown.self","haxe/ui/macros/Macros.hx",351,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void DropDown_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_21_new)
HXDLIN(  21)		super::__construct();
            	}

Dynamic DropDown_obj::__CreateEmpty() { return new DropDown_obj; }

void *DropDown_obj::_hx_vtable = 0;

Dynamic DropDown_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DropDown_obj > _hx_result = new DropDown_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DropDown_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x0c89e854) {
				if (inClassId<=(int)0x0330636f) {
					if (inClassId<=(int)0x01557b4b) {
						return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
					} else {
						return inClassId==(int)0x0330636f;
					}
				} else {
					return inClassId==(int)0x0c89e854;
				}
			} else {
				return inClassId==(int)0x0f2dd418 || inClassId==(int)0x1395e371;
			}
		} else {
			if (inClassId<=(int)0x1bd114e1) {
				if (inClassId<=(int)0x142c98ce) {
					return inClassId==(int)0x13d76ae7 || inClassId==(int)0x142c98ce;
				} else {
					return inClassId==(int)0x1bd114e1;
				}
			} else {
				return inClassId==(int)0x1f4df417;
			}
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x395782b4) {
				if (inClassId<=(int)0x2ccba775) {
					return inClassId==(int)0x241b0321 || inClassId==(int)0x2ccba775;
				} else {
					return inClassId==(int)0x395782b4;
				}
			} else {
				return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
			}
		} else {
			if (inClassId<=(int)0x72c347e4) {
				return inClassId==(int)0x715d6dae || inClassId==(int)0x72c347e4;
			} else {
				return inClassId==(int)0x7ec24579;
			}
		}
	}
}

static ::haxe::ui::core::IDataComponent_obj _hx_haxe_ui_components_DropDown__hx_haxe_ui_core_IDataComponent= {
	(  ::haxe::ui::data::DataSource (::hx::Object::*)())&::haxe::ui::components::DropDown_obj::get_dataSource,
	(  ::haxe::ui::data::DataSource (::hx::Object::*)( ::haxe::ui::data::DataSource))&::haxe::ui::components::DropDown_obj::set_dataSource,
};

void *DropDown_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xfafb3fc3: return &_hx_haxe_ui_components_DropDown__hx_haxe_ui_core_IDataComponent;
	}
	return super::_hx_getInterface(inHash);
}

 ::haxe::ui::util::VariantType DropDown_obj::hideDropDown(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_464_hideDropDown)
HXDLIN( 464)		return this->behaviours->call(HX_("hideDropDown",13,23,0e,a9),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,hideDropDown,return )

void DropDown_obj::onThemeChanged(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_37_onThemeChanged)
HXLINE(  38)		this->super::onThemeChanged();
HXLINE(  39)		 ::haxe::ui::components::DropDownBuilder builder = ::hx::TCast<  ::haxe::ui::components::DropDownBuilder >::cast(this->_compositeBuilder);
HXLINE(  40)		builder->onThemeChanged();
            	}


void DropDown_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_71_registerComposite)
HXLINE(  72)		this->super::registerComposite();
HXLINE(  80)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::components::DropDownEvents >();
HXLINE(  84)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::DropDownBuilder >();
            	}


void DropDown_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_369_registerBehaviours)
HXLINE( 370)		this->super::registerBehaviours();
HXLINE( 447)		this->behaviours->_hx_register(HX_("handlerStyleNames",41,fd,12,8a),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 447)		this->behaviours->_hx_register(HX_("dataSource",a5,76,d3,1d),::hx::ClassOf< ::haxe::ui::components::_DropDown::DataSourceBehaviour >(),null());
HXLINE( 451)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 451)		_hx_tmp->_hx_register(HX_("type",ba,f2,08,4d),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("list",5e,1c,b3,47)));
HXDLIN( 451)		 ::haxe::ui::behaviours::Behaviours _hx_tmp1 = this->behaviours;
HXDLIN( 451)		_hx_tmp1->_hx_register(HX_("virtual",0b,9e,11,17),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false));
HXLINE( 447)		this->behaviours->_hx_register(HX_("dropdownWidth",35,54,ed,67),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 447)		this->behaviours->_hx_register(HX_("dropdownHeight",d8,d2,0b,3e),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 447)		this->behaviours->_hx_register(HX_("dropdownSize",72,1d,f6,3c),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXLINE( 451)		 ::haxe::ui::behaviours::Behaviours _hx_tmp2 = this->behaviours;
HXDLIN( 451)		_hx_tmp2->_hx_register(HX_("selectedIndex",b7,76,56,b4),::hx::ClassOf< ::haxe::ui::components::_DropDown::SelectedIndexBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1));
HXLINE( 447)		this->behaviours->_hx_register(HX_("selectedItem",0e,e5,59,d6),::hx::ClassOf< ::haxe::ui::components::_DropDown::SelectedItemBehaviour >(),null());
HXLINE( 470)		this->behaviours->_hx_register(HX_("hideDropDown",13,23,0e,a9),::hx::ClassOf< ::haxe::ui::components::_DropDown::HideDropDown >(),null());
            	}


::String DropDown_obj::get_handlerStyleNames(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_388_get_handlerStyleNames)
HXDLIN( 388)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("handlerStyleNames",41,fd,12,8a)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_handlerStyleNames,return )

::String DropDown_obj::set_handlerStyleNames(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_417_set_handlerStyleNames)
HXLINE( 418)		{
HXLINE( 418)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 418)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 419)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 420)					bool _hx_tmp;
HXDLIN( 420)					bool _hx_tmp1;
HXDLIN( 420)					if (::hx::IsNotNull( value )) {
HXLINE( 420)						_hx_tmp1 = (value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1);
            					}
            					else {
HXLINE( 420)						_hx_tmp1 = false;
            					}
HXDLIN( 420)					if (_hx_tmp1) {
HXLINE( 420)						_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            					}
            					else {
HXLINE( 420)						_hx_tmp = false;
            					}
HXDLIN( 420)					if (_hx_tmp) {
HXLINE( 421)						::haxe::ui::binding::BindingManager_obj::get_instance()->addLanguageBinding(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("handlerStyleNames",41,fd,12,8a),value,null());
HXLINE( 422)						return value;
            					}
            				}
            			}
            		}
HXLINE( 426)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 426)		_hx_tmp->set(HX_("handlerStyleNames",41,fd,12,8a),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 427)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("handlerStyleNames",41,fd,12,8a)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("handlerStyleNames",41,fd,12,8a));
HXLINE( 428)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_handlerStyleNames,return )

 ::haxe::ui::data::DataSource DropDown_obj::get_dataSource(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_388_get_dataSource)
HXDLIN( 388)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(this->behaviours->get(HX_("dataSource",a5,76,d3,1d)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_dataSource,return )

 ::haxe::ui::data::DataSource DropDown_obj::set_dataSource( ::haxe::ui::data::DataSource value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_431_set_dataSource)
HXLINE( 432)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 432)		_hx_tmp->set(HX_("dataSource",a5,76,d3,1d),::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource(value));
HXLINE( 433)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("dataSource",a5,76,d3,1d)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("dataSource",a5,76,d3,1d));
HXLINE( 434)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_dataSource,return )

::String DropDown_obj::get_type(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_388_get_type)
HXDLIN( 388)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("type",ba,f2,08,4d)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_type,return )

::String DropDown_obj::set_type(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_417_set_type)
HXLINE( 418)		{
HXLINE( 418)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 418)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 419)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 420)					bool _hx_tmp;
HXDLIN( 420)					bool _hx_tmp1;
HXDLIN( 420)					if (::hx::IsNotNull( value )) {
HXLINE( 420)						_hx_tmp1 = (value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1);
            					}
            					else {
HXLINE( 420)						_hx_tmp1 = false;
            					}
HXDLIN( 420)					if (_hx_tmp1) {
HXLINE( 420)						_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            					}
            					else {
HXLINE( 420)						_hx_tmp = false;
            					}
HXDLIN( 420)					if (_hx_tmp) {
HXLINE( 421)						::haxe::ui::binding::BindingManager_obj::get_instance()->addLanguageBinding(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("type",ba,f2,08,4d),value,null());
HXLINE( 422)						return value;
            					}
            				}
            			}
            		}
HXLINE( 426)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 426)		_hx_tmp->set(HX_("type",ba,f2,08,4d),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 427)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("type",ba,f2,08,4d)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("type",ba,f2,08,4d));
HXLINE( 428)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_type,return )

bool DropDown_obj::get_virtual(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_388_get_virtual)
HXDLIN( 388)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("virtual",0b,9e,11,17)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_virtual,return )

bool DropDown_obj::set_virtual(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_431_set_virtual)
HXLINE( 432)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 432)		_hx_tmp->set(HX_("virtual",0b,9e,11,17),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 433)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("virtual",0b,9e,11,17)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("virtual",0b,9e,11,17));
HXLINE( 434)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_virtual,return )

 ::Dynamic DropDown_obj::get_dropdownWidth(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_388_get_dropdownWidth)
HXDLIN( 388)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("dropdownWidth",35,54,ed,67)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_dropdownWidth,return )

 ::Dynamic DropDown_obj::set_dropdownWidth( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_431_set_dropdownWidth)
HXLINE( 432)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 432)		_hx_tmp->set(HX_("dropdownWidth",35,54,ed,67),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 433)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("dropdownWidth",35,54,ed,67)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("dropdownWidth",35,54,ed,67));
HXLINE( 434)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_dropdownWidth,return )

 ::Dynamic DropDown_obj::get_dropdownHeight(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_388_get_dropdownHeight)
HXDLIN( 388)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("dropdownHeight",d8,d2,0b,3e)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_dropdownHeight,return )

 ::Dynamic DropDown_obj::set_dropdownHeight( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_431_set_dropdownHeight)
HXLINE( 432)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 432)		_hx_tmp->set(HX_("dropdownHeight",d8,d2,0b,3e),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 433)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("dropdownHeight",d8,d2,0b,3e)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("dropdownHeight",d8,d2,0b,3e));
HXLINE( 434)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_dropdownHeight,return )

 ::Dynamic DropDown_obj::get_dropdownSize(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_388_get_dropdownSize)
HXDLIN( 388)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("dropdownSize",72,1d,f6,3c)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_dropdownSize,return )

 ::Dynamic DropDown_obj::set_dropdownSize( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_431_set_dropdownSize)
HXLINE( 432)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 432)		_hx_tmp->set(HX_("dropdownSize",72,1d,f6,3c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(( (int)(value) )));
HXLINE( 433)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("dropdownSize",72,1d,f6,3c)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("dropdownSize",72,1d,f6,3c));
HXLINE( 434)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_dropdownSize,return )

int DropDown_obj::get_selectedIndex(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_388_get_selectedIndex)
HXDLIN( 388)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("selectedIndex",b7,76,56,b4)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_selectedIndex,return )

int DropDown_obj::set_selectedIndex(int value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_431_set_selectedIndex)
HXLINE( 432)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 432)		_hx_tmp->set(HX_("selectedIndex",b7,76,56,b4),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(value));
HXLINE( 433)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("selectedIndex",b7,76,56,b4)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("selectedIndex",b7,76,56,b4));
HXLINE( 434)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_selectedIndex,return )

 ::Dynamic DropDown_obj::get_selectedItem(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_384_get_selectedItem)
HXDLIN( 384)		return this->behaviours->getDynamic(HX_("selectedItem",0e,e5,59,d6));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_selectedItem,return )

 ::Dynamic DropDown_obj::set_selectedItem( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_394_set_selectedItem)
HXLINE( 395)		this->behaviours->setDynamic(HX_("selectedItem",0e,e5,59,d6),value);
HXLINE( 396)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(::hx::ObjectPtr<OBJ_>(this),HX_("value",71,7f,b8,31));
HXLINE( 397)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("selectedItem",0e,e5,59,d6)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("selectedItem",0e,e5,59,d6));
HXLINE( 398)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_selectedItem,return )

 ::Dynamic DropDown_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_495_get_value)
HXDLIN( 495)		return this->get_selectedItem();
            	}


 ::Dynamic DropDown_obj::set_value( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_498_set_value)
HXLINE( 499)		this->set_selectedItem(value);
HXLINE( 500)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(::hx::ObjectPtr<OBJ_>(this),HX_("selectedItem",0e,e5,59,d6));
HXLINE( 501)		return value;
            	}


 ::haxe::ui::core::ComponentContainer DropDown_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_1ada4a6f9c033a55_525_cloneComponent)
HXLINE( 300)		 ::haxe::ui::components::DropDown c = ( ( ::haxe::ui::components::DropDown)(this->super::cloneComponent()) );
HXLINE( 316)		::Array< ::Dynamic> _hx_tmp;
HXDLIN( 316)		if (::hx::IsNull( this->_children )) {
HXLINE( 316)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 316)			_hx_tmp = this->_children;
            		}
HXDLIN( 316)		::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 316)		if (::hx::IsNull( c->_children )) {
HXLINE( 316)			_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 316)			_hx_tmp1 = c->_children;
            		}
HXDLIN( 316)		if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 317)			int _g = 0;
HXDLIN( 317)			::Array< ::Dynamic> _g1;
HXDLIN( 317)			if (::hx::IsNull( this->_children )) {
HXLINE( 317)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 317)				_g1 = this->_children;
            			}
HXDLIN( 317)			while((_g < _g1->length)){
HXLINE( 317)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 317)				_g = (_g + 1);
HXLINE( 318)				c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            			}
            		}
HXLINE( 322)		::haxe::ui::binding::BindingManager_obj::get_instance()->cloneBinding(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),( ( ::haxe::ui::core::Component)(c) ));
HXLINE( 323)		return c;
            	}


 ::haxe::ui::core::ComponentContainer DropDown_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_351_self)
HXDLIN( 351)		return  ::haxe::ui::components::DropDown_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< DropDown_obj > DropDown_obj::__new() {
	::hx::ObjectPtr< DropDown_obj > __this = new DropDown_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DropDown_obj > DropDown_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DropDown_obj *__this = (DropDown_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DropDown_obj), true, "haxe.ui.components.DropDown"));
	*(void **)__this = DropDown_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DropDown_obj::DropDown_obj()
{
}

::hx::Val DropDown_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_type() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"virtual") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_virtual() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return ::hx::Val( get_type_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return ::hx::Val( set_type_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dataSource() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_virtual") ) { return ::hx::Val( get_virtual_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_virtual") ) { return ::hx::Val( set_virtual_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideDropDown") ) { return ::hx::Val( hideDropDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"dropdownSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dropdownSize() ); }
		if (HX_FIELD_EQ(inName,"selectedItem") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedItem() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dropdownWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dropdownWidth() ); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedIndex() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onThemeChanged") ) { return ::hx::Val( onThemeChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return ::hx::Val( get_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return ::hx::Val( set_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"dropdownHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dropdownHeight() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_dropdownSize") ) { return ::hx::Val( get_dropdownSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dropdownSize") ) { return ::hx::Val( set_dropdownSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectedItem") ) { return ::hx::Val( get_selectedItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedItem") ) { return ::hx::Val( set_selectedItem_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		if (HX_FIELD_EQ(inName,"handlerStyleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_handlerStyleNames() ); }
		if (HX_FIELD_EQ(inName,"get_dropdownWidth") ) { return ::hx::Val( get_dropdownWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dropdownWidth") ) { return ::hx::Val( set_dropdownWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return ::hx::Val( get_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return ::hx::Val( set_selectedIndex_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dropdownHeight") ) { return ::hx::Val( get_dropdownHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dropdownHeight") ) { return ::hx::Val( set_dropdownHeight_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_handlerStyleNames") ) { return ::hx::Val( get_handlerStyleNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_handlerStyleNames") ) { return ::hx::Val( set_handlerStyleNames_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DropDown_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_type(inValue.Cast< ::String >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"virtual") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_virtual(inValue.Cast< bool >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dataSource(inValue.Cast<  ::haxe::ui::data::DataSource >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dropdownSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dropdownSize(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"selectedItem") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedItem(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dropdownWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dropdownWidth(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedIndex(inValue.Cast< int >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dropdownHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dropdownHeight(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"handlerStyleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_handlerStyleNames(inValue.Cast< ::String >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DropDown_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("handlerStyleNames",41,fd,12,8a));
	outFields->push(HX_("dataSource",a5,76,d3,1d));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("virtual",0b,9e,11,17));
	outFields->push(HX_("dropdownWidth",35,54,ed,67));
	outFields->push(HX_("dropdownHeight",d8,d2,0b,3e));
	outFields->push(HX_("dropdownSize",72,1d,f6,3c));
	outFields->push(HX_("selectedIndex",b7,76,56,b4));
	outFields->push(HX_("selectedItem",0e,e5,59,d6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DropDown_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DropDown_obj_sStaticStorageInfo = 0;
#endif

static ::String DropDown_obj_sMemberFields[] = {
	HX_("hideDropDown",13,23,0e,a9),
	HX_("onThemeChanged",aa,7d,38,28),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_handlerStyleNames",18,00,c1,08),
	HX_("set_handlerStyleNames",24,ce,c9,5c),
	HX_("get_dataSource",ee,fe,c8,93),
	HX_("set_dataSource",62,e7,e8,b3),
	HX_("get_type",43,ae,c3,cc),
	HX_("set_type",b7,07,21,7b),
	HX_("get_virtual",22,fe,0b,9d),
	HX_("set_virtual",2e,05,79,a7),
	HX_("get_dropdownWidth",8c,5f,5d,6e),
	HX_("set_dropdownWidth",98,37,cb,91),
	HX_("get_dropdownHeight",a1,b3,a5,d9),
	HX_("set_dropdownHeight",15,e6,54,b6),
	HX_("get_dropdownSize",fb,09,95,41),
	HX_("set_dropdownSize",6f,f7,d6,97),
	HX_("get_selectedIndex",0e,82,c6,ba),
	HX_("set_selectedIndex",1a,5a,34,de),
	HX_("get_selectedItem",97,d1,f8,da),
	HX_("set_selectedItem",0b,bf,3a,31),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class DropDown_obj::__mClass;

void DropDown_obj::__register()
{
	DropDown_obj _hx_dummy;
	DropDown_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.DropDown",d7,72,36,99);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DropDown_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DropDown_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DropDown_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DropDown_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components