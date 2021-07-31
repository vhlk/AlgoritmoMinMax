// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_MinMax
#include <MinMax.h>
#endif
#ifndef INCLUDED_NextMove
#include <NextMove.h>
#endif
#ifndef INCLUDED_User
#include <User.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0c24820382934f49_5_minimaxDecision,"MinMax","minimaxDecision",0x5878608d,"MinMax.minimaxDecision","MinMax.hx",5,0xb95455ac)
HX_LOCAL_STACK_FRAME(_hx_pos_0c24820382934f49_8_maxValue,"MinMax","maxValue",0x2275a9c9,"MinMax.maxValue","MinMax.hx",8,0xb95455ac)
HX_LOCAL_STACK_FRAME(_hx_pos_0c24820382934f49_34_minValue,"MinMax","minValue",0x6f8fc41b,"MinMax.minValue","MinMax.hx",34,0xb95455ac)
HX_LOCAL_STACK_FRAME(_hx_pos_0c24820382934f49_54_terminalTest,"MinMax","terminalTest",0x136c598a,"MinMax.terminalTest","MinMax.hx",54,0xb95455ac)

void MinMax_obj::__construct() { }

Dynamic MinMax_obj::__CreateEmpty() { return new MinMax_obj; }

void *MinMax_obj::_hx_vtable = 0;

Dynamic MinMax_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MinMax_obj > _hx_result = new MinMax_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MinMax_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4f15b376;
}

int MinMax_obj::minimaxDecision(::Array< ::Dynamic> state){
            	HX_STACKFRAME(&_hx_pos_0c24820382934f49_5_minimaxDecision)
HXDLIN(   5)		return ::MinMax_obj::maxValue(state)->column;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MinMax_obj,minimaxDecision,return )

 ::NextMove MinMax_obj::maxValue(::Array< ::Dynamic> state){
            	HX_GC_STACKFRAME(&_hx_pos_0c24820382934f49_8_maxValue)
HXLINE(   9)		Float utility = ::MinMax_obj::terminalTest(state);
HXLINE(  10)		if ((utility != -1)) {
HXLINE(  11)			return  ::NextMove_obj::__alloc( HX_CTX ,-1,utility);
            		}
HXLINE(  14)		 ::NextMove res =  ::NextMove_obj::__alloc( HX_CTX ,-2,::Math_obj::NEGATIVE_INFINITY);
HXLINE(  15)		{
HXLINE(  15)			int _g = 0;
HXDLIN(  15)			int _g1 = state->length;
HXDLIN(  15)			while((_g < _g1)){
HXLINE(  15)				_g = (_g + 1);
HXDLIN(  15)				int i = (_g - 1);
HXLINE(  16)				::Array< ::Dynamic> column = ( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,i)) )->copy();
HXLINE(  19)				if ((column->length < 3)) {
HXLINE(  20)					column->push( ::User_obj::__alloc( HX_CTX ,false));
HXLINE(  21)					::Array< ::Dynamic> this1 = ::Array_obj< ::Dynamic>::__new(state->length);
HXDLIN(  21)					::Array< ::Dynamic> r = this1;
HXDLIN(  21)					r->blit(0,state,0,state->length);
HXDLIN(  21)					::Array< ::Dynamic> nextState = r;
HXLINE(  22)					nextState->__unsafe_set(i,column);
HXLINE(  23)					Float minV = ::MinMax_obj::minValue(nextState);
HXLINE(  25)					if ((minV > res->value)) {
HXLINE(  26)						res =  ::NextMove_obj::__alloc( HX_CTX ,i,minV);
            					}
            				}
            			}
            		}
HXLINE(  31)		return res;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MinMax_obj,maxValue,return )

Float MinMax_obj::minValue(::Array< ::Dynamic> state){
            	HX_GC_STACKFRAME(&_hx_pos_0c24820382934f49_34_minValue)
HXLINE(  35)		Float utility = ::MinMax_obj::terminalTest(state);
HXLINE(  36)		if ((utility != -1)) {
HXLINE(  37)			return utility;
            		}
HXLINE(  39)		Float res = ::Math_obj::POSITIVE_INFINITY;
HXLINE(  40)		{
HXLINE(  40)			int _g = 0;
HXDLIN(  40)			int _g1 = state->length;
HXDLIN(  40)			while((_g < _g1)){
HXLINE(  40)				_g = (_g + 1);
HXDLIN(  40)				int i = (_g - 1);
HXLINE(  41)				::Array< ::Dynamic> column = ( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,i)) )->copy();
HXLINE(  43)				if ((column->length < 3)) {
HXLINE(  44)					column->push( ::User_obj::__alloc( HX_CTX ,true));
HXLINE(  45)					::Array< ::Dynamic> this1 = ::Array_obj< ::Dynamic>::__new(state->length);
HXDLIN(  45)					::Array< ::Dynamic> r = this1;
HXDLIN(  45)					r->blit(0,state,0,state->length);
HXDLIN(  45)					::Array< ::Dynamic> nextState = r;
HXLINE(  46)					nextState->__unsafe_set(i,column);
HXLINE(  47)					res = ::Math_obj::min(res,::MinMax_obj::maxValue(nextState)->value);
            				}
            			}
            		}
