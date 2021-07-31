// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Parser
#include <haxe/ui/styles/Parser.h>
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
#ifndef INCLUDED_haxe_ui_styles_elements_AnimationKeyFrame
#include <haxe/ui/styles/elements/AnimationKeyFrame.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_AnimationKeyFrames
#include <haxe/ui/styles/elements/AnimationKeyFrames.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_Directive
#include <haxe/ui/styles/elements/Directive.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_ImportElement
#include <haxe/ui/styles/elements/ImportElement.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_MediaQuery
#include <haxe/ui/styles/elements/MediaQuery.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_RuleElement
#include <haxe/ui/styles/elements/RuleElement.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_489322c2e63b6ea0_21_new,"haxe.ui.styles.Parser","new",0x38ed84eb,"haxe.ui.styles.Parser.new","haxe/ui/styles/Parser.hx",21,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_29_parse,"haxe.ui.styles.Parser","parse",0x972dbd7e,"haxe.ui.styles.Parser.parse","haxe/ui/styles/Parser.hx",29,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_43_parse,"haxe.ui.styles.Parser","parse",0x972dbd7e,"haxe.ui.styles.Parser.parse","haxe/ui/styles/Parser.hx",43,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_38_parse,"haxe.ui.styles.Parser","parse",0x972dbd7e,"haxe.ui.styles.Parser.parse","haxe/ui/styles/Parser.hx",38,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_66_parse,"haxe.ui.styles.Parser","parse",0x972dbd7e,"haxe.ui.styles.Parser.parse","haxe/ui/styles/Parser.hx",66,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_24_parse,"haxe.ui.styles.Parser","parse",0x972dbd7e,"haxe.ui.styles.Parser.parse","haxe/ui/styles/Parser.hx",24,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_105_parseDirectives,"haxe.ui.styles.Parser","parseDirectives",0xf2e0a862,"haxe.ui.styles.Parser.parseDirectives","haxe/ui/styles/Parser.hx",105,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_120_parseDirective,"haxe.ui.styles.Parser","parseDirective",0xec6ceaf1,"haxe.ui.styles.Parser.parseDirective","haxe/ui/styles/Parser.hx",120,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_13_boot,"haxe.ui.styles.Parser","boot",0x8effc947,"haxe.ui.styles.Parser.boot","haxe/ui/styles/Parser.hx",13,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_14_boot,"haxe.ui.styles.Parser","boot",0x8effc947,"haxe.ui.styles.Parser.boot","haxe/ui/styles/Parser.hx",14,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_15_boot,"haxe.ui.styles.Parser","boot",0x8effc947,"haxe.ui.styles.Parser.boot","haxe/ui/styles/Parser.hx",15,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_16_boot,"haxe.ui.styles.Parser","boot",0x8effc947,"haxe.ui.styles.Parser.boot","haxe/ui/styles/Parser.hx",16,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_17_boot,"haxe.ui.styles.Parser","boot",0x8effc947,"haxe.ui.styles.Parser.boot","haxe/ui/styles/Parser.hx",17,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_19_boot,"haxe.ui.styles.Parser","boot",0x8effc947,"haxe.ui.styles.Parser.boot","haxe/ui/styles/Parser.hx",19,0xf482af64)
namespace haxe{
namespace ui{
namespace styles{

void Parser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_21_new)
            	}

Dynamic Parser_obj::__CreateEmpty() { return new Parser_obj; }

void *Parser_obj::_hx_vtable = 0;

Dynamic Parser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Parser_obj > _hx_result = new Parser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Parser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x533b3d9b;
}

 ::haxe::ui::styles::StyleSheet Parser_obj::parse(::String source){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::styles::StyleSheet,styleSheet) HXARGC(1)
            		::String _hx_run( ::EReg e){
            			HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_29_parse)
