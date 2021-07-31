// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_Backend
#include <haxe/ui/Backend.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_BackendImpl
#include <haxe/ui/backend/BackendImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleSheet
#include <haxe/ui/styles/StyleSheet.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Value
#include <haxe/ui/styles/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_ValueTools
#include <haxe/ui/styles/ValueTools.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_Directive
#include <haxe/ui/styles/elements/Directive.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_MediaQuery
#include <haxe/ui/styles/elements/MediaQuery.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e0ff9bf0438fb4d4_6_new,"haxe.ui.styles.elements.MediaQuery","new",0x9d898b33,"haxe.ui.styles.elements.MediaQuery.new","haxe/ui/styles/elements/MediaQuery.hx",6,0xa27d1d1d)
HX_LOCAL_STACK_FRAME(_hx_pos_e0ff9bf0438fb4d4_16_addDirective,"haxe.ui.styles.elements.MediaQuery","addDirective",0x3c385cbb,"haxe.ui.styles.elements.MediaQuery.addDirective","haxe/ui/styles/elements/MediaQuery.hx",16,0xa27d1d1d)
HX_LOCAL_STACK_FRAME(_hx_pos_e0ff9bf0438fb4d4_20_get_relevant,"haxe.ui.styles.elements.MediaQuery","get_relevant",0x6678e9f3,"haxe.ui.styles.elements.MediaQuery.get_relevant","haxe/ui/styles/elements/MediaQuery.hx",20,0xa27d1d1d)
HX_LOCAL_STACK_FRAME(_hx_pos_e0ff9bf0438fb4d4_56_buildRatio,"haxe.ui.styles.elements.MediaQuery","buildRatio",0xe781188a,"haxe.ui.styles.elements.MediaQuery.buildRatio","haxe/ui/styles/elements/MediaQuery.hx",56,0xa27d1d1d)
HX_LOCAL_STACK_FRAME(_hx_pos_e0ff9bf0438fb4d4_65_get_styleSheet,"haxe.ui.styles.elements.MediaQuery","get_styleSheet",0xed63a404,"haxe.ui.styles.elements.MediaQuery.get_styleSheet","haxe/ui/styles/elements/MediaQuery.hx",65,0xa27d1d1d)
namespace haxe{
namespace ui{
namespace styles{
namespace elements{

void MediaQuery_obj::__construct(::Array< ::Dynamic> directives, ::haxe::ui::styles::StyleSheet styleSheet){
            	HX_STACKFRAME(&_hx_pos_e0ff9bf0438fb4d4_6_new)
HXLINE(   7)		this->_directives = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  11)		this->_directives = directives;
HXLINE(  12)		this->_styleSheet = styleSheet;
            	}

Dynamic MediaQuery_obj::__CreateEmpty() { return new MediaQuery_obj; }

void *MediaQuery_obj::_hx_vtable = 0;

Dynamic MediaQuery_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MediaQuery_obj > _hx_result = new MediaQuery_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MediaQuery_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0df2bd7f;
}

void MediaQuery_obj::addDirective( ::haxe::ui::styles::elements::Directive el){
            	HX_STACKFRAME(&_hx_pos_e0ff9bf0438fb4d4_16_addDirective)
HXDLIN(  16)		this->_directives->push(el);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MediaQuery_obj,addDirective,(void))

bool MediaQuery_obj::get_relevant(){
            	HX_STACKFRAME(&_hx_pos_e0ff9bf0438fb4d4_20_get_relevant)
HXLINE(  21)		bool b = true;
HXLINE(  22)		{
HXLINE(  22)			int _g = 0;
HXDLIN(  22)			::Array< ::Dynamic> _g1 = this->_directives;
HXDLIN(  22)			while((_g < _g1->length)){
HXLINE(  22)				 ::haxe::ui::styles::elements::Directive d = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::elements::Directive >();
HXDLIN(  22)				_g = (_g + 1);
HXLINE(  23)				::String _hx_switch_0 = d->directive;
            				if (  (_hx_switch_0==HX_("backend",14,bc,87,fb)) ){
HXLINE(  46)					if (b) {
HXLINE(  46)						::String b1 = ::haxe::ui::Backend_obj::get_id();
HXDLIN(  46)						b = (b1 == ::haxe::ui::styles::ValueTools_obj::string(d->value));
            					}
            					else {
HXLINE(  46)						b = false;
            					}
HXDLIN(  46)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("max-aspect-ratio",1f,28,a3,c6)) ){
HXLINE(  36)					Float sr = ::haxe::ui::core::Screen_obj::get_instance()->get_width();
HXDLIN(  36)					Float sr1 = (sr / ::haxe::ui::core::Screen_obj::get_instance()->get_height());
HXLINE(  37)					if (b) {
HXLINE(  37)						b = (sr1 < this->buildRatio(::haxe::ui::styles::ValueTools_obj::string(d->value)));
            					}
            					else {
HXLINE(  37)						b = false;
            					}
HXLINE(  35)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("max-height",b0,39,65,ee)) ){
HXLINE(  31)					if (b) {
HXLINE(  31)						Float b1 = ::haxe::ui::core::Screen_obj::get_instance()->get_height();
HXDLIN(  31)						b = ::hx::IsLess( b1,::haxe::ui::styles::ValueTools_obj::calcDimension(d->value) );
            					}
            					else {
HXLINE(  31)						b = false;
            					}
HXDLIN(  31)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("max-width",5d,90,68,c3)) ){
HXLINE(  27)					if (b) {
HXLINE(  27)						Float b1 = ::haxe::ui::core::Screen_obj::get_instance()->get_width();
HXDLIN(  27)						b = ::hx::IsLess( b1,::haxe::ui::styles::ValueTools_obj::calcDimension(d->value) );
            					}
            					else {
HXLINE(  27)						b = false;
            					}
HXDLIN(  27)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("min-aspect-ratio",71,e4,ba,d3)) ){
HXLINE(  33)					Float sr = ::haxe::ui::core::Screen_obj::get_instance()->get_width();
HXDLIN(  33)					Float sr1 = (sr / ::haxe::ui::core::Screen_obj::get_instance()->get_height());
HXLINE(  34)					if (b) {
HXLINE(  34)						b = (sr1 > this->buildRatio(::haxe::ui::styles::ValueTools_obj::string(d->value)));
            					}
            					else {
HXLINE(  34)						b = false;
            					}
HXLINE(  32)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("min-height",82,0c,f8,49)) ){
HXLINE(  29)					if (b) {
HXLINE(  29)						Float b1 = ::haxe::ui::core::Screen_obj::get_instance()->get_height();
HXDLIN(  29)						b = ::hx::IsGreater( b1,::haxe::ui::styles::ValueTools_obj::calcDimension(d->value) );
            					}
            					else {
HXLINE(  29)						b = false;
            					}
HXDLIN(  29)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("min-width",cb,7d,25,ed)) ){
HXLINE(  25)					if (b) {
HXLINE(  25)						Float b1 = ::haxe::ui::core::Screen_obj::get_instance()->get_width();
HXDLIN(  25)						b = ::hx::IsGreater( b1,::haxe::ui::styles::ValueTools_obj::calcDimension(d->value) );
            					}
            					else {
HXLINE(  25)						b = false;
            					}
HXDLIN(  25)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==HX_("orientation",d0,ee,fe,fd)) ){
HXLINE(  39)					::String v = ::haxe::ui::styles::ValueTools_obj::string(d->value);
HXLINE(  40)					if ((v == HX_("landscape",3b,78,ad,fc))) {
HXLINE(  41)						if (b) {
HXLINE(  41)							Float b1 = ::haxe::ui::core::Screen_obj::get_instance()->get_width();
HXDLIN(  41)							b = (b1 > ::haxe::ui::core::Screen_obj::get_instance()->get_height());
            						}
            						else {
HXLINE(  41)							b = false;
            						}
            					}
            					else {
HXLINE(  42)						if ((v == HX_("portrait",5b,21,af,b8))) {
HXLINE(  43)							if (b) {
HXLINE(  43)								Float b1 = ::haxe::ui::core::Screen_obj::get_instance()->get_height();
HXDLIN(  43)								b = (b1 > ::haxe::ui::core::Screen_obj::get_instance()->get_width());
            							}
            							else {
HXLINE(  43)								b = false;
            							}
            						}
            					}
HXLINE(  38)					goto _hx_goto_3;
            				}
            				/* default */{
            				}
            				_hx_goto_3:;
            			}
            		}
