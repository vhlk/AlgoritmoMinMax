// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_DOMRenderer
#include <openfl/display/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DOMDisplayObject
#include <openfl/display/_internal/DOMDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DOMSimpleButton
#include <openfl/display/_internal/DOMSimpleButton.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_528f7f21fd241d40_8_renderDrawable,"openfl.display._internal.DOMSimpleButton","renderDrawable",0xe7a92f18,"openfl.display._internal.DOMSimpleButton.renderDrawable","openfl/display/_internal/DOMSimpleButton.hx",8,0x036fd757)
HX_LOCAL_STACK_FRAME(_hx_pos_528f7f21fd241d40_37_renderDrawableClear,"openfl.display._internal.DOMSimpleButton","renderDrawableClear",0xedc5fb55,"openfl.display._internal.DOMSimpleButton.renderDrawableClear","openfl/display/_internal/DOMSimpleButton.hx",37,0x036fd757)
namespace openfl{
namespace display{
namespace _internal{

void DOMSimpleButton_obj::__construct() { }

Dynamic DOMSimpleButton_obj::__CreateEmpty() { return new DOMSimpleButton_obj; }

void *DOMSimpleButton_obj::_hx_vtable = 0;

Dynamic DOMSimpleButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DOMSimpleButton_obj > _hx_result = new DOMSimpleButton_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DOMSimpleButton_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x250e2278;
}

void DOMSimpleButton_obj::renderDrawable( ::openfl::display::SimpleButton simpleButton, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_528f7f21fd241d40_8_renderDrawable)
HXLINE(  10)		renderer->_hx___pushMaskObject(simpleButton,null());
HXLINE(  12)		{
HXLINE(  12)			 ::Dynamic previousState = simpleButton->_hx___previousStates->iterator();
HXDLIN(  12)			while(( (bool)(previousState->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  12)				 ::openfl::display::DisplayObject previousState1 = ( ( ::openfl::display::DisplayObject)(previousState->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  14)				renderer->_hx___renderDrawable(previousState1);
            			}
            		}
HXLINE(  17)		simpleButton->_hx___previousStates->set_length(0);
HXLINE(  19)		if (::hx::IsNotNull( simpleButton->_hx___currentState )) {
HXLINE(  21)			if (::hx::IsInstanceNotEq( simpleButton->_hx___currentState->stage,simpleButton->stage )) {
HXLINE(  23)				simpleButton->_hx___currentState->_hx___setStageReference(simpleButton->stage);
            			}
HXLINE(  26)			renderer->_hx___renderDrawable(simpleButton->_hx___currentState);
            		}
HXLINE(  29)		renderer->_hx___popMaskObject(simpleButton,null());
HXLINE(  31)		renderer->_hx___renderEvent(simpleButton);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMSimpleButton_obj,renderDrawable,(void))

void DOMSimpleButton_obj::renderDrawableClear( ::openfl::display::SimpleButton simpleButton, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_528f7f21fd241d40_37_renderDrawableClear)
HXDLIN(  37)		::openfl::display::_internal::DOMDisplayObject_obj::renderDrawableClear(simpleButton,renderer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMSimpleButton_obj,renderDrawableClear,(void))


DOMSimpleButton_obj::DOMSimpleButton_obj()
{
}

bool DOMSimpleButton_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDrawableClear") ) { outValue = renderDrawableClear_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DOMSimpleButton_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DOMSimpleButton_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DOMSimpleButton_obj::__mClass;

static ::String DOMSimpleButton_obj_sStaticFields[] = {
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableClear",d9,1f,f9,ad),
	::String(null())
};

void DOMSimpleButton_obj::__register()
{
	DOMSimpleButton_obj _hx_dummy;
	DOMSimpleButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.DOMSimpleButton",ea,15,23,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMSimpleButton_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DOMSimpleButton_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DOMSimpleButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMSimpleButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMSimpleButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal