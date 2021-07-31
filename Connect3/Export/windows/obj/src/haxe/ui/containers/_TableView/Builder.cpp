// Generated by Haxe 4.2.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Header
#include <haxe/ui/containers/Header.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TableView
#include <haxe/ui/containers/TableView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_Builder
#include <haxe/ui/containers/_TableView/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_CompoundItemRenderer
#include <haxe/ui/containers/_TableView/CompoundItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3efc1cade498a4d7_317_new,"haxe.ui.containers._TableView.Builder","new",0x4d24a4bd,"haxe.ui.containers._TableView.Builder.new","haxe/ui/containers/TableView.hx",317,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_323_create,"haxe.ui.containers._TableView.Builder","create",0x6ff3eabf,"haxe.ui.containers._TableView.Builder.create","haxe/ui/containers/TableView.hx",323,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_326_onInitialize,"haxe.ui.containers._TableView.Builder","onInitialize",0xe4810b52,"haxe.ui.containers._TableView.Builder.onInitialize","haxe/ui/containers/TableView.hx",326,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_337_onReady,"haxe.ui.containers._TableView.Builder","onReady",0xf10705a1,"haxe.ui.containers._TableView.Builder.onReady","haxe/ui/containers/TableView.hx",337,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_351_createContentContainer,"haxe.ui.containers._TableView.Builder","createContentContainer",0x27564da7,"haxe.ui.containers._TableView.Builder.createContentContainer","haxe/ui/containers/TableView.hx",351,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_357_addComponent,"haxe.ui.containers._TableView.Builder","addComponent",0x2e2a4a5f,"haxe.ui.containers._TableView.Builder.addComponent","haxe/ui/containers/TableView.hx",357,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_387_onColumnAdded,"haxe.ui.containers._TableView.Builder","onColumnAdded",0x8ce355c8,"haxe.ui.containers._TableView.Builder.onColumnAdded","haxe/ui/containers/TableView.hx",387,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_397_removeComponent,"haxe.ui.containers._TableView.Builder","removeComponent",0x541ef7b6,"haxe.ui.containers._TableView.Builder.removeComponent","haxe/ui/containers/TableView.hx",397,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_405_buildDefaultRenderer,"haxe.ui.containers._TableView.Builder","buildDefaultRenderer",0x0feee699,"haxe.ui.containers._TableView.Builder.buildDefaultRenderer","haxe/ui/containers/TableView.hx",405,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_421_fillExistingRenderer,"haxe.ui.containers._TableView.Builder","fillExistingRenderer",0xfeee2e94,"haxe.ui.containers._TableView.Builder.fillExistingRenderer","haxe/ui/containers/TableView.hx",421,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_461_verticalConstraintModifier,"haxe.ui.containers._TableView.Builder","verticalConstraintModifier",0x179e0a2d,"haxe.ui.containers._TableView.Builder.verticalConstraintModifier","haxe/ui/containers/TableView.hx",461,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_470_onVirtualChanged,"haxe.ui.containers._TableView.Builder","onVirtualChanged",0xce4ee52b,"haxe.ui.containers._TableView.Builder.onVirtualChanged","haxe/ui/containers/TableView.hx",470,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_474_get_virtualHorizontal,"haxe.ui.containers._TableView.Builder","get_virtualHorizontal",0xbc8aed43,"haxe.ui.containers._TableView.Builder.get_virtualHorizontal","haxe/ui/containers/TableView.hx",474,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3efc1cade498a4d7_478_addItemRendererClass,"haxe.ui.containers._TableView.Builder","addItemRendererClass",0x40bb9684,"haxe.ui.containers._TableView.Builder.addItemRendererClass","haxe/ui/containers/TableView.hx",478,0x8a42a716)
namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{

void Builder_obj::__construct( ::haxe::ui::containers::TableView tableview){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_317_new)
HXLINE( 318)		super::__construct(tableview);
HXLINE( 319)		this->_tableview = tableview;
            	}

Dynamic Builder_obj::__CreateEmpty() { return new Builder_obj; }

