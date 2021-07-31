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
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_binding_BindingManager
#include <haxe/ui/binding/BindingManager.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_Builder
#include <haxe/ui/components/_TextField/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_Events
#include <haxe/ui/components/_TextField/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_IconBehaviour
#include <haxe/ui/components/_TextField/IconBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_MaxCharsBehaviour
#include <haxe/ui/components/_TextField/MaxCharsBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_PasswordBehaviour
#include <haxe/ui/components/_TextField/PasswordBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_PlaceholderBehaviour
#include <haxe/ui/components/_TextField/PlaceholderBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_RestrictCharsBehaviour
#include <haxe/ui/components/_TextField/RestrictCharsBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_TextBehaviour
#include <haxe/ui/components/_TextField/TextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_TextFieldLayout
#include <haxe/ui/components/_TextField/TextFieldLayout.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_16_new,"haxe.ui.components.TextField","new",0xbf7a83d9,"haxe.ui.components.TextField.new","haxe/ui/components/TextField.hx",16,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_369_registerBehaviours,"haxe.ui.components.TextField","registerBehaviours",0x4285c480,"haxe.ui.components.TextField.registerBehaviours","haxe/ui/macros/Macros.hx",369,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_388_get_password,"haxe.ui.components.TextField","get_password",0x1f076c8b,"haxe.ui.components.TextField.get_password","haxe/ui/macros/Macros.hx",388,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_431_set_password,"haxe.ui.components.TextField","set_password",0x34008fff,"haxe.ui.components.TextField.set_password","haxe/ui/macros/Macros.hx",431,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_388_get_maxChars,"haxe.ui.components.TextField","get_maxChars",0xc6083909,"haxe.ui.components.TextField.get_maxChars","haxe/ui/macros/Macros.hx",388,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_431_set_maxChars,"haxe.ui.components.TextField","set_maxChars",0xdb015c7d,"haxe.ui.components.TextField.set_maxChars","haxe/ui/macros/Macros.hx",431,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_388_get_restrictChars,"haxe.ui.components.TextField","get_restrictChars",0xd1e48891,"haxe.ui.components.TextField.get_restrictChars","haxe/ui/macros/Macros.hx",388,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_417_set_restrictChars,"haxe.ui.components.TextField","set_restrictChars",0xf552609d,"haxe.ui.components.TextField.set_restrictChars","haxe/ui/macros/Macros.hx",417,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_388_get_placeholder,"haxe.ui.components.TextField","get_placeholder",0xebb7b003,"haxe.ui.components.TextField.get_placeholder","haxe/ui/macros/Macros.hx",388,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_417_set_placeholder,"haxe.ui.components.TextField","set_placeholder",0xe7832d0f,"haxe.ui.components.TextField.set_placeholder","haxe/ui/macros/Macros.hx",417,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_388_get_icon,"haxe.ui.components.TextField","get_icon",0x9f4cb8e9,"haxe.ui.components.TextField.get_icon","haxe/ui/macros/Macros.hx",388,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_417_set_icon,"haxe.ui.components.TextField","set_icon",0x4daa125d,"haxe.ui.components.TextField.set_icon","haxe/ui/macros/Macros.hx",417,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_495_get_value,"haxe.ui.components.TextField","get_value",0x3eb5f001,"haxe.ui.components.TextField.get_value","haxe/ui/macros/Macros.hx",495,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_498_set_value,"haxe.ui.components.TextField","set_value",0x2206dc0d,"haxe.ui.components.TextField.set_value","haxe/ui/macros/Macros.hx",498,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_af65822e5c5293c9_525_cloneComponent,"haxe.ui.components.TextField","cloneComponent",0xfa11e6c7,"haxe.ui.components.TextField.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",525,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_351_self,"haxe.ui.components.TextField","self",0xcf06e1f3,"haxe.ui.components.TextField.self","haxe/ui/macros/Macros.hx",351,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd404726d488fa2_71_registerComposite,"haxe.ui.components.TextField","registerComposite",0x0fc85a5d,"haxe.ui.components.TextField.registerComposite","haxe/ui/macros/Macros.hx",71,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void TextField_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_16_new)
HXDLIN(  16)		super::__construct();
            	}

Dynamic TextField_obj::__CreateEmpty() { return new TextField_obj; }

void *TextField_obj::_hx_vtable = 0;