HXLINE(  53)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MediaQuery_obj,get_relevant,return )

Float MediaQuery_obj::buildRatio(::String s){
            	HX_STACKFRAME(&_hx_pos_e0ff9bf0438fb4d4_56_buildRatio)
HXLINE(  57)		::Array< ::String > p = s.split(HX_("/",2f,00,00,00));
HXLINE(  58)		 ::Dynamic w = ::Std_obj::parseInt(::StringTools_obj::trim(p->__get(0)));
HXLINE(  59)		 ::Dynamic h = ::Std_obj::parseInt(::StringTools_obj::trim(p->__get(1)));
HXLINE(  60)		return (( (Float)(w) ) / ( (Float)(h) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MediaQuery_obj,buildRatio,return )

 ::haxe::ui::styles::StyleSheet MediaQuery_obj::get_styleSheet(){
            	HX_STACKFRAME(&_hx_pos_e0ff9bf0438fb4d4_65_get_styleSheet)
HXDLIN(  65)		return this->_styleSheet;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MediaQuery_obj,get_styleSheet,return )


::hx::ObjectPtr< MediaQuery_obj > MediaQuery_obj::__new(::Array< ::Dynamic> directives, ::haxe::ui::styles::StyleSheet styleSheet) {
	::hx::ObjectPtr< MediaQuery_obj > __this = new MediaQuery_obj();
	__this->__construct(directives,styleSheet);
	return __this;
}

::hx::ObjectPtr< MediaQuery_obj > MediaQuery_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> directives, ::haxe::ui::styles::StyleSheet styleSheet) {
	MediaQuery_obj *__this = (MediaQuery_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MediaQuery_obj), true, "haxe.ui.styles.elements.MediaQuery"));
	*(void **)__this = MediaQuery_obj::_hx_vtable;
	__this->__construct(directives,styleSheet);
	return __this;
}

