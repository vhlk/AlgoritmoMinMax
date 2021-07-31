// Generated by Haxe 4.2.0
#ifndef INCLUDED_haxe_zip_InflateImpl
#define INCLUDED_haxe_zip_InflateImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,zip,HuffTools)
HX_DECLARE_CLASS2(haxe,zip,Huffman)
HX_DECLARE_CLASS2(haxe,zip,InflateImpl)
HX_DECLARE_CLASS3(haxe,zip,_InflateImpl,State)
HX_DECLARE_CLASS3(haxe,zip,_InflateImpl,Window)

namespace haxe{
namespace zip{


class HXCPP_CLASS_ATTRIBUTES InflateImpl_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef InflateImpl_obj OBJ_;
		InflateImpl_obj();

	public:
		enum { _hx_ClassId = 0x653437cc };

		void __construct( ::haxe::io::Input i, ::Dynamic __o_header, ::Dynamic __o_crc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.zip.InflateImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.zip.InflateImpl"); }
		static ::hx::ObjectPtr< InflateImpl_obj > __new( ::haxe::io::Input i, ::Dynamic __o_header, ::Dynamic __o_crc);
		static ::hx::ObjectPtr< InflateImpl_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i, ::Dynamic __o_header, ::Dynamic __o_crc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InflateImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InflateImpl",e7,2e,f8,07); }

		static void __boot();
		static ::Array< int > LEN_EXTRA_BITS_TBL;
		static ::Array< int > LEN_BASE_VAL_TBL;
		static ::Array< int > DIST_EXTRA_BITS_TBL;
		static ::Array< int > DIST_BASE_VAL_TBL;
		static ::Array< int > CODE_LENGTHS_POS;
		static  ::haxe::zip::Huffman FIXED_HUFFMAN;
		int nbits;
		int bits;
		 ::haxe::zip::_InflateImpl::State state;
		bool isFinal;
		 ::haxe::zip::Huffman huffman;
		 ::haxe::zip::Huffman huffdist;
		 ::haxe::zip::HuffTools htools;
		int len;
		int dist;
		int needed;
		 ::haxe::io::Bytes output;
		int outpos;
		 ::haxe::io::Input input;
		::Array< int > lengths;
		 ::haxe::zip::_InflateImpl::Window window;
		 ::haxe::zip::Huffman buildFixedHuffman();
		::Dynamic buildFixedHuffman_dyn();

		int readBytes( ::haxe::io::Bytes b,int pos,int len);
		::Dynamic readBytes_dyn();

		int getBits(int n);
		::Dynamic getBits_dyn();

		bool getBit();
		::Dynamic getBit_dyn();

		int getRevBits(int n);
		::Dynamic getRevBits_dyn();

		void resetBits();
		::Dynamic resetBits_dyn();

		void addBytes( ::haxe::io::Bytes b,int p,int len);
		::Dynamic addBytes_dyn();

		void addByte(int b);
		::Dynamic addByte_dyn();

		void addDistOne(int n);
		::Dynamic addDistOne_dyn();

		void addDist(int d,int len);
		::Dynamic addDist_dyn();

		int applyHuffman( ::haxe::zip::Huffman h);
		::Dynamic applyHuffman_dyn();

		void inflateLengths(::Array< int > a,int max);
		::Dynamic inflateLengths_dyn();

		bool inflateLoop();
		::Dynamic inflateLoop_dyn();

};

} // end namespace haxe
} // end namespace zip

#endif /* INCLUDED_haxe_zip_InflateImpl */ 