void *Builder_obj::_hx_vtable = 0;

Dynamic Builder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Builder_obj > _hx_result = new Builder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Builder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17e93bfd) {
		if (inClassId<=(int)0x0472fd8d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
		} else {
			return inClassId==(int)0x17e93bfd;
		}
	} else {
		return inClassId==(int)0x3aec497b;
	}
}

void Builder_obj::create(){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_323_create)
HXDLIN( 323)		::String _hx_tmp;
HXDLIN( 323)		if (this->_tableview->get_virtual()) {
HXDLIN( 323)			_hx_tmp = HX_("absolute",77,ce,95,c3);
            		}
            		else {
HXDLIN( 323)			_hx_tmp = HX_("vertical",76,bc,15,6a);
            		}
HXDLIN( 323)		this->createContentContainer(_hx_tmp);
            	}


void Builder_obj::onInitialize(){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_326_onInitialize)
HXLINE( 327)		if (::hx::IsNull( this->_header )) {
HXLINE( 328)			return;
            		}
HXLINE( 330)		if (::hx::IsNull( this->_tableview->get_itemRenderer() )) {
HXLINE( 331)			this->buildDefaultRenderer();
            		}
            		else {
HXLINE( 333)			this->fillExistingRenderer();
            		}
            	}


void Builder_obj::onReady(){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_337_onReady)
HXLINE( 338)		if (::hx::IsNull( this->_header )) {
HXLINE( 339)			return;
            		}
HXLINE( 341)		if (::hx::IsNull( this->_tableview->get_itemRenderer() )) {
HXLINE( 342)			this->buildDefaultRenderer();
            		}
            		else {
HXLINE( 344)			this->fillExistingRenderer();
            		}
HXLINE( 347)		{
HXLINE( 347)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 347)			bool _hx_tmp;
HXDLIN( 347)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 347)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 347)				_hx_tmp = true;
            			}
HXDLIN( 347)			if (!(_hx_tmp)) {
HXLINE( 347)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58));
            			}
            		}
            	}


void Builder_obj::createContentContainer(::String layoutName){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_351_createContentContainer)
HXDLIN( 351)		if (::hx::IsNull( this->_contents )) {
HXLINE( 352)			this->super::createContentContainer(layoutName);
HXLINE( 353)			this->_contents->addClass(HX_("tableview-contents",74,2a,d3,78),null(),null());
            		}
            	}


 ::haxe::ui::core::Component Builder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_GC_STACKFRAME(&_hx_pos_3efc1cade498a4d7_357_addComponent)
HXLINE( 358)		 ::haxe::ui::core::Component r = null();
HXLINE( 359)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::core::ItemRenderer >())) {
HXLINE( 360)			 ::haxe::ui::core::ItemRenderer itemRenderer = this->_tableview->get_itemRenderer();
HXLINE( 361)			if (::hx::IsNull( itemRenderer )) {
HXLINE( 362)				itemRenderer =  ::haxe::ui::containers::_TableView::CompoundItemRenderer_obj::__alloc( HX_CTX );
HXLINE( 363)				this->_tableview->set_itemRenderer(itemRenderer);
            			}
HXLINE( 365)			itemRenderer->addComponent(child);
HXLINE( 367)			return child;
            		}
            		else {
HXLINE( 368)			if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::containers::Header >())) {
HXLINE( 369)				this->_header = ::hx::TCast<  ::haxe::ui::containers::Header >::cast(child);
HXLINE( 370)				this->_header->registerEvent(HX_("componentAdded",c3,86,4a,6b),this->onColumnAdded_dyn(),null());
HXLINE( 380)				r = null();
            			}
            			else {
HXLINE( 382)				r = this->super::addComponent(child);
            			}
            		}
HXLINE( 384)		return r;
            	}


void Builder_obj::onColumnAdded( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_387_onColumnAdded)
HXLINE( 388)		if (::hx::IsNull( this->_tableview->get_itemRenderer() )) {
HXLINE( 389)			this->buildDefaultRenderer();
            		}
            		else {
HXLINE( 391)			this->fillExistingRenderer();
            		}
