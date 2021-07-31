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
#ifndef INCLUDED_haxe_ui_components_Switch
#include <haxe/ui/components/Switch.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Switch_Builder
#include <haxe/ui/components/_Switch/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Switch_SelectedBehaviour
#include <haxe/ui/components/_Switch/SelectedBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Switch_TextBehaviour
#include <haxe/ui/components/_Switch/TextBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalLayout
#include <haxe/ui/layouts/HorizontalLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f2ade190d4639e55_14_new,"haxe.ui.components.Switch","new",0x09173d0c,"haxe.ui.components.Switch.new","haxe/ui/components/Switch.hx",14,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f1dc642d6902d9d2_71_registerComposite,"haxe.ui.components.Switch","registerComposite",0xf6f7a6d0,"haxe.ui.components.Switch.registerComposite","haxe/ui/macros/Macros.hx",71,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_f1dc642d6902d9d2_369_registerBehaviours,"haxe.ui.components.Switch","registerBehaviours",0xa4b95cad,"haxe.ui.components.Switch.registerBehaviours","haxe/ui/macros/Macros.hx",369,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_f1dc642d6902d9d2_388_get_selected,"haxe.ui.components.Switch","get_selected",0x49fe7c38,"haxe.ui.components.Switch.get_selected","haxe/ui/macros/Macros.hx",388,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_f1dc642d6902d9d2_431_set_selected,"haxe.ui.components.Switch","set_selected",0x5ef79fac,"haxe.ui.components.Switch.set_selected","haxe/ui/macros/Macros.hx",431,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_f1dc642d6902d9d2_388_get_textOn,"haxe.ui.components.Switch","get_textOn",0x64b687c9,"haxe.ui.components.Switch.get_textOn","haxe/ui/macros/Macros.hx",388,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_f1dc642d6902d9d2_417_set_textOn,"haxe.ui.components.Switch","set_textOn",0x6834263d,"haxe.ui.components.Switch.set_textOn","haxe/ui/macros/Macros.hx",417,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_f1dc642d6902d9d2_388_get_textOff,"haxe.ui.components.Switch","get_textOff",0xbb004185,"haxe.ui.components.Switch.get_textOff","haxe/ui/macros/Macros.hx",388,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_f1dc642d6902d9d2_417_set_textOff,"haxe.ui.components.Switch","set_textOff",0xc56d4891,"haxe.ui.components.Switch.set_textOff","haxe/ui/macros/Macros.hx",417,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_c9b63221bf3230fc_525_cloneComponent,"haxe.ui.components.Switch","cloneComponent",0x8d50a474,"haxe.ui.components.Switch.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",525,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_f1dc642d6902d9d2_351_self,"haxe.ui.components.Switch","self",0xee8c3560,"haxe.ui.components.Switch.self","haxe/ui/macros/Macros.hx",351,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void Switch_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f2ade190d4639e55_14_new)
HXDLIN(  14)		super::__construct();
            	}

Dynamic Switch_obj::__CreateEmpty() { return new Switch_obj; }

void *Switch_obj::_hx_vtable = 0;

Dynamic Switch_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Switch_obj > _hx_result = new Switch_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Switch_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
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
			if (inClassId<=(int)0x1f4df417) {
				if (inClassId<=(int)0x13d76ae7) {
					return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
				} else {
					return inClassId==(int)0x1f4df417;
				}
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x4af7dd8e) {
				if (inClassId<=(int)0x2ccba775) {
					return inClassId==(int)0x26cbf034 || inClassId==(int)0x2ccba775;
				} else {
					return inClassId==(int)0x4af7dd8e;
				}
			} else {
				return inClassId==(int)0x6b353933;
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

void Switch_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_f1dc642d6902d9d2_71_registerComposite)
HXLINE(  72)		this->super::registerComposite();
HXLINE(  84)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::_Switch::Builder >();
HXLINE(  88)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::layouts::HorizontalLayout >();
            	}


void Switch_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_f1dc642d6902d9d2_369_registerBehaviours)
HXLINE( 370)		this->super::registerBehaviours();
HXLINE( 447)		this->behaviours->_hx_register(HX_("selected",5b,2a,6d,b1),::hx::ClassOf< ::haxe::ui::components::_Switch::SelectedBehaviour >(),null());
HXDLIN( 447)		this->behaviours->_hx_register(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 447)		this->behaviours->_hx_register(HX_("text",ad,cc,f9,4c),::hx::ClassOf< ::haxe::ui::components::_Switch::TextBehaviour >(),null());
HXDLIN( 447)		this->behaviours->_hx_register(HX_("textOn",2c,57,88,d8),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 447)		this->behaviours->_hx_register(HX_("textOff",c2,e8,c3,9e),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
            	}


bool Switch_obj::get_selected(){
            	HX_STACKFRAME(&_hx_pos_f1dc642d6902d9d2_388_get_selected)
HXDLIN( 388)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("selected",5b,2a,6d,b1)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Switch_obj,get_selected,return )

