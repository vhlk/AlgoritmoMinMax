// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_binding_BindingManager
#include <haxe/ui/binding/BindingManager.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Column
#include <haxe/ui/components/Column.h>
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
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a1c63a8a58322222_5_new,"haxe.ui.components.Column","new",0xb60a5aee,"haxe.ui.components.Column.new","haxe/ui/components/Column.hx",5,0xb3ad9ac1)
HX_LOCAL_STACK_FRAME(_hx_pos_a1c63a8a58322222_10_get_sortable,"haxe.ui.components.Column","get_sortable",0xbf9b03b3,"haxe.ui.components.Column.get_sortable","haxe/ui/components/Column.hx",10,0xb3ad9ac1)
HX_LOCAL_STACK_FRAME(_hx_pos_a1c63a8a58322222_12_set_sortable,"haxe.ui.components.Column","set_sortable",0xd4942727,"haxe.ui.components.Column.set_sortable","haxe/ui/components/Column.hx",12,0xb3ad9ac1)
HX_LOCAL_STACK_FRAME(_hx_pos_8b4a53d6261f9d71_370_registerBehaviours,"haxe.ui.components.Column","registerBehaviours",0xce532d0b,"haxe.ui.components.Column.registerBehaviours","haxe/ui/macros/Macros.hx",370,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8e96c8c9b50ac217_525_cloneComponent,"haxe.ui.components.Column","cloneComponent",0x29a76dd2,"haxe.ui.components.Column.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",525,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_8b4a53d6261f9d71_351_self,"haxe.ui.components.Column","self",0x96533d3e,"haxe.ui.components.Column.self","haxe/ui/macros/Macros.hx",351,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void Column_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a1c63a8a58322222_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic Column_obj::__CreateEmpty() { return new Column_obj; }

void *Column_obj::_hx_vtable = 0;

Dynamic Column_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Column_obj > _hx_result = new Column_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Column_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0f2dd418) {
			if (inClassId<=(int)0x0330636f) {
				if (inClassId<=(int)0x01557b4b) {
					if (inClassId<=(int)0x00d785b2) {
						return inClassId==(int)0x00000001 || inClassId==(int)0x00d785b2;
					} else {
						return inClassId==(int)0x01557b4b;
					}
				} else {
					return inClassId==(int)0x0330636f;
				}
			} else {
				return inClassId==(int)0x0c89e854 || inClassId==(int)0x0f2dd418;
			}
		} else {
			if (inClassId<=(int)0x142c98ce) {
				if (inClassId<=(int)0x13d76ae7) {
					return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
				} else {
					return inClassId==(int)0x142c98ce;
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

bool Column_obj::get_sortable(){
            	HX_STACKFRAME(&_hx_pos_a1c63a8a58322222_10_get_sortable)
HXDLIN(  10)		return this->hasClass(HX_("sortable",f8,9b,0a,59));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Column_obj,get_sortable,return )

bool Column_obj::set_sortable(bool value){
            	HX_STACKFRAME(&_hx_pos_a1c63a8a58322222_12_set_sortable)
HXLINE(  13)		if ((value == true)) {
HXLINE(  14)			this->addClass(HX_("sortable",f8,9b,0a,59),null(),null());
            		}
            		else {
HXLINE(  16)			this->removeClass(HX_("sortable",f8,9b,0a,59),null(),null());
            		}
HXLINE(  18)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Column_obj,set_sortable,return )

void Column_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_8b4a53d6261f9d71_370_registerBehaviours)
HXDLIN( 370)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer Column_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_8e96c8c9b50ac217_525_cloneComponent)
HXLINE( 300)		 ::haxe::ui::components::Column c = ( ( ::haxe::ui::components::Column)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer Column_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_8b4a53d6261f9d71_351_self)
HXDLIN( 351)		return  ::haxe::ui::components::Column_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Column_obj > Column_obj::__new() {
	::hx::ObjectPtr< Column_obj > __this = new Column_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Column_obj > Column_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Column_obj *__this = (Column_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Column_obj), true, "haxe.ui.components.Column"));
	*(void **)__this = Column_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Column_obj::Column_obj()
{
}

::hx::Val Column_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sortable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_sortable() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_sortable") ) { return ::hx::Val( get_sortable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_sortable") ) { return ::hx::Val( set_sortable_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Column_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"sortable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_sortable(inValue.Cast< bool >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Column_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sortable",f8,9b,0a,59));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Column_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Column_obj_sStaticStorageInfo = 0;
#endif

static ::String Column_obj_sMemberFields[] = {
	HX_("get_sortable",01,50,24,0e),
	HX_("set_sortable",75,73,1d,23),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Column_obj::__mClass;

void Column_obj::__register()
{
	Column_obj _hx_dummy;
	Column_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.Column",fc,0b,73,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Column_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Column_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Column_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Column_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