HXLINE( 394)		{
HXLINE( 394)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 394)			bool _hx_tmp;
HXDLIN( 394)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 394)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 394)				_hx_tmp = true;
            			}
HXDLIN( 394)			if (!(_hx_tmp)) {
HXLINE( 394)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,onColumnAdded,(void))

 ::haxe::ui::core::Component Builder_obj::removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_dispose,::hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_397_removeComponent)
HXLINE( 398)		if ((::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::containers::Header >()) == true)) {
HXLINE( 399)			this->_header = null();
HXLINE( 400)			return null();
            		}
HXLINE( 402)		return this->super::removeComponent(child,dispose,invalidate);
            	}


void Builder_obj::buildDefaultRenderer(){
            	HX_GC_STACKFRAME(&_hx_pos_3efc1cade498a4d7_405_buildDefaultRenderer)
HXLINE( 406)		 ::haxe::ui::containers::_TableView::CompoundItemRenderer r =  ::haxe::ui::containers::_TableView::CompoundItemRenderer_obj::__alloc( HX_CTX );
HXLINE( 407)		if (::hx::IsNotNull( this->_header )) {
HXLINE( 408)			int _g = 0;
HXDLIN( 408)			 ::haxe::ui::containers::Header _this = this->_header;
HXDLIN( 408)			::Array< ::Dynamic> _g1;
HXDLIN( 408)			if (::hx::IsNull( _this->_children )) {
HXLINE( 408)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 408)				_g1 = _this->_children;
            			}
HXDLIN( 408)			while((_g < _g1->length)){
HXLINE( 408)				 ::haxe::ui::core::Component column = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 408)				_g = (_g + 1);
HXLINE( 409)				 ::haxe::ui::core::ItemRenderer itemRenderer =  ::haxe::ui::core::ItemRenderer_obj::__alloc( HX_CTX );
HXLINE( 410)				 ::haxe::ui::components::Label label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 411)				label->set_id(column->get_id());
HXLINE( 412)				label->set_percentWidth(100);
HXLINE( 413)				label->set_verticalAlign(HX_("center",d5,25,db,05));
HXLINE( 414)				itemRenderer->addComponent(label);
HXLINE( 415)				r->addComponent(itemRenderer);
            			}
            		}
HXLINE( 418)		this->_tableview->set_itemRenderer(r);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Builder_obj,buildDefaultRenderer,(void))

void Builder_obj::fillExistingRenderer(){
            	HX_GC_STACKFRAME(&_hx_pos_3efc1cade498a4d7_421_fillExistingRenderer)
HXLINE( 422)		{
HXLINE( 422)			int _g = 0;
HXDLIN( 422)			 ::haxe::ui::containers::Header _this = this->_header;
HXDLIN( 422)			::Array< ::Dynamic> _g1;
HXDLIN( 422)			if (::hx::IsNull( _this->_children )) {
HXLINE( 422)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 422)				_g1 = _this->_children;
            			}
HXDLIN( 422)			while((_g < _g1->length)){
HXLINE( 422)				 ::haxe::ui::core::Component column = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 422)				_g = (_g + 1);
HXLINE( 423)				 ::haxe::ui::core::ItemRenderer existing = this->_tableview->get_itemRenderer();
HXDLIN( 423)				 ::haxe::ui::core::ItemRenderer existing1 = existing->findComponent(column->get_id(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),true,null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 424)				if (::hx::IsNull( existing1 )) {
HXLINE( 425)					 ::haxe::ui::core::ItemRenderer itemRenderer =  ::haxe::ui::core::ItemRenderer_obj::__alloc( HX_CTX );
HXLINE( 426)					 ::haxe::ui::components::Label label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 427)					label->set_id(column->get_id());
HXLINE( 428)					label->set_percentWidth(100);
HXLINE( 429)					label->set_verticalAlign(HX_("center",d5,25,db,05));
HXLINE( 430)					itemRenderer->addComponent(label);
HXLINE( 431)					this->_tableview->get_itemRenderer()->addComponent(itemRenderer);
            				}
            			}
            		}