Dynamic TextField_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextField_obj > _hx_result = new TextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextField_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0f2dd418) {
			if (inClassId<=(int)0x0330636f) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0330636f;
				}
			} else {
				return inClassId==(int)0x0c89e854 || inClassId==(int)0x0f2dd418;
			}
		} else {
			if (inClassId<=(int)0x19a59f71) {
				if (inClassId<=(int)0x13d76ae7) {
					return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
				} else {
					return inClassId==(int)0x19a59f71;
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

void TextField_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_369_registerBehaviours)
HXLINE( 370)		this->super::registerBehaviours();
HXLINE( 447)		this->behaviours->_hx_register(HX_("password",1b,23,d0,48),::hx::ClassOf< ::haxe::ui::components::_TextField::PasswordBehaviour >(),null());
HXLINE( 451)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 451)		_hx_tmp->_hx_register(HX_("maxChars",99,ef,d0,ef),::hx::ClassOf< ::haxe::ui::components::_TextField::MaxCharsBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(-1));
HXLINE( 447)		this->behaviours->_hx_register(HX_("restrictChars",01,08,2c,ba),::hx::ClassOf< ::haxe::ui::components::_TextField::RestrictCharsBehaviour >(),null());
HXDLIN( 447)		this->behaviours->_hx_register(HX_("placeholder",73,73,f3,ba),::hx::ClassOf< ::haxe::ui::components::_TextField::PlaceholderBehaviour >(),null());
HXDLIN( 447)		this->behaviours->_hx_register(HX_("text",ad,cc,f9,4c),::hx::ClassOf< ::haxe::ui::components::_TextField::TextBehaviour >(),null());
HXDLIN( 447)		this->behaviours->_hx_register(HX_("icon",79,e7,b2,45),::hx::ClassOf< ::haxe::ui::components::_TextField::IconBehaviour >(),null());
            	}


bool TextField_obj::get_password(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_388_get_password)
HXDLIN( 388)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("password",1b,23,d0,48)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_password,return )

bool TextField_obj::set_password(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_2cd404726d488fa2_431_set_password)
HXLINE( 432)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 432)		_hx_tmp->set(HX_("password",1b,23,d0,48),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 433)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("password",1b,23,d0,48)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("password",1b,23,d0,48));
HXLINE( 434)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_password,return )

int TextField_obj::get_maxChars(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_388_get_maxChars)
HXDLIN( 388)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("maxChars",99,ef,d0,ef)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxChars,return )

int TextField_obj::set_maxChars(int value){
            	HX_GC_STACKFRAME(&_hx_pos_2cd404726d488fa2_431_set_maxChars)
HXLINE( 432)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 432)		_hx_tmp->set(HX_("maxChars",99,ef,d0,ef),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(value));
HXLINE( 433)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("maxChars",99,ef,d0,ef)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("maxChars",99,ef,d0,ef));
HXLINE( 434)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_maxChars,return )

::String TextField_obj::get_restrictChars(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_388_get_restrictChars)
HXDLIN( 388)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("restrictChars",01,08,2c,ba)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_restrictChars,return )

::String TextField_obj::set_restrictChars(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_2cd404726d488fa2_417_set_restrictChars)
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
HXLINE( 421)						::haxe::ui::binding::BindingManager_obj::get_instance()->addLanguageBinding(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("restrictChars",01,08,2c,ba),value,null());
HXLINE( 422)						return value;
            					}
            				}
            			}
            		}
HXLINE( 426)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 426)		_hx_tmp->set(HX_("restrictChars",01,08,2c,ba),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 427)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("restrictChars",01,08,2c,ba)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("restrictChars",01,08,2c,ba));
HXLINE( 428)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_restrictChars,return )

::String TextField_obj::get_placeholder(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_388_get_placeholder)
HXDLIN( 388)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("placeholder",73,73,f3,ba)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_placeholder,return )

::String TextField_obj::set_placeholder(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_2cd404726d488fa2_417_set_placeholder)
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
HXLINE( 421)						::haxe::ui::binding::BindingManager_obj::get_instance()->addLanguageBinding(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("placeholder",73,73,f3,ba),value,null());
HXLINE( 422)						return value;
            					}
            				}
            			}
            		}
HXLINE( 426)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 426)		_hx_tmp->set(HX_("placeholder",73,73,f3,ba),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 427)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("placeholder",73,73,f3,ba)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("placeholder",73,73,f3,ba));
HXLINE( 428)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_placeholder,return )

::String TextField_obj::get_icon(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_388_get_icon)
HXDLIN( 388)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("icon",79,e7,b2,45)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_icon,return )

::String TextField_obj::set_icon(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_2cd404726d488fa2_417_set_icon)
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
HXLINE( 421)						::haxe::ui::binding::BindingManager_obj::get_instance()->addLanguageBinding(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("icon",79,e7,b2,45),value,null());
HXLINE( 422)						return value;
            					}
            				}
            			}
            		}