HXLINE(  30)			::String i = e->matched(0);
HXLINE(  31)			i = i.substr(7,null());
HXLINE(  32)			i =  ::EReg_obj::__alloc( HX_CTX ,HX_("\"|'|;",4c,32,b4,e5),HX_("g",67,00,00,00))->replace(i,HX_("",00,00,00,00));
HXLINE(  33)			i = ::StringTools_obj::trim(i);
HXLINE(  34)			 ::haxe::ui::styles::StyleSheet styleSheet1 = styleSheet;
HXDLIN(  34)			styleSheet1->addImport( ::haxe::ui::styles::elements::ImportElement_obj::__alloc( HX_CTX ,i));
HXLINE(  35)			return HX_("",00,00,00,00);
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::haxe::ui::styles::Parser,_gthis, ::haxe::ui::styles::StyleSheet,styleSheet) HXARGC(1)
            		::String _hx_run( ::EReg e){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::haxe::ui::styles::Parser,_gthis,::Array< ::Dynamic>,keyframes) HXARGC(1)
            			::String _hx_run( ::EReg e){
            				HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_43_parse)
HXLINE(  44)				::String selector = e->matched(1);
HXLINE(  45)				::String directives = e->matched(2);
HXLINE(  46)				if ((selector == HX_("from",6a,a5,c2,43))) {
HXLINE(  47)					selector = HX_("0%",f5,29,00,00);
            				}
            				else {
HXLINE(  48)					if ((selector == HX_("to",7b,65,00,00))) {
HXLINE(  49)						selector = HX_("100%",94,0a,88,20);
            					}
            				}
HXLINE(  52)				 ::haxe::ui::styles::elements::AnimationKeyFrame keyframe =  ::haxe::ui::styles::elements::AnimationKeyFrame_obj::__alloc( HX_CTX );
HXLINE(  53)				keyframe->time = ::haxe::ui::styles::ValueTools_obj::parse(selector);
HXLINE(  54)				keyframe->directives = _gthis->parseDirectives(directives);
HXLINE(  55)				keyframes->push(keyframe);
HXLINE(  57)				return null();
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_38_parse)
HXLINE(  39)			::String id = e->matched(1);
HXLINE(  40)			::String data = e->matched(2);
HXLINE(  42)			::Array< ::Dynamic> keyframes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  43)			::haxe::ui::styles::Parser_obj::cssKeyframeSelectorRegex->map(data, ::Dynamic(new _hx_Closure_1(_gthis,keyframes)));
HXLINE(  60)			 ::haxe::ui::styles::elements::AnimationKeyFrames animation =  ::haxe::ui::styles::elements::AnimationKeyFrames_obj::__alloc( HX_CTX ,id,keyframes);
HXLINE(  61)			styleSheet->addAnimation(animation);
HXLINE(  63)			return HX_("",00,00,00,00);
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3, ::haxe::ui::styles::Parser,_gthis, ::haxe::ui::styles::StyleSheet,styleSheet) HXARGC(1)
            		::String _hx_run( ::EReg e){
            			HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_66_parse)
HXLINE(  67)			::String selector = HX_("",00,00,00,00);
HXLINE(  68)			if (::hx::IsNull( e->matched(2) )) {
HXLINE(  69)				selector = ::StringTools_obj::trim(e->matched(5).split(HX_("\r\n",5d,0b,00,00))->join(HX_("\n",0a,00,00,00)));
            			}
            			else {
HXLINE(  71)				selector = ::StringTools_obj::trim(e->matched(2).split(HX_("\r\n",5d,0b,00,00))->join(HX_("\n",0a,00,00,00)));
            			}