HXLINE( 435)		 ::haxe::ui::containers::Box data = this->_component->findComponent(HX_("tableview-contents",74,2a,d3,78),::hx::ClassOf< ::haxe::ui::containers::Box >(),true,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::containers::Box >();
HXLINE( 436)		if (::hx::IsNotNull( data )) {
HXLINE( 437)			int _g = 0;
HXDLIN( 437)			::Array< ::Dynamic> _g1;
HXDLIN( 437)			if (::hx::IsNull( data->_children )) {
HXLINE( 437)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 437)				_g1 = data->_children;
            			}
HXDLIN( 437)			while((_g < _g1->length)){
HXLINE( 437)				 ::haxe::ui::core::Component item = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 437)				_g = (_g + 1);
HXLINE( 438)				{
HXLINE( 438)					int _g2 = 0;
HXDLIN( 438)					 ::haxe::ui::containers::Header _this = this->_header;
HXDLIN( 438)					::Array< ::Dynamic> _g3;
HXDLIN( 438)					if (::hx::IsNull( _this->_children )) {
HXLINE( 438)						_g3 = ::Array_obj< ::Dynamic>::__new(0);
            					}
            					else {
HXLINE( 438)						_g3 = _this->_children;
            					}
HXDLIN( 438)					while((_g2 < _g3->length)){
HXLINE( 438)						 ::haxe::ui::core::Component column = _g3->__get(_g2).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 438)						_g2 = (_g2 + 1);
HXLINE( 439)						 ::haxe::ui::core::ItemRenderer existing = item->findComponent(column->get_id(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),true,null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 440)						if (::hx::IsNull( existing )) {
HXLINE( 441)							 ::haxe::ui::core::ItemRenderer temp = this->_tableview->get_itemRenderer();
HXDLIN( 441)							 ::haxe::ui::core::Component temp1 = temp->findComponent(column->get_id(),::hx::ClassOf< ::haxe::ui::core::Component >(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 442)							 ::haxe::ui::core::ItemRenderer renderer = null();
HXLINE( 443)							if (::Std_obj::isOfType(temp1,::hx::ClassOf< ::haxe::ui::core::ItemRenderer >())) {
HXLINE( 444)								renderer = ::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(temp1);
            							}
            							else {
HXLINE( 446)								renderer = temp1->findAncestor(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
            							}
HXLINE( 448)							int index = this->_tableview->get_itemRenderer()->getComponentIndex(renderer);
HXLINE( 449)							 ::haxe::ui::core::ItemRenderer instance = Dynamic( renderer->cloneComponent()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 450)							if ((index < 0)) {
HXLINE( 451)								item->addComponent(instance);
            							}
            							else {
HXLINE( 453)								item->addComponentAt(instance,index);
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Builder_obj,fillExistingRenderer,(void))

Float Builder_obj::verticalConstraintModifier(){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_461_verticalConstraintModifier)
HXLINE( 462)		if (::hx::IsNull( this->_header )) {
HXLINE( 463)			return ( (Float)(0) );
            		}
HXLINE( 466)		return this->_header->get_height();
            	}


void Builder_obj::onVirtualChanged(){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_470_onVirtualChanged)
HXDLIN( 470)		 ::haxe::ui::containers::Box _hx_tmp = this->_contents;
HXDLIN( 470)		::String _hx_tmp1;
HXDLIN( 470)		if (this->_tableview->get_virtual()) {
HXDLIN( 470)			_hx_tmp1 = HX_("absolute",77,ce,95,c3);
            		}
            		else {
HXDLIN( 470)			_hx_tmp1 = HX_("vertical",76,bc,15,6a);
            		}
HXDLIN( 470)		_hx_tmp->set_layoutName(_hx_tmp1);
            	}


bool Builder_obj::get_virtualHorizontal(){
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_474_get_virtualHorizontal)
HXDLIN( 474)		return false;
            	}


void Builder_obj::addItemRendererClass( ::haxe::ui::core::Component child,::String className,::hx::Null< bool >  __o_add){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,bool,add,::String,className) HXARGC(1)
            		bool _hx_run( ::haxe::ui::core::Component c){
            			HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_478_addItemRendererClass)
HXLINE( 479)			if (::Std_obj::isOfType(c,::hx::ClassOf< ::haxe::ui::core::ItemRenderer >())) {
HXLINE( 480)				if ((add == true)) {
HXLINE( 481)					c->addClass(className,null(),null());
            				}
            				else {
HXLINE( 483)					c->removeClass(className,null(),null());
            				}
            			}
            			else {
HXLINE( 486)				c->invalidateComponent(HX_("style",31,a5,1d,84));
HXDLIN( 486)				{
            				}
            			}
HXLINE( 488)			return true;
            		}
            		HX_END_LOCAL_FUNC1(return)

            		bool add = __o_add.Default(true);
            	HX_STACKFRAME(&_hx_pos_3efc1cade498a4d7_478_addItemRendererClass)
HXDLIN( 478)		child->walkComponents( ::Dynamic(new _hx_Closure_0(add,className)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Builder_obj,addItemRendererClass,(void))


::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::containers::TableView tableview) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(tableview);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TableView tableview) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.containers._TableView.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(tableview);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_tableview,"_tableview");
	HX_MARK_MEMBER_NAME(_header,"_header");
	 ::haxe::ui::containers::ScrollViewBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tableview,"_tableview");
	HX_VISIT_MEMBER_NAME(_header,"_header");
	 ::haxe::ui::containers::ScrollViewBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_header") ) { return ::hx::Val( _header ); }
		if (HX_FIELD_EQ(inName,"onReady") ) { return ::hx::Val( onReady_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tableview") ) { return ::hx::Val( _tableview ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onInitialize") ) { return ::hx::Val( onInitialize_dyn() ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onColumnAdded") ) { return ::hx::Val( onColumnAdded_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onVirtualChanged") ) { return ::hx::Val( onVirtualChanged_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"buildDefaultRenderer") ) { return ::hx::Val( buildDefaultRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"fillExistingRenderer") ) { return ::hx::Val( fillExistingRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"addItemRendererClass") ) { return ::hx::Val( addItemRendererClass_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_virtualHorizontal") ) { return ::hx::Val( get_virtualHorizontal_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createContentContainer") ) { return ::hx::Val( createContentContainer_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"verticalConstraintModifier") ) { return ::hx::Val( verticalConstraintModifier_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Builder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_header") ) { _header=inValue.Cast<  ::haxe::ui::containers::Header >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tableview") ) { _tableview=inValue.Cast<  ::haxe::ui::containers::TableView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_tableview",34,85,ad,2c));
	outFields->push(HX_("_header",2c,1b,77,6b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::TableView */ ,(int)offsetof(Builder_obj,_tableview),HX_("_tableview",34,85,ad,2c)},
	{::hx::fsObject /*  ::haxe::ui::containers::Header */ ,(int)offsetof(Builder_obj,_header),HX_("_header",2c,1b,77,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_tableview",34,85,ad,2c),
	HX_("_header",2c,1b,77,6b),
	HX_("create",fc,66,0f,7c),
	HX_("onInitialize",4f,d3,fe,c4),
	HX_("onReady",c4,3e,f8,7c),
	HX_("createContentContainer",e4,d3,42,a7),
	HX_("addComponent",5c,12,a8,0e),
	HX_("onColumnAdded",2b,8b,74,1a),
	HX_("removeComponent",d9,8b,72,50),
	HX_("buildDefaultRenderer",96,73,a0,56),
	HX_("fillExistingRenderer",91,bb,9f,45),
	HX_("verticalConstraintModifier",ea,f2,b6,ce),
	HX_("onVirtualChanged",a8,ef,1c,9b),
	HX_("get_virtualHorizontal",a6,bd,34,51),
	HX_("addItemRendererClass",81,23,6d,87),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TableView.Builder",4b,82,f2,86);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Builder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Builder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Builder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Builder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView