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
#ifndef INCLUDED_haxe_ui_components_HorizontalSlider
#include <haxe/ui/components/HorizontalSlider.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HorizontalSliderLayout
#include <haxe/ui/components/HorizontalSliderLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Slider
#include <haxe/ui/components/Slider.h>
#endif
#ifndef INCLUDED_haxe_ui_components_SliderBuilder
#include <haxe/ui/components/SliderBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__HorizontalSlider_Builder
#include <haxe/ui/components/_HorizontalSlider/Builder.h>
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
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d4023a78b3367caa_8_new,"haxe.ui.components.HorizontalSlider","new",0x5026453d,"haxe.ui.components.HorizontalSlider.new","haxe/ui/components/HorizontalSlider.hx",8,0x1d546412)
HX_LOCAL_STACK_FRAME(_hx_pos_22541af1458d191c_71_registerComposite,"haxe.ui.components.HorizontalSlider","registerComposite",0x3b6e42c1,"haxe.ui.components.HorizontalSlider.registerComposite","haxe/ui/macros/Macros.hx",71,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_22541af1458d191c_370_registerBehaviours,"haxe.ui.components.HorizontalSlider","registerBehaviours",0x480b339c,"haxe.ui.components.HorizontalSlider.registerBehaviours","haxe/ui/macros/Macros.hx",370,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_550f82a2aee14b27_525_cloneComponent,"haxe.ui.components.HorizontalSlider","cloneComponent",0xa3b297e3,"haxe.ui.components.HorizontalSlider.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",525,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_22541af1458d191c_351_self,"haxe.ui.components.HorizontalSlider","self",0xd4a4580f,"haxe.ui.components.HorizontalSlider.self","haxe/ui/macros/Macros.hx",351,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void HorizontalSlider_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d4023a78b3367caa_8_new)
HXDLIN(   8)		super::__construct();
            	}

Dynamic HorizontalSlider_obj::__CreateEmpty() { return new HorizontalSlider_obj; }

void *HorizontalSlider_obj::_hx_vtable = 0;

Dynamic HorizontalSlider_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HorizontalSlider_obj > _hx_result = new HorizontalSlider_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HorizontalSlider_obj::_hx_isInstanceOf(int inClassId) {
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
			if (inClassId<=(int)0x21c6c79d) {
				if (inClassId<=(int)0x1f4df417) {
					return inClassId==(int)0x13d76ae7 || inClassId==(int)0x1f4df417;
				} else {
					return inClassId==(int)0x21c6c79d;
				}
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x395782b4) {
				if (inClassId<=(int)0x353daed1) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x353daed1;
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

void HorizontalSlider_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_22541af1458d191c_71_registerComposite)
HXLINE(  72)		this->super::registerComposite();
HXLINE(  88)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::components::HorizontalSliderLayout >();
HXLINE(  84)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::_HorizontalSlider::Builder >();
            	}


void HorizontalSlider_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_22541af1458d191c_370_registerBehaviours)
HXDLIN( 370)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer HorizontalSlider_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_550f82a2aee14b27_525_cloneComponent)
HXLINE( 300)		 ::haxe::ui::components::HorizontalSlider c = ( ( ::haxe::ui::components::HorizontalSlider)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer HorizontalSlider_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_22541af1458d191c_351_self)
HXDLIN( 351)		return  ::haxe::ui::components::HorizontalSlider_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< HorizontalSlider_obj > HorizontalSlider_obj::__new() {
	::hx::ObjectPtr< HorizontalSlider_obj > __this = new HorizontalSlider_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HorizontalSlider_obj > HorizontalSlider_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HorizontalSlider_obj *__this = (HorizontalSlider_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalSlider_obj), true, "haxe.ui.components.HorizontalSlider"));
	*(void **)__this = HorizontalSlider_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HorizontalSlider_obj::HorizontalSlider_obj()
{
}

::hx::Val HorizontalSlider_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *HorizontalSlider_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HorizontalSlider_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalSlider_obj_sMemberFields[] = {
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class HorizontalSlider_obj::__mClass;

void HorizontalSlider_obj::__register()
{
	HorizontalSlider_obj _hx_dummy;
	HorizontalSlider_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.HorizontalSlider",cb,e2,79,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HorizontalSlider_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HorizontalSlider_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalSlider_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalSlider_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
