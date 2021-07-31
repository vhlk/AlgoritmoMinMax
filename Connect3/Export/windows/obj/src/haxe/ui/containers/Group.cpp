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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Group
#include <haxe/ui/containers/Group.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__Group_Builder
#include <haxe/ui/containers/_Group/Builder.h>
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
#ifndef INCLUDED_haxe_ui_util_GUID
#include <haxe/ui/util/GUID.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2327f1cfde1c020d_12_new,"haxe.ui.containers.Group","new",0x4b2a6047,"haxe.ui.containers.Group.new","haxe/ui/containers/Group.hx",12,0xcb175b6a)
HX_LOCAL_STACK_FRAME(_hx_pos_e627758ecd5557af_369_registerBehaviours,"haxe.ui.containers.Group","registerBehaviours",0x2dbf13d2,"haxe.ui.containers.Group.registerBehaviours","haxe/ui/macros/Macros.hx",369,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e627758ecd5557af_388_get_componentGroup,"haxe.ui.containers.Group","get_componentGroup",0x7decb204,"haxe.ui.containers.Group.get_componentGroup","haxe/ui/macros/Macros.hx",388,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e627758ecd5557af_417_set_componentGroup,"haxe.ui.containers.Group","set_componentGroup",0x5a9be478,"haxe.ui.containers.Group.set_componentGroup","haxe/ui/macros/Macros.hx",417,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b3a0fad265f837b9_525_cloneComponent,"haxe.ui.containers.Group","cloneComponent",0x0138a519,"haxe.ui.containers.Group.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",525,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_e627758ecd5557af_351_self,"haxe.ui.containers.Group","self",0x7d37e5c5,"haxe.ui.containers.Group.self","haxe/ui/macros/Macros.hx",351,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e627758ecd5557af_71_registerComposite,"haxe.ui.containers.Group","registerComposite",0x511fdb4b,"haxe.ui.containers.Group.registerComposite","haxe/ui/macros/Macros.hx",71,0x27866361)
namespace haxe{
namespace ui{
namespace containers{

void Group_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2327f1cfde1c020d_12_new)
HXDLIN(  12)		super::__construct();
            	}

Dynamic Group_obj::__CreateEmpty() { return new Group_obj; }

void *Group_obj::_hx_vtable = 0;

Dynamic Group_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Group_obj > _hx_result = new Group_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Group_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241810fb) {
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
				return inClassId==(int)0x241810fb;
			}
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x2ccba775) {
				if (inClassId<=(int)0x299f1913) {
					return inClassId==(int)0x241b0321 || inClassId==(int)0x299f1913;
				} else {
					return inClassId==(int)0x2ccba775;
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

void Group_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_e627758ecd5557af_369_registerBehaviours)
HXLINE( 370)		this->super::registerBehaviours();
HXLINE( 451)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 451)		_hx_tmp->_hx_register(HX_("componentGroup",42,65,fb,e8),::hx::ClassOf< ::haxe::ui::behaviours::DataBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString((HX_("group",3f,b3,f4,99) + ::haxe::ui::util::GUID_obj::uuid())));
            	}


::String Group_obj::get_componentGroup(){
            	HX_STACKFRAME(&_hx_pos_e627758ecd5557af_388_get_componentGroup)
HXDLIN( 388)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("componentGroup",42,65,fb,e8)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Group_obj,get_componentGroup,return )

::String Group_obj::set_componentGroup(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_e627758ecd5557af_417_set_componentGroup)
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
HXLINE( 421)						::haxe::ui::binding::BindingManager_obj::get_instance()->addLanguageBinding(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("componentGroup",42,65,fb,e8),value,null());
HXLINE( 422)						return value;
            					}
            				}
            			}
            		}
HXLINE( 426)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 426)		_hx_tmp->set(HX_("componentGroup",42,65,fb,e8),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 427)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertyChange",a5,bb,45,6a),null(),HX_("componentGroup",42,65,fb,e8)));
HXLINE( 244)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("componentGroup",42,65,fb,e8));
HXLINE( 428)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Group_obj,set_componentGroup,return )

 ::haxe::ui::core::ComponentContainer Group_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_b3a0fad265f837b9_525_cloneComponent)
HXLINE( 300)		 ::haxe::ui::containers::Group c = ( ( ::haxe::ui::containers::Group)(this->super::cloneComponent()) );
HXLINE( 309)		if (::hx::IsNotNull( this->get_componentGroup() )) {
HXLINE( 309)			c->set_componentGroup(this->get_componentGroup());
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


 ::haxe::ui::core::ComponentContainer Group_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_e627758ecd5557af_351_self)
HXDLIN( 351)		return  ::haxe::ui::containers::Group_obj::__alloc( HX_CTX );
            	}


void Group_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_e627758ecd5557af_71_registerComposite)
HXLINE(  72)		this->super::registerComposite();
HXLINE(  84)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::_Group::Builder >();
            	}



::hx::ObjectPtr< Group_obj > Group_obj::__new() {
	::hx::ObjectPtr< Group_obj > __this = new Group_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Group_obj > Group_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Group_obj *__this = (Group_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Group_obj), true, "haxe.ui.containers.Group"));
	*(void **)__this = Group_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Group_obj::Group_obj()
{
}

::hx::Val Group_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"componentGroup") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentGroup() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_componentGroup") ) { return ::hx::Val( get_componentGroup_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentGroup") ) { return ::hx::Val( set_componentGroup_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Group_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"componentGroup") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentGroup(inValue.Cast< ::String >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Group_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("componentGroup",42,65,fb,e8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Group_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Group_obj_sStaticStorageInfo = 0;
#endif

static ::String Group_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_componentGroup",0b,46,95,84),
	HX_("set_componentGroup",7f,78,44,61),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	HX_("registerComposite",24,e5,7f,fe),
	::String(null()) };

::hx::Class Group_obj::__mClass;

void Group_obj::__register()
{
	Group_obj _hx_dummy;
	Group_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.Group",d5,30,bd,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Group_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Group_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Group_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Group_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