MediaQuery_obj::MediaQuery_obj()
{
}

void MediaQuery_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MediaQuery);
	HX_MARK_MEMBER_NAME(_directives,"_directives");
	HX_MARK_MEMBER_NAME(_styleSheet,"_styleSheet");
	HX_MARK_MEMBER_NAME(relevant,"relevant");
	HX_MARK_MEMBER_NAME(styleSheet,"styleSheet");
	HX_MARK_END_CLASS();
}

void MediaQuery_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_directives,"_directives");
	HX_VISIT_MEMBER_NAME(_styleSheet,"_styleSheet");
	HX_VISIT_MEMBER_NAME(relevant,"relevant");
	HX_VISIT_MEMBER_NAME(styleSheet,"styleSheet");
}

::hx::Val MediaQuery_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"relevant") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_relevant() : relevant ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buildRatio") ) { return ::hx::Val( buildRatio_dyn() ); }
		if (HX_FIELD_EQ(inName,"styleSheet") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_styleSheet() : styleSheet ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_directives") ) { return ::hx::Val( _directives ); }
		if (HX_FIELD_EQ(inName,"_styleSheet") ) { return ::hx::Val( _styleSheet ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addDirective") ) { return ::hx::Val( addDirective_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_relevant") ) { return ::hx::Val( get_relevant_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_styleSheet") ) { return ::hx::Val( get_styleSheet_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MediaQuery_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"relevant") ) { relevant=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"styleSheet") ) { styleSheet=inValue.Cast<  ::haxe::ui::styles::StyleSheet >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_directives") ) { _directives=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_styleSheet") ) { _styleSheet=inValue.Cast<  ::haxe::ui::styles::StyleSheet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MediaQuery_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_directives",63,aa,a4,fa));
	outFields->push(HX_("_styleSheet",cd,08,a0,ce));
	outFields->push(HX_("relevant",1d,63,bb,84));
	outFields->push(HX_("styleSheet",ae,3b,16,fc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MediaQuery_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MediaQuery_obj,_directives),HX_("_directives",63,aa,a4,fa)},
	{::hx::fsObject /*  ::haxe::ui::styles::StyleSheet */ ,(int)offsetof(MediaQuery_obj,_styleSheet),HX_("_styleSheet",cd,08,a0,ce)},
	{::hx::fsBool,(int)offsetof(MediaQuery_obj,relevant),HX_("relevant",1d,63,bb,84)},
	{::hx::fsObject /*  ::haxe::ui::styles::StyleSheet */ ,(int)offsetof(MediaQuery_obj,styleSheet),HX_("styleSheet",ae,3b,16,fc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MediaQuery_obj_sStaticStorageInfo = 0;
#endif

static ::String MediaQuery_obj_sMemberFields[] = {
	HX_("_directives",63,aa,a4,fa),
	HX_("_styleSheet",cd,08,a0,ce),
	HX_("addDirective",ee,89,94,0f),
	HX_("relevant",1d,63,bb,84),
	HX_("get_relevant",26,17,d5,39),
	HX_("buildRatio",fd,82,97,78),
	HX_("styleSheet",ae,3b,16,fc),
	HX_("get_styleSheet",f7,c3,0b,72),
	::String(null()) };

::hx::Class MediaQuery_obj::__mClass;

void MediaQuery_obj::__register()
{
	MediaQuery_obj _hx_dummy;
	MediaQuery_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.elements.MediaQuery",c1,75,19,fc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MediaQuery_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MediaQuery_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MediaQuery_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MediaQuery_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace elements