HXLINE(  75)			selector = ::haxe::ui::styles::Parser_obj::newlineRegex->replace(selector,HX_("\n",0a,00,00,00));
HXLINE(  79)			if ((selector.indexOf(HX_("@media",a4,1c,93,9c),null()) != -1)) {
HXLINE(  80)				int n1 = selector.indexOf(HX_("(",28,00,00,00),null());
HXLINE(  81)				int n2 = selector.lastIndexOf(HX_(")",29,00,00,00),null());
HXLINE(  82)				::String mediaQuery = selector.substring((n1 + 1),n2);
HXLINE(  84)				 ::haxe::ui::styles::Parser mediaStyleSheet =  ::haxe::ui::styles::Parser_obj::__alloc( HX_CTX );
HXDLIN(  84)				 ::haxe::ui::styles::StyleSheet mediaStyleSheet1 = mediaStyleSheet->parse((e->matched(3) + HX_("\n}",33,09,00,00)));
HXLINE(  85)				 ::haxe::ui::styles::elements::MediaQuery mq =  ::haxe::ui::styles::elements::MediaQuery_obj::__alloc( HX_CTX ,_gthis->parseDirectives(mediaQuery),mediaStyleSheet1);
HXLINE(  86)				styleSheet->addMediaQuery(mq);
            			}
            			else {
HXLINE(  89)				 ::haxe::ui::styles::Parser _gthis1 = _gthis;
HXDLIN(  89)				::Array< ::Dynamic> directives = _gthis1->parseDirectives(e->matched(6));
HXLINE(  90)				::Array< ::String > selectors = selector.split(HX_(",",2c,00,00,00));
HXLINE(  91)				{
HXLINE(  91)					int _g = 0;
HXDLIN(  91)					while((_g < selectors->length)){
HXLINE(  91)						::String s = selectors->__get(_g);
HXDLIN(  91)						_g = (_g + 1);
HXLINE(  92)						s = ::StringTools_obj::trim(s);
HXLINE(  93)						if ((s.length > 0)) {
HXLINE(  94)							 ::haxe::ui::styles::StyleSheet styleSheet1 = styleSheet;
HXDLIN(  94)							styleSheet1->addRule( ::haxe::ui::styles::elements::RuleElement_obj::__alloc( HX_CTX ,s,directives));
            						}
            					}
            				}
            			}
HXLINE(  99)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_24_parse)
HXDLIN(  24)		 ::haxe::ui::styles::Parser _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  25)		source = ::haxe::ui::styles::Parser_obj::cssCommentsRegex->replace(source,HX_("",00,00,00,00));
HXLINE(  27)		 ::haxe::ui::styles::StyleSheet styleSheet =  ::haxe::ui::styles::StyleSheet_obj::__alloc( HX_CTX );
HXLINE(  29)		source = ::haxe::ui::styles::Parser_obj::cssImportStatementRegex->map(source, ::Dynamic(new _hx_Closure_0(styleSheet)));
HXLINE(  38)		source = ::haxe::ui::styles::Parser_obj::cssKeyframesRegex->map(source, ::Dynamic(new _hx_Closure_2(_gthis,styleSheet)));
HXLINE(  66)		::haxe::ui::styles::Parser_obj::combinedCSSMediaRegex->map(source, ::Dynamic(new _hx_Closure_3(_gthis,styleSheet)));
HXLINE( 102)		return styleSheet;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parse,return )

::Array< ::Dynamic> Parser_obj::parseDirectives(::String rulesString){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_105_parseDirectives)
HXLINE( 106)		rulesString = rulesString.split(HX_("\r\n",5d,0b,00,00))->join(HX_("\n",0a,00,00,00));
HXLINE( 107)		::Array< ::Dynamic> ret = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 109)		::Array< ::String > rules = rulesString.split(HX_(";",3b,00,00,00));
HXLINE( 110)		{
HXLINE( 110)			int _g = 0;
HXDLIN( 110)			while((_g < rules->length)){
HXLINE( 110)				::String line = rules->__get(_g);
HXDLIN( 110)				_g = (_g + 1);
HXLINE( 111)				 ::haxe::ui::styles::elements::Directive d = this->parseDirective(line);
HXLINE( 112)				if (::hx::IsNotNull( d )) {
HXLINE( 113)					ret->push(d);
            				}
            			}
            		}
HXLINE( 117)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseDirectives,return )

 ::haxe::ui::styles::elements::Directive Parser_obj::parseDirective(::String line){
            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_120_parseDirective)