HXLINE( 426)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 426)		_hx_tmp->set(HX_("icon",79,e7,b2,45),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 427)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("icon",79,e7,b2,45)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("icon",79,e7,b2,45));
HXLINE( 428)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_icon,return )

 ::Dynamic TextField_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_495_get_value)
HXDLIN( 495)		return this->get_text();
            	}


 ::Dynamic TextField_obj::set_value( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_498_set_value)
HXLINE( 499)		this->set_text(( (::String)(value) ));
HXLINE( 500)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(::hx::ObjectPtr<OBJ_>(this),HX_("text",ad,cc,f9,4c));
HXLINE( 501)		return value;
            	}


 ::haxe::ui::core::ComponentContainer TextField_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_af65822e5c5293c9_525_cloneComponent)
HXLINE( 300)		 ::haxe::ui::components::TextField c = ( ( ::haxe::ui::components::TextField)(this->super::cloneComponent()) );
HXLINE( 311)		c->set_password(this->get_password());
HXDLIN( 311)		c->set_maxChars(this->get_maxChars());
HXLINE( 309)		if (::hx::IsNotNull( this->get_restrictChars() )) {
HXLINE( 309)			c->set_restrictChars(this->get_restrictChars());
            		}
HXDLIN( 309)		if (::hx::IsNotNull( this->get_placeholder() )) {
HXLINE( 309)			c->set_placeholder(this->get_placeholder());
            		}
HXDLIN( 309)		if (::hx::IsNotNull( this->get_icon() )) {
HXLINE( 309)			c->set_icon(this->get_icon());
            		}
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


 ::haxe::ui::core::ComponentContainer TextField_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_2cd404726d488fa2_351_self)
HXDLIN( 351)		return  ::haxe::ui::components::TextField_obj::__alloc( HX_CTX );
            	}


void TextField_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_2cd404726d488fa2_71_registerComposite)
HXLINE(  72)		this->super::registerComposite();
HXLINE(  80)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::components::_TextField::Events >();
HXLINE(  84)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::_TextField::Builder >();
HXLINE(  88)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::components::_TextField::TextFieldLayout >();
            	}



::hx::ObjectPtr< TextField_obj > TextField_obj::__new() {
	::hx::ObjectPtr< TextField_obj > __this = new TextField_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TextField_obj > TextField_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TextField_obj *__this = (TextField_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextField_obj), true, "haxe.ui.components.TextField"));
	*(void **)__this = TextField_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextField_obj::TextField_obj()
{
}

::hx::Val TextField_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_icon() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"password") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_password() ); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxChars() ); }
		if (HX_FIELD_EQ(inName,"get_icon") ) { return ::hx::Val( get_icon_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_icon") ) { return ::hx::Val( set_icon_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"placeholder") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_placeholder() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_password") ) { return ::hx::Val( get_password_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_password") ) { return ::hx::Val( set_password_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxChars") ) { return ::hx::Val( get_maxChars_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxChars") ) { return ::hx::Val( set_maxChars_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"restrictChars") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_restrictChars() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_placeholder") ) { return ::hx::Val( get_placeholder_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_placeholder") ) { return ::hx::Val( set_placeholder_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_restrictChars") ) { return ::hx::Val( get_restrictChars_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_restrictChars") ) { return ::hx::Val( set_restrictChars_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextField_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_icon(inValue.Cast< ::String >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"password") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_password(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxChars(inValue.Cast< int >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"placeholder") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_placeholder(inValue.Cast< ::String >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"restrictChars") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_restrictChars(inValue.Cast< ::String >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("password",1b,23,d0,48));
	outFields->push(HX_("maxChars",99,ef,d0,ef));
	outFields->push(HX_("restrictChars",01,08,2c,ba));
	outFields->push(HX_("placeholder",73,73,f3,ba));
	outFields->push(HX_("icon",79,e7,b2,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextField_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextField_obj_sStaticStorageInfo = 0;
#endif

static ::String TextField_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_password",24,d7,e9,fd),
	HX_("set_password",98,fa,e2,12),
	HX_("get_maxChars",a2,a3,ea,a4),
	HX_("set_maxChars",16,c7,e3,b9),
	HX_("get_restrictChars",58,13,9c,c0),
	HX_("set_restrictChars",64,eb,09,e4),
	HX_("get_placeholder",0a,2b,d5,7b),
	HX_("set_placeholder",16,a8,a0,77),
	HX_("get_icon",02,a3,6d,c5),
	HX_("set_icon",76,fc,ca,73),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	HX_("registerComposite",24,e5,7f,fe),
	::String(null()) };

::hx::Class TextField_obj::__mClass;

void TextField_obj::__register()
{
	TextField_obj _hx_dummy;
	TextField_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.TextField",67,a3,6b,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextField_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextField_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextField_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components