bool Switch_obj::set_selected(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_f1dc642d6902d9d2_431_set_selected)
HXLINE( 432)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 432)		_hx_tmp->set(HX_("selected",5b,2a,6d,b1),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 433)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("selected",5b,2a,6d,b1)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("selected",5b,2a,6d,b1));
HXLINE( 434)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Switch_obj,set_selected,return )

::String Switch_obj::get_textOn(){
            	HX_STACKFRAME(&_hx_pos_f1dc642d6902d9d2_388_get_textOn)
HXDLIN( 388)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("textOn",2c,57,88,d8)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Switch_obj,get_textOn,return )

::String Switch_obj::set_textOn(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_f1dc642d6902d9d2_417_set_textOn)
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
HXLINE( 421)						::haxe::ui::binding::BindingManager_obj::get_instance()->addLanguageBinding(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("textOn",2c,57,88,d8),value,null());
HXLINE( 422)						return value;
            					}
            				}
            			}
            		}
HXLINE( 426)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 426)		_hx_tmp->set(HX_("textOn",2c,57,88,d8),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 427)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("textOn",2c,57,88,d8)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("textOn",2c,57,88,d8));
HXLINE( 428)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Switch_obj,set_textOn,return )

::String Switch_obj::get_textOff(){
            	HX_STACKFRAME(&_hx_pos_f1dc642d6902d9d2_388_get_textOff)
HXDLIN( 388)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("textOff",c2,e8,c3,9e)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Switch_obj,get_textOff,return )

::String Switch_obj::set_textOff(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_f1dc642d6902d9d2_417_set_textOff)
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
HXLINE( 421)						::haxe::ui::binding::BindingManager_obj::get_instance()->addLanguageBinding(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("textOff",c2,e8,c3,9e),value,null());
HXLINE( 422)						return value;
            					}
            				}
            			}
            		}
HXLINE( 426)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 426)		_hx_tmp->set(HX_("textOff",c2,e8,c3,9e),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 427)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("textOff",c2,e8,c3,9e)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("textOff",c2,e8,c3,9e));
HXLINE( 428)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Switch_obj,set_textOff,return )

 ::haxe::ui::core::ComponentContainer Switch_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_c9b63221bf3230fc_525_cloneComponent)
HXLINE( 300)		 ::haxe::ui::components::Switch c = ( ( ::haxe::ui::components::Switch)(this->super::cloneComponent()) );
HXLINE( 311)		c->set_selected(this->get_selected());
HXLINE( 309)		if (::hx::IsNotNull( this->get_textOn() )) {
HXLINE( 309)			c->set_textOn(this->get_textOn());
            		}
HXDLIN( 309)		if (::hx::IsNotNull( this->get_textOff() )) {
HXLINE( 309)			c->set_textOff(this->get_textOff());
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


 ::haxe::ui::core::ComponentContainer Switch_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_f1dc642d6902d9d2_351_self)
HXDLIN( 351)		return  ::haxe::ui::components::Switch_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Switch_obj > Switch_obj::__new() {
	::hx::ObjectPtr< Switch_obj > __this = new Switch_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Switch_obj > Switch_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Switch_obj *__this = (Switch_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Switch_obj), true, "haxe.ui.components.Switch"));
	*(void **)__this = Switch_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Switch_obj::Switch_obj()
{
}

::hx::Val Switch_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"textOn") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textOn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"textOff") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textOff() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selected() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_textOn") ) { return ::hx::Val( get_textOn_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textOn") ) { return ::hx::Val( set_textOn_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_textOff") ) { return ::hx::Val( get_textOff_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textOff") ) { return ::hx::Val( set_textOff_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_selected") ) { return ::hx::Val( get_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return ::hx::Val( set_selected_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Switch_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"textOn") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textOn(inValue.Cast< ::String >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"textOff") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textOff(inValue.Cast< ::String >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selected(inValue.Cast< bool >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Switch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("selected",5b,2a,6d,b1));
	outFields->push(HX_("textOn",2c,57,88,d8));
	outFields->push(HX_("textOff",c2,e8,c3,9e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Switch_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Switch_obj_sStaticStorageInfo = 0;
#endif

static ::String Switch_obj_sMemberFields[] = {
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_selected",64,de,86,66),
	HX_("set_selected",d8,01,80,7b),
	HX_("get_textOn",f5,c6,0f,c9),
	HX_("set_textOn",69,65,8d,cc),
	HX_("get_textOff",d9,48,be,24),
	HX_("set_textOff",e5,4f,2b,2f),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Switch_obj::__mClass;

void Switch_obj::__register()
{
	Switch_obj _hx_dummy;
	Switch_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.Switch",1a,07,61,5f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Switch_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Switch_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Switch_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Switch_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