HXLINE(  51)		return res;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MinMax_obj,minValue,return )

Float MinMax_obj::terminalTest(::Array< ::Dynamic> state){
            	HX_STACKFRAME(&_hx_pos_0c24820382934f49_54_terminalTest)
HXLINE(  55)		{
HXLINE(  55)			int _g = 0;
HXDLIN(  55)			int _g1 = state->length;
HXDLIN(  55)			while((_g < _g1)){
HXLINE(  55)				_g = (_g + 1);
HXDLIN(  55)				int i = (_g - 1);
HXLINE(  56)				::Array< ::Dynamic> column = ( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,i)) )->copy();
HXLINE(  59)				if ((column->length == 3)) {
HXLINE(  60)					::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  60)					{
HXLINE(  60)						int _g1 = 0;
HXDLIN(  60)						::Array< ::Dynamic> _g2 = column;
HXDLIN(  60)						while((_g1 < _g2->length)){
HXLINE(  60)							 ::User v = _g2->__get(_g1).StaticCast<  ::User >();
HXDLIN(  60)							_g1 = (_g1 + 1);
HXDLIN(  60)							if ((v->user == true)) {
HXLINE(  60)								_g->push(v);
            							}
            						}
            					}
HXDLIN(  60)					::Array< ::Dynamic> userMoves = _g;
HXLINE(  61)					if ((userMoves->length == 3)) {
HXLINE(  62)						return ::Math_obj::NEGATIVE_INFINITY;
            					}
HXLINE(  64)					int iaMoves = (column->length - userMoves->length);
HXLINE(  65)					if ((iaMoves == 3)) {
HXLINE(  66)						return ::Math_obj::POSITIVE_INFINITY;
            					}
            				}
HXLINE(  70)				if ((i <= 1)) {
HXLINE(  71)					int _g = 0;
HXDLIN(  71)					int _g1 = column->length;
HXDLIN(  71)					while((_g < _g1)){
HXLINE(  71)						_g = (_g + 1);
HXDLIN(  71)						int j = (_g - 1);
HXLINE(  72)						bool elemUser = ( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,i)) )->__get(j).StaticCast<  ::User >()->user;
HXLINE(  73)						bool _hx_tmp;
HXDLIN(  73)						if ((( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,(i + 1))) )->length > j)) {
HXLINE(  73)							_hx_tmp = (( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,(i + 1))) )->__get(j).StaticCast<  ::User >()->user == elemUser);
            						}
            						else {
HXLINE(  73)							_hx_tmp = false;
            						}
HXDLIN(  73)						if (_hx_tmp) {
HXLINE(  74)							bool _hx_tmp;
HXDLIN(  74)							if ((( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,(i + 2))) )->length > j)) {
HXLINE(  74)								_hx_tmp = (( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,(i + 2))) )->__get(j).StaticCast<  ::User >()->user == elemUser);
            							}
            							else {
HXLINE(  74)								_hx_tmp = false;
            							}
HXDLIN(  74)							if (_hx_tmp) {
HXLINE(  75)								if (elemUser) {
HXLINE(  75)									return ::Math_obj::NEGATIVE_INFINITY;
            								}
            								else {
HXLINE(  75)									return ::Math_obj::POSITIVE_INFINITY;
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  83)		if ((( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,1)) )->length > 1)) {
HXLINE(  84)			bool midUser = ( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,1)) )->__get(1).StaticCast<  ::User >()->user;
HXLINE(  85)			bool _hx_tmp;
HXDLIN(  85)			bool _hx_tmp1;
HXDLIN(  85)			bool _hx_tmp2;
HXDLIN(  85)			if ((( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,0)) )->length > 0)) {
HXLINE(  85)				_hx_tmp2 = (( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,0)) )->__get(0).StaticCast<  ::User >()->user == midUser);
            			}
            			else {
HXLINE(  85)				_hx_tmp2 = false;
            			}
HXDLIN(  85)			if (_hx_tmp2) {
HXLINE(  85)				_hx_tmp1 = (( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,2)) )->length == 3);
            			}
            			else {
HXLINE(  85)				_hx_tmp1 = false;
            			}
HXDLIN(  85)			if (_hx_tmp1) {
HXLINE(  85)				_hx_tmp = (( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,2)) )->__get(2).StaticCast<  ::User >()->user == midUser);
            			}
            			else {
HXLINE(  85)				_hx_tmp = false;
            			}
HXDLIN(  85)			if (_hx_tmp) {
HXLINE(  86)				if (midUser) {
HXLINE(  86)					return ::Math_obj::NEGATIVE_INFINITY;
            				}
            				else {
HXLINE(  86)					return ::Math_obj::POSITIVE_INFINITY;
            				}
            			}
