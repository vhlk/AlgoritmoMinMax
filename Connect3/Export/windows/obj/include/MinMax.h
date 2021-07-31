// Generated by Haxe 4.2.0
#ifndef INCLUDED_MinMax
#define INCLUDED_MinMax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(MinMax)
HX_DECLARE_CLASS0(NextMove)
HX_DECLARE_CLASS0(User)



class HXCPP_CLASS_ATTRIBUTES MinMax_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MinMax_obj OBJ_;
		MinMax_obj();

	public:
		enum { _hx_ClassId = 0x4f15b376 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="MinMax")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"MinMax"); }

		inline static ::hx::ObjectPtr< MinMax_obj > __new() {
			::hx::ObjectPtr< MinMax_obj > __this = new MinMax_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< MinMax_obj > __alloc(::hx::Ctx *_hx_ctx) {
			MinMax_obj *__this = (MinMax_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MinMax_obj), false, "MinMax"));
			*(void **)__this = MinMax_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MinMax_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MinMax",52,ec,7d,87); }

		static int minimaxDecision(::Array< ::Dynamic> state);
		static ::Dynamic minimaxDecision_dyn();

		static  ::NextMove maxValue(::Array< ::Dynamic> state);
		static ::Dynamic maxValue_dyn();

		static Float minValue(::Array< ::Dynamic> state);
		static ::Dynamic minValue_dyn();

		static Float terminalTest(::Array< ::Dynamic> state);
		static ::Dynamic terminalTest_dyn();

};


#endif /* INCLUDED_MinMax */ 