HXLINE( 121)		 ::haxe::ui::styles::elements::Directive d = null();
HXLINE( 122)		line = ::StringTools_obj::trim(line);
HXLINE( 123)		if ((line.length == 0)) {
HXLINE( 124)			return null();
            		}
HXLINE( 127)		if ((line.indexOf(HX_(":",3a,00,00,00),null()) != -1)) {
HXLINE( 128)			::Array< ::String > parts = line.split(HX_(":",3a,00,00,00));
HXLINE( 129)			::String cssDirective = ::StringTools_obj::trim(parts->__get(0));
HXLINE( 130)			::String cssValue = ::StringTools_obj::trim(parts->slice(1,null())->join(HX_(":",3a,00,00,00)));
HXLINE( 133)			bool _hx_tmp;
HXDLIN( 133)			if ((cssDirective.length >= 1)) {
HXLINE( 133)				_hx_tmp = (cssValue.length < 1);
            			}
            			else {
HXLINE( 133)				_hx_tmp = true;
            			}
HXDLIN( 133)			if (_hx_tmp) {
HXLINE( 134)				return null();
            			}
HXLINE( 136)			d =  ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,cssDirective,::haxe::ui::styles::ValueTools_obj::parse(cssValue),null());
            		}
            		else {
HXLINE( 138)			d =  ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),::haxe::ui::styles::ValueTools_obj::parse(line),true);
            		}
HXLINE( 141)		return d;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseDirective,return )

 ::EReg Parser_obj::cssKeyframesRegex;

 ::EReg Parser_obj::cssKeyframeSelectorRegex;

 ::EReg Parser_obj::combinedCSSMediaRegex;

 ::EReg Parser_obj::cssCommentsRegex;

 ::EReg Parser_obj::cssImportStatementRegex;

 ::EReg Parser_obj::newlineRegex;


::hx::ObjectPtr< Parser_obj > Parser_obj::__new() {
	::hx::ObjectPtr< Parser_obj > __this = new Parser_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Parser_obj > Parser_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Parser_obj *__this = (Parser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Parser_obj), false, "haxe.ui.styles.Parser"));
	*(void **)__this = Parser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Parser_obj::Parser_obj()
{
}

::hx::Val Parser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parseDirective") ) { return ::hx::Val( parseDirective_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parseDirectives") ) { return ::hx::Val( parseDirectives_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Parser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"newlineRegex") ) { outValue = ( newlineRegex ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cssCommentsRegex") ) { outValue = ( cssCommentsRegex ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cssKeyframesRegex") ) { outValue = ( cssKeyframesRegex ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"combinedCSSMediaRegex") ) { outValue = ( combinedCSSMediaRegex ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"cssImportStatementRegex") ) { outValue = ( cssImportStatementRegex ); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cssKeyframeSelectorRegex") ) { outValue = ( cssKeyframeSelectorRegex ); return true; }
	}
	return false;
}

bool Parser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"newlineRegex") ) { newlineRegex=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cssCommentsRegex") ) { cssCommentsRegex=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cssKeyframesRegex") ) { cssKeyframesRegex=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"combinedCSSMediaRegex") ) { combinedCSSMediaRegex=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"cssImportStatementRegex") ) { cssImportStatementRegex=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cssKeyframeSelectorRegex") ) { cssKeyframeSelectorRegex=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Parser_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Parser_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(void *) &Parser_obj::cssKeyframesRegex,HX_("cssKeyframesRegex",25,a9,d3,cb)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &Parser_obj::cssKeyframeSelectorRegex,HX_("cssKeyframeSelectorRegex",57,0b,91,f0)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &Parser_obj::combinedCSSMediaRegex,HX_("combinedCSSMediaRegex",a1,08,2c,fe)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &Parser_obj::cssCommentsRegex,HX_("cssCommentsRegex",30,97,eb,03)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &Parser_obj::cssImportStatementRegex,HX_("cssImportStatementRegex",c0,7b,53,f5)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &Parser_obj::newlineRegex,HX_("newlineRegex",d3,55,59,a8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Parser_obj_sMemberFields[] = {
	HX_("parse",33,90,55,bd),
	HX_("parseDirectives",57,cf,04,81),
	HX_("parseDirective",9c,99,61,54),
	::String(null()) };