HXLINE(  88)			bool _hx_tmp3;
HXDLIN(  88)			bool _hx_tmp4;
HXDLIN(  88)			bool _hx_tmp5;
HXDLIN(  88)			if ((( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,0)) )->length == 3)) {
HXLINE(  88)				_hx_tmp5 = (( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,0)) )->__get(2).StaticCast<  ::User >()->user == midUser);
            			}
            			else {
HXLINE(  88)				_hx_tmp5 = false;
            			}
HXDLIN(  88)			if (_hx_tmp5) {
HXLINE(  88)				_hx_tmp4 = (( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,2)) )->length > 0);
            			}
            			else {
HXLINE(  88)				_hx_tmp4 = false;
            			}
HXDLIN(  88)			if (_hx_tmp4) {
HXLINE(  88)				_hx_tmp3 = (( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,2)) )->__get(0).StaticCast<  ::User >()->user == midUser);
            			}
            			else {
HXLINE(  88)				_hx_tmp3 = false;
            			}
HXDLIN(  88)			if (_hx_tmp3) {
HXLINE(  89)				if (midUser) {
HXLINE(  89)					return ::Math_obj::NEGATIVE_INFINITY;
            				}
            				else {
HXLINE(  89)					return ::Math_obj::POSITIVE_INFINITY;
            				}
            			}
            		}
            		else {
HXLINE(  90)			if ((( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,2)) )->length > 1)) {
HXLINE(  91)				bool midUser = ( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,2)) )->__get(1).StaticCast<  ::User >()->user;
HXLINE(  92)				bool _hx_tmp;
HXDLIN(  92)				bool _hx_tmp1;
HXDLIN(  92)				bool _hx_tmp2;
HXDLIN(  92)				if ((( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,1)) )->length > 0)) {
HXLINE(  92)					_hx_tmp2 = (( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,1)) )->__get(0).StaticCast<  ::User >()->user == midUser);
            				}
            				else {
HXLINE(  92)					_hx_tmp2 = false;
            				}
HXDLIN(  92)				if (_hx_tmp2) {
HXLINE(  92)					_hx_tmp1 = (( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,3)) )->length == 3);
            				}
            				else {
HXLINE(  92)					_hx_tmp1 = false;
            				}
HXDLIN(  92)				if (_hx_tmp1) {
HXLINE(  92)					_hx_tmp = (( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,3)) )->__get(2).StaticCast<  ::User >()->user == midUser);
            				}
            				else {
HXLINE(  92)					_hx_tmp = false;
            				}
HXDLIN(  92)				if (_hx_tmp) {
HXLINE(  93)					if (midUser) {
HXLINE(  93)						return ::Math_obj::NEGATIVE_INFINITY;
            					}
            					else {
HXLINE(  93)						return ::Math_obj::POSITIVE_INFINITY;
            					}
            				}
HXLINE(  95)				bool _hx_tmp3;
HXDLIN(  95)				bool _hx_tmp4;
HXDLIN(  95)				bool _hx_tmp5;
HXDLIN(  95)				if ((( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,1)) )->length == 3)) {
HXLINE(  95)					_hx_tmp5 = (( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,1)) )->__get(2).StaticCast<  ::User >()->user == midUser);
            				}
            				else {
HXLINE(  95)					_hx_tmp5 = false;
            				}
HXDLIN(  95)				if (_hx_tmp5) {
HXLINE(  95)					_hx_tmp4 = (( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,3)) )->length > 0);
            				}
            				else {
HXLINE(  95)					_hx_tmp4 = false;
            				}
HXDLIN(  95)				if (_hx_tmp4) {
HXLINE(  95)					_hx_tmp3 = (( (::Array< ::Dynamic>)(_hx_array_unsafe_get(state,3)) )->__get(0).StaticCast<  ::User >()->user == midUser);
            				}
            				else {
HXLINE(  95)					_hx_tmp3 = false;
            				}
HXDLIN(  95)				if (_hx_tmp3) {
HXLINE(  96)					if (midUser) {
HXLINE(  96)						return ::Math_obj::NEGATIVE_INFINITY;
            					}
            					else {
HXLINE(  96)						return ::Math_obj::POSITIVE_INFINITY;
            					}
            				}
            			}
            		}
HXLINE(  99)		return ( (Float)(-1) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MinMax_obj,terminalTest,return )


MinMax_obj::MinMax_obj()
{
}

bool MinMax_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"maxValue") ) { outValue = maxValue_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"minValue") ) { outValue = minValue_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"terminalTest") ) { outValue = terminalTest_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"minimaxDecision") ) { outValue = minimaxDecision_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MinMax_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MinMax_obj_sStaticStorageInfo = 0;
#endif

::hx::Class MinMax_obj::__mClass;

static ::String MinMax_obj_sStaticFields[] = {
	HX_("minimaxDecision",a9,cc,a1,c4),
	HX_("maxValue",2d,d2,d5,db),
	HX_("minValue",7f,ec,ef,28),
	HX_("terminalTest",ee,83,12,98),
	::String(null())
};

void MinMax_obj::__register()
{
	MinMax_obj _hx_dummy;
	MinMax_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MinMax",52,ec,7d,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MinMax_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MinMax_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MinMax_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MinMax_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MinMax_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

