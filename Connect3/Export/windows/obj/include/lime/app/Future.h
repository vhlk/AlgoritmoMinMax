// Generated by Haxe 4.2.0
#ifndef INCLUDED_lime_app_Future
#define INCLUDED_lime_app_Future

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,app,_Event_Dynamic_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Int_Int_Void)
HX_DECLARE_CLASS2(lime,app,_Event_ofEvents_T_Void)

namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES Future_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Future_obj OBJ_;
		Future_obj();

	public:
		enum { _hx_ClassId = 0x795f2f0f };

		void __construct( ::Dynamic work,::hx::Null< bool >  __o_async);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.app.Future")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.app.Future"); }
		static ::hx::ObjectPtr< Future_obj > __new( ::Dynamic work,::hx::Null< bool >  __o_async);
		static ::hx::ObjectPtr< Future_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic work,::hx::Null< bool >  __o_async);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Future_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Future",63,0c,e3,a7); }

		static  ::lime::app::Future ofEvents( ::lime::app::_Event_ofEvents_T_Void onComplete, ::lime::app::_Event_Dynamic_Void onError, ::lime::app::_Event_Int_Int_Void onProgress);
		static ::Dynamic ofEvents_dyn();

		static  ::lime::app::Future withError( ::Dynamic error);
		static ::Dynamic withError_dyn();

		static  ::lime::app::Future withValue( ::Dynamic value);
		static ::Dynamic withValue_dyn();

		 ::Dynamic error;
		bool isComplete;
		bool isError;
		 ::Dynamic value;
		::Array< ::Dynamic> _hx___completeListeners;
		::Array< ::Dynamic> _hx___errorListeners;
		::Array< ::Dynamic> _hx___progressListeners;
		 ::lime::app::Future onComplete( ::Dynamic listener);
		::Dynamic onComplete_dyn();

		 ::lime::app::Future onError( ::Dynamic listener);
		::Dynamic onError_dyn();

		 ::lime::app::Future onProgress( ::Dynamic listener);
		::Dynamic onProgress_dyn();

		 ::lime::app::Future ready(::hx::Null< int >  waitTime);
		::Dynamic ready_dyn();

		 ::Dynamic result(::hx::Null< int >  waitTime);
		::Dynamic result_dyn();

		 ::lime::app::Future then( ::Dynamic next);
		::Dynamic then_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Future */ 