static void Parser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parser_obj::cssKeyframesRegex,"cssKeyframesRegex");
	HX_MARK_MEMBER_NAME(Parser_obj::cssKeyframeSelectorRegex,"cssKeyframeSelectorRegex");
	HX_MARK_MEMBER_NAME(Parser_obj::combinedCSSMediaRegex,"combinedCSSMediaRegex");
	HX_MARK_MEMBER_NAME(Parser_obj::cssCommentsRegex,"cssCommentsRegex");
	HX_MARK_MEMBER_NAME(Parser_obj::cssImportStatementRegex,"cssImportStatementRegex");
	HX_MARK_MEMBER_NAME(Parser_obj::newlineRegex,"newlineRegex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Parser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parser_obj::cssKeyframesRegex,"cssKeyframesRegex");
	HX_VISIT_MEMBER_NAME(Parser_obj::cssKeyframeSelectorRegex,"cssKeyframeSelectorRegex");
	HX_VISIT_MEMBER_NAME(Parser_obj::combinedCSSMediaRegex,"combinedCSSMediaRegex");
	HX_VISIT_MEMBER_NAME(Parser_obj::cssCommentsRegex,"cssCommentsRegex");
	HX_VISIT_MEMBER_NAME(Parser_obj::cssImportStatementRegex,"cssImportStatementRegex");
	HX_VISIT_MEMBER_NAME(Parser_obj::newlineRegex,"newlineRegex");
};

#endif

::hx::Class Parser_obj::__mClass;

static ::String Parser_obj_sStaticFields[] = {
	HX_("cssKeyframesRegex",25,a9,d3,cb),
	HX_("cssKeyframeSelectorRegex",57,0b,91,f0),
	HX_("combinedCSSMediaRegex",a1,08,2c,fe),
	HX_("cssCommentsRegex",30,97,eb,03),
	HX_("cssImportStatementRegex",c0,7b,53,f5),
	HX_("newlineRegex",d3,55,59,a8),
	::String(null())
};

void Parser_obj::__register()
{
	Parser_obj _hx_dummy;
	Parser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.Parser",79,33,20,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Parser_obj::__GetStatic;
	__mClass->mSetStaticField = &Parser_obj::__SetStatic;
	__mClass->mMarkFunc = Parser_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Parser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Parser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Parser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Parser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Parser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Parser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Parser_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_13_boot)
HXDLIN(  13)		cssKeyframesRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("@keyframes\\s*(\\w+?)\\s*\\{([\\s\\S]*?\\}\\s*?)\\}",9e,98,2f,d3),HX_("gi",22,5a,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_14_boot)
HXDLIN(  14)		cssKeyframeSelectorRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("([\\w%]+)\\s*\\{\\s*([\\s\\S]*?)\\s*\\}",97,5c,7c,ae),HX_("gi",22,5a,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_15_boot)
HXDLIN(  15)		combinedCSSMediaRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("((\\s*?(?:/\\*[\\s\\S]*?\\*/)?\\s*?@media[\\s\\S]*?)\\{([\\s\\S]*?)\\}\\s*?\\})|(([\\s\\S]*?)\\{([\\s\\S]*?)\\})",11,18,6c,7f),HX_("gi",22,5a,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_16_boot)
HXDLIN(  16)		cssCommentsRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("(/\\*[\\s\\S]*?\\*/)",66,e7,99,b5),HX_("gi",22,5a,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_17_boot)
HXDLIN(  17)		cssImportStatementRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("@import .*?;",b3,0e,97,b2),HX_("gi",22,5a,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_19_boot)
HXDLIN(  19)		newlineRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("\n+",e1,08,00,00),HX_("g",67,00,00,00));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
