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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Header
#include <haxe/ui/containers/Header.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__Header_Layout
#include <haxe/ui/containers/_Header/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a40a89a7fb53dd87_7_new,"haxe.ui.containers.Header","new",0x374e77a9,"haxe.ui.containers.Header.new","haxe/ui/containers/Header.hx",7,0x99daae66)
HX_LOCAL_STACK_FRAME(_hx_pos_d81e3849569e5e7d_71_registerComposite,"haxe.ui.containers.Header","registerComposite",0x57f15a2d,"haxe.ui.containers.Header.registerComposite","haxe/ui/macros/Macros.hx",71,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d81e3849569e5e7d_370_registerBehaviours,"haxe.ui.containers.Header","registerBehaviours",0x1e3c9ab0,"haxe.ui.containers.Header.registerBehaviours","haxe/ui/macros/Macros.hx",370,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_68ace50d51adcb50_525_cloneComponent,"haxe.ui.containers.Header","cloneComponent",0x5db5e4f7,"haxe.ui.containers.Header.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",525,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_d81e3849569e5e7d_351_self,"haxe.ui.containers.Header","self",0x30a84423,"haxe.ui.containers.Header.self","haxe/ui/macros/Macros.hx",351,0x27866361)
namespace haxe{
namespace ui{
namespace containers{

void Header_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_a40a89a7fb53dd87_7_new)
HXLINE(   8)		super::__construct();
HXLINE(   9)		this->set_layout( ::haxe::ui::containers::_Header::Layout_obj::__alloc( HX_CTX ));
            	}

Dynamic Header_obj::__CreateEmpty() { return new Header_obj; }

void *Header_obj::_hx_vtable = 0;

Dynamic Header_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Header_obj > _hx_result = new Header_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Header_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241810fb) {
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
			if (inClassId<=(int)0x226ebd39) {
				if (inClassId<=(int)0x1f4df417) {
					return inClassId==(int)0x13d76ae7 || inClassId==(int)0x1f4df417;
				} else {
					return inClassId==(int)0x226ebd39;
				}
			} else {
				return inClassId==(int)0x241810fb;
			}
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x2ccba775) {
				if (inClassId<=(int)0x2570d72f) {
					return inClassId==(int)0x241b0321 || inClassId==(int)0x2570d72f;
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

void Header_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_d81e3849569e5e7d_71_registerComposite)
HXLINE(  72)		this->super::registerComposite();
HXLINE(  88)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::containers::_Header::Layout >();
            	}


void Header_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_d81e3849569e5e7d_370_registerBehaviours)
HXDLIN( 370)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer Header_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_68ace50d51adcb50_525_cloneComponent)
HXLINE( 300)		 ::haxe::ui::containers::Header c = ( ( ::haxe::ui::containers::Header)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer Header_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_d81e3849569e5e7d_351_self)
HXDLIN( 351)		return  ::haxe::ui::containers::Header_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Header_obj > Header_obj::__new() {
	::hx::ObjectPtr< Header_obj > __this = new Header_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Header_obj > Header_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Header_obj *__this = (Header_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Header_obj), true, "haxe.ui.containers.Header"));
	*(void **)__this = Header_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Header_obj::Header_obj()
{
}

::hx::Val Header_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
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

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Header_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Header_obj_sStaticStorageInfo = 0;
#endif

static ::String Header_obj_sMemberFields[] = {
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Header_obj::__mClass;

void Header_obj::__register()
{
	Header_obj _hx_dummy;
	Header_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.Header",37,6f,a5,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Header_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Header_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Header_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Header_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
