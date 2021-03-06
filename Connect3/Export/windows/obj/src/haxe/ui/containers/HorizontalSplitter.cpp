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
#ifndef INCLUDED_haxe_ui_containers_HorizontalSplitter
#include <haxe/ui/containers/HorizontalSplitter.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Splitter
#include <haxe/ui/containers/Splitter.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_SplitterBuilder
#include <haxe/ui/containers/SplitterBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_SplitterEvents
#include <haxe/ui/containers/SplitterEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__HorizontalSplitter_HorizontalSplitterBuilder
#include <haxe/ui/containers/_HorizontalSplitter/HorizontalSplitterBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__HorizontalSplitter_HorizontalSplitterEvents
#include <haxe/ui/containers/_HorizontalSplitter/HorizontalSplitterEvents.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1f927ac67203db5b_10_new,"haxe.ui.containers.HorizontalSplitter","new",0xc87f7067,"haxe.ui.containers.HorizontalSplitter.new","haxe/ui/containers/HorizontalSplitter.hx",10,0x92d8d9e8)
HX_LOCAL_STACK_FRAME(_hx_pos_01f647bba6c1b2cb_71_registerComposite,"haxe.ui.containers.HorizontalSplitter","registerComposite",0xf2a4e36b,"haxe.ui.containers.HorizontalSplitter.registerComposite","haxe/ui/macros/Macros.hx",71,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_01f647bba6c1b2cb_370_registerBehaviours,"haxe.ui.containers.HorizontalSplitter","registerBehaviours",0xe0a127b2,"haxe.ui.containers.HorizontalSplitter.registerBehaviours","haxe/ui/macros/Macros.hx",370,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_a8fbda0bf24751af_525_cloneComponent,"haxe.ui.containers.HorizontalSplitter","cloneComponent",0x38cb48f9,"haxe.ui.containers.HorizontalSplitter.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",525,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_01f647bba6c1b2cb_351_self,"haxe.ui.containers.HorizontalSplitter","self",0xaa50f1a5,"haxe.ui.containers.HorizontalSplitter.self","haxe/ui/macros/Macros.hx",351,0x27866361)
namespace haxe{
namespace ui{
namespace containers{

void HorizontalSplitter_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1f927ac67203db5b_10_new)
HXLINE(  11)		super::__construct();
HXLINE(  12)		this->set_layoutName(HX_("horizontal",e4,fc,c3,15));
            	}

Dynamic HorizontalSplitter_obj::__CreateEmpty() { return new HorizontalSplitter_obj; }

void *HorizontalSplitter_obj::_hx_vtable = 0;

Dynamic HorizontalSplitter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HorizontalSplitter_obj > _hx_result = new HorizontalSplitter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HorizontalSplitter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
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
			if (inClassId<=(int)0x241810fb) {
				if (inClassId<=(int)0x1f4df417) {
					return inClassId==(int)0x13d76ae7 || inClassId==(int)0x1f4df417;
				} else {
					return inClassId==(int)0x241810fb;
				}
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x4806f9f7) {
				if (inClassId<=(int)0x38f42df3) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x38f42df3;
				} else {
					return inClassId==(int)0x4806f9f7;
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

void HorizontalSplitter_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_01f647bba6c1b2cb_71_registerComposite)
HXLINE(  72)		this->super::registerComposite();
HXLINE(  80)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::containers::_HorizontalSplitter::HorizontalSplitterEvents >();
HXLINE(  84)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::_HorizontalSplitter::HorizontalSplitterBuilder >();
            	}


void HorizontalSplitter_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_01f647bba6c1b2cb_370_registerBehaviours)
HXDLIN( 370)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer HorizontalSplitter_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_a8fbda0bf24751af_525_cloneComponent)
HXLINE( 300)		 ::haxe::ui::containers::HorizontalSplitter c = ( ( ::haxe::ui::containers::HorizontalSplitter)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer HorizontalSplitter_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_01f647bba6c1b2cb_351_self)
HXDLIN( 351)		return  ::haxe::ui::containers::HorizontalSplitter_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< HorizontalSplitter_obj > HorizontalSplitter_obj::__new() {
	::hx::ObjectPtr< HorizontalSplitter_obj > __this = new HorizontalSplitter_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HorizontalSplitter_obj > HorizontalSplitter_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HorizontalSplitter_obj *__this = (HorizontalSplitter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalSplitter_obj), true, "haxe.ui.containers.HorizontalSplitter"));
	*(void **)__this = HorizontalSplitter_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HorizontalSplitter_obj::HorizontalSplitter_obj()
{
}

::hx::Val HorizontalSplitter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *HorizontalSplitter_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HorizontalSplitter_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalSplitter_obj_sMemberFields[] = {
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class HorizontalSplitter_obj::__mClass;

void HorizontalSplitter_obj::__register()
{
	HorizontalSplitter_obj _hx_dummy;
	HorizontalSplitter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.HorizontalSplitter",f5,b0,ff,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HorizontalSplitter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HorizontalSplitter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalSplitter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalSplitter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
