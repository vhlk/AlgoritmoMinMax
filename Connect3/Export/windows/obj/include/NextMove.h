// Generated by Haxe 4.2.0
#ifndef INCLUDED_NextMove
#define INCLUDED_NextMove

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_b2de0c04482600c2_163_new)
HX_DECLARE_CLASS0(NextMove)



class HXCPP_CLASS_ATTRIBUTES NextMove_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NextMove_obj OBJ_;
		NextMove_obj();

	public:
		enum { _hx_ClassId = 0x29703884 };

		void __construct(int column,Float value);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="NextMove")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"NextMove"); }

		inline static ::hx::ObjectPtr< NextMove_obj > __new(int column,Float value) {
			::hx::ObjectPtr< NextMove_obj > __this = new NextMove_obj();
			__this->__construct(column,value);
			return __this;
		}

		inline static ::hx::ObjectPtr< NextMove_obj > __alloc(::hx::Ctx *_hx_ctx,int column,Float value) {
			NextMove_obj *__this = (NextMove_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NextMove_obj), false, "NextMove"));
			*(void **)__this = NextMove_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_b2de0c04482600c2_163_new)
HXLINE( 164)		( ( ::NextMove)(__this) )->column = column;
HXLINE( 165)		( ( ::NextMove)(__this) )->value = value;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NextMove_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NextMove",c4,45,df,cd); }

		int column;
		Float value;
};


#endif /* INCLUDED_NextMove */ 
