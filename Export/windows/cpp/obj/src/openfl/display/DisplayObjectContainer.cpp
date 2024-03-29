#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DrawCommand
#include <openfl/display/DrawCommand.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void DisplayObjectContainer_obj::__construct()
{
HX_STACK_FRAME("openfl.display.DisplayObjectContainer","new",0x4362e03c,"openfl.display.DisplayObjectContainer.new","openfl/display/DisplayObjectContainer.hx",102,0x5f4d3d72)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(104)
	super::__construct();
	HX_STACK_LINE(106)
	this->mouseChildren = true;
	HX_STACK_LINE(108)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(108)
	this->__children = _g;
	HX_STACK_LINE(109)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(109)
	this->__removedChildren = _g1;
}
;
	return null();
}

//DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new()
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct();
	return result;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct();
	return result;}

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChild",0x5694c25f,"openfl.display.DisplayObjectContainer.addChild","openfl/display/DisplayObjectContainer.hx",144,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(146)
	if (((child != null()))){
		HX_STACK_LINE(148)
		if (((child->parent != null()))){
			HX_STACK_LINE(150)
			child->parent->removeChild(child);
		}
		HX_STACK_LINE(154)
		this->__children->push(child);
		HX_STACK_LINE(155)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(157)
		if (((this->stage != null()))){
			HX_STACK_LINE(159)
			child->__setStageReference(this->stage);
		}
		HX_STACK_LINE(163)
		if ((!(child->__transformDirty))){
			HX_STACK_LINE(163)
			child->__transformDirty = true;
			HX_STACK_LINE(163)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
		HX_STACK_LINE(164)
		if ((!(child->__renderDirty))){
			HX_STACK_LINE(164)
			child->__renderDirty = true;
			HX_STACK_LINE(164)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
		HX_STACK_LINE(166)
		::openfl::events::Event event = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::ADDED,true,null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(167)
		event->target = child;
		HX_STACK_LINE(168)
		child->dispatchEvent(event);
	}
	HX_STACK_LINE(172)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChildAt",0xb7119132,"openfl.display.DisplayObjectContainer.addChildAt","openfl/display/DisplayObjectContainer.hx",206,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(208)
	if (((bool((index > this->__children->length)) || bool((index < (int)0))))){
		HX_STACK_LINE(210)
		HX_STACK_DO_THROW((HX_CSTRING("Invalid index position ") + index));
	}
	HX_STACK_LINE(214)
	if (((child->parent == hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(216)
		this->__children->remove(child);
	}
	else{
		HX_STACK_LINE(220)
		if (((child->parent != null()))){
			HX_STACK_LINE(222)
			child->parent->removeChild(child);
		}
		HX_STACK_LINE(226)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(228)
		if (((this->stage != null()))){
			HX_STACK_LINE(230)
			child->__setStageReference(this->stage);
		}
		HX_STACK_LINE(234)
		if ((!(child->__transformDirty))){
			HX_STACK_LINE(234)
			child->__transformDirty = true;
			HX_STACK_LINE(234)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
		HX_STACK_LINE(235)
		if ((!(child->__renderDirty))){
			HX_STACK_LINE(235)
			child->__renderDirty = true;
			HX_STACK_LINE(235)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
		HX_STACK_LINE(237)
		::openfl::events::Event event = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::ADDED,true,null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(238)
		event->target = child;
		HX_STACK_LINE(239)
		child->dispatchEvent(event);
	}
	HX_STACK_LINE(243)
	this->__children->insert(index,child);
	HX_STACK_LINE(245)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","areInaccessibleObjectsUnderPoint",0x2380e0e1,"openfl.display.DisplayObjectContainer.areInaccessibleObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",273,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(273)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","contains",0xc3f94cc3,"openfl.display.DisplayObjectContainer.contains","openfl/display/DisplayObjectContainer.hx",290,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(292)
	while((true)){
		HX_STACK_LINE(292)
		if ((!(((bool((child != hx::ObjectPtr<OBJ_>(this))) && bool((child != null()))))))){
			HX_STACK_LINE(292)
			break;
		}
		HX_STACK_LINE(294)
		child = child->parent;
	}
	HX_STACK_LINE(298)
	return (child == hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildAt",0x9ee8eb5d,"openfl.display.DisplayObjectContainer.getChildAt","openfl/display/DisplayObjectContainer.hx",316,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(318)
	if (((bool((index >= (int)0)) && bool((index < this->__children->length))))){
		HX_STACK_LINE(320)
		return this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();
	}
	HX_STACK_LINE(324)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildByName( ::String name){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildByName",0x64b33f2c,"openfl.display.DisplayObjectContainer.getChildByName","openfl/display/DisplayObjectContainer.hx",347,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(349)
	{
		HX_STACK_LINE(349)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(349)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(349)
		while((true)){
			HX_STACK_LINE(349)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(349)
				break;
			}
			HX_STACK_LINE(349)
			::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(349)
			++(_g);
			HX_STACK_LINE(351)
			::String _g2 = child->get_name();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(351)
			if (((_g2 == name))){
				HX_STACK_LINE(351)
				return child;
			}
		}
	}
	HX_STACK_LINE(355)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

int DisplayObjectContainer_obj::getChildIndex( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildIndex",0xcc3e62e8,"openfl.display.DisplayObjectContainer.getChildIndex","openfl/display/DisplayObjectContainer.hx",368,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(370)
	{
		HX_STACK_LINE(370)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(370)
		int _g = this->__children->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(370)
		while((true)){
			HX_STACK_LINE(370)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(370)
				break;
			}
			HX_STACK_LINE(370)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(372)
			if (((this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >() == child))){
				HX_STACK_LINE(372)
				return i;
			}
		}
	}
	HX_STACK_LINE(376)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

Array< ::Dynamic > DisplayObjectContainer_obj::getObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getObjectsUnderPoint",0x85c6693a,"openfl.display.DisplayObjectContainer.getObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",400,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(402)
	::openfl::geom::Point _g = this->localToGlobal(point);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(402)
	point = _g;
	HX_STACK_LINE(403)
	Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
	HX_STACK_LINE(404)
	this->__hitTest(point->x,point->y,false,stack,false);
	HX_STACK_LINE(405)
	stack->reverse();
	HX_STACK_LINE(406)
	return stack;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChild",0x1a99d294,"openfl.display.DisplayObjectContainer.removeChild","openfl/display/DisplayObjectContainer.hx",430,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(432)
	if (((bool((child != null())) && bool((child->parent == hx::ObjectPtr<OBJ_>(this)))))){
		HX_STACK_LINE(434)
		if (((this->stage != null()))){
			HX_STACK_LINE(436)
			child->__setStageReference(null());
		}
		HX_STACK_LINE(440)
		child->parent = null();
		HX_STACK_LINE(441)
		this->__children->remove(child);
		HX_STACK_LINE(442)
		this->__removedChildren->push(child);
		HX_STACK_LINE(443)
		if ((!(child->__transformDirty))){
			HX_STACK_LINE(443)
			child->__transformDirty = true;
			HX_STACK_LINE(443)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
		HX_STACK_LINE(444)
		if ((!(child->__renderDirty))){
			HX_STACK_LINE(444)
			child->__renderDirty = true;
			HX_STACK_LINE(444)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
		HX_STACK_LINE(445)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::REMOVED,true,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(445)
		child->dispatchEvent(_g);
	}
	HX_STACK_LINE(449)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildAt",0x52a2d8a7,"openfl.display.DisplayObjectContainer.removeChildAt","openfl/display/DisplayObjectContainer.hx",476,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(478)
	if (((bool((index >= (int)0)) && bool((index < this->__children->length))))){
		HX_STACK_LINE(480)
		return this->removeChild(this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >());
	}
	HX_STACK_LINE(484)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

Void DisplayObjectContainer_obj::removeChildren( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(2147483647);
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildren",0xfbffdb47,"openfl.display.DisplayObjectContainer.removeChildren","openfl/display/DisplayObjectContainer.hx",489,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(491)
		if (((endIndex == (int)2147483647))){
			HX_STACK_LINE(493)
			endIndex = (this->__children->length - (int)1);
			HX_STACK_LINE(495)
			if (((endIndex < (int)0))){
				HX_STACK_LINE(497)
				return null();
			}
		}
		HX_STACK_LINE(503)
		if (((beginIndex > (this->__children->length - (int)1)))){
			HX_STACK_LINE(505)
			return null();
		}
		else{
			HX_STACK_LINE(507)
			if (((bool((bool((endIndex < beginIndex)) || bool((beginIndex < (int)0)))) || bool((endIndex > this->__children->length))))){
				HX_STACK_LINE(509)
				HX_STACK_DO_THROW(::openfl::errors::RangeError_obj::__new(HX_CSTRING("The supplied index is out of bounds.")));
			}
		}
		HX_STACK_LINE(513)
		int numRemovals = (endIndex - beginIndex);		HX_STACK_VAR(numRemovals,"numRemovals");
		HX_STACK_LINE(514)
		while((true)){
			HX_STACK_LINE(514)
			if ((!(((numRemovals >= (int)0))))){
				HX_STACK_LINE(514)
				break;
			}
			HX_STACK_LINE(516)
			this->removeChildAt(beginIndex);
			HX_STACK_LINE(517)
			(numRemovals)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildren,(void))

Void DisplayObjectContainer_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","setChildIndex",0x114444f4,"openfl.display.DisplayObjectContainer.setChildIndex","openfl/display/DisplayObjectContainer.hx",554,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(554)
		if (((bool((bool((index >= (int)0)) && bool((index <= this->__children->length)))) && bool((child->parent == hx::ObjectPtr<OBJ_>(this)))))){
			HX_STACK_LINE(556)
			this->__children->remove(child);
			HX_STACK_LINE(557)
			this->__children->insert(index,child);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

Void DisplayObjectContainer_obj::swapChildren( ::openfl::display::DisplayObject child1,::openfl::display::DisplayObject child2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildren",0xe0695f96,"openfl.display.DisplayObjectContainer.swapChildren","openfl/display/DisplayObjectContainer.hx",576,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(576)
		if (((bool((child1->parent == hx::ObjectPtr<OBJ_>(this))) && bool((child2->parent == hx::ObjectPtr<OBJ_>(this)))))){
			HX_STACK_LINE(580)
			int index1 = this->__children->indexOf(child1,null());		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(581)
			int index2 = this->__children->indexOf(child2,null());		HX_STACK_VAR(index2,"index2");
			HX_STACK_LINE(604)
			this->__children[index1] = child2;
			HX_STACK_LINE(605)
			this->__children[index2] = child1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

Void DisplayObjectContainer_obj::swapChildrenAt( int child1,int child2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildrenAt",0xd5312a29,"openfl.display.DisplayObjectContainer.swapChildrenAt","openfl/display/DisplayObjectContainer.hx",621,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(623)
		::openfl::display::DisplayObject swap = this->__children->__get(child1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(swap,"swap");
		HX_STACK_LINE(624)
		this->__children[child1] = this->__children->__get(child2).StaticCast< ::openfl::display::DisplayObject >();
		HX_STACK_LINE(625)
		this->__children[child2] = swap;
		HX_STACK_LINE(626)
		swap = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

bool DisplayObjectContainer_obj::__broadcast( ::openfl::events::Event event,bool notifyChilden){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__broadcast",0xe3f237bd,"openfl.display.DisplayObjectContainer.__broadcast","openfl/display/DisplayObjectContainer.hx",631,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(notifyChilden,"notifyChilden")
	HX_STACK_LINE(633)
	if (((event->target == null()))){
		HX_STACK_LINE(635)
		event->target = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(639)
	bool result = this->super::__broadcast(event,notifyChilden);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(641)
	if (((bool(!(event->__isCancelled)) && bool(notifyChilden)))){
		HX_STACK_LINE(643)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(643)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(643)
		while((true)){
			HX_STACK_LINE(643)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(643)
				break;
			}
			HX_STACK_LINE(643)
			::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(643)
			++(_g);
			HX_STACK_LINE(645)
			child->__broadcast(event,true);
			HX_STACK_LINE(647)
			if ((event->__isCancelled)){
				HX_STACK_LINE(649)
				return true;
			}
		}
	}
	HX_STACK_LINE(657)
	return result;
}


Void DisplayObjectContainer_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__getBounds",0xe74ca467,"openfl.display.DisplayObjectContainer.__getBounds","openfl/display/DisplayObjectContainer.hx",662,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(664)
		this->super::__getBounds(rect,matrix);
		HX_STACK_LINE(666)
		if (((this->__children->length == (int)0))){
			HX_STACK_LINE(666)
			return null();
		}
		HX_STACK_LINE(668)
		::openfl::geom::Matrix matrixCache = null();		HX_STACK_VAR(matrixCache,"matrixCache");
		HX_STACK_LINE(670)
		if (((matrix != null()))){
			HX_STACK_LINE(672)
			matrixCache = this->__worldTransform;
			HX_STACK_LINE(673)
			this->__worldTransform = matrix;
			HX_STACK_LINE(674)
			this->__updateChildren(true);
		}
		HX_STACK_LINE(678)
		{
			HX_STACK_LINE(678)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(678)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(678)
			while((true)){
				HX_STACK_LINE(678)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(678)
					break;
				}
				HX_STACK_LINE(678)
				::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(678)
				++(_g);
				HX_STACK_LINE(680)
				if ((!(child->__renderable))){
					HX_STACK_LINE(680)
					continue;
				}
				HX_STACK_LINE(681)
				child->__getBounds(rect,child->__worldTransform);
			}
		}
		HX_STACK_LINE(685)
		if (((matrix != null()))){
			HX_STACK_LINE(687)
			this->__worldTransform = matrixCache;
			HX_STACK_LINE(688)
			this->__updateChildren(true);
		}
	}
return null();
}


bool DisplayObjectContainer_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__hitTest",0x5a840e01,"openfl.display.DisplayObjectContainer.__hitTest","openfl/display/DisplayObjectContainer.hx",695,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(697)
	if (((  ((!((!(this->get_visible()))))) ? bool((bool(interactiveOnly) && bool(!(this->mouseEnabled)))) : bool(true) ))){
		HX_STACK_LINE(697)
		return false;
	}
	HX_STACK_LINE(699)
	::openfl::geom::Rectangle _g = this->get_scrollRect();		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::openfl::display::DisplayObjectContainer_obj > __this,Float &x,Float &y){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/DisplayObjectContainer.hx",699,0x5f4d3d72)
			{
				HX_STACK_LINE(699)
				::openfl::geom::Point _g1 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(699)
				::openfl::geom::Point _g2 = __this->globalToLocal(_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(699)
				return !(__this->get_scrollRect()->containsPoint(_g2));
			}
			return null();
		}
	};
	HX_STACK_LINE(699)
	if (((  (((_g != null()))) ? bool(_Function_1_1::Block(this,x,y)) : bool(false) ))){
		HX_STACK_LINE(699)
		return false;
	}
	HX_STACK_LINE(701)
	int i = this->__children->length;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(702)
	if ((interactiveOnly)){
		HX_STACK_LINE(704)
		if (((bool((stack == null())) || bool(!(this->mouseChildren))))){
			HX_STACK_LINE(706)
			while((true)){
				HX_STACK_LINE(706)
				int _g3 = --(i);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(706)
				if ((!(((_g3 >= (int)0))))){
					HX_STACK_LINE(706)
					break;
				}
				HX_STACK_LINE(708)
				if ((this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >()->__hitTest(x,y,shapeFlag,null(),true))){
					HX_STACK_LINE(710)
					if (((stack != null()))){
						HX_STACK_LINE(712)
						stack->push(hx::ObjectPtr<OBJ_>(this));
					}
					HX_STACK_LINE(716)
					return true;
				}
			}
		}
		else{
			HX_STACK_LINE(722)
			if (((stack != null()))){
				HX_STACK_LINE(724)
				int length = stack->length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(726)
				bool interactive = false;		HX_STACK_VAR(interactive,"interactive");
				HX_STACK_LINE(727)
				bool hitTest = false;		HX_STACK_VAR(hitTest,"hitTest");
				HX_STACK_LINE(729)
				while((true)){
					HX_STACK_LINE(729)
					int _g4 = --(i);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(729)
					if ((!(((_g4 >= (int)0))))){
						HX_STACK_LINE(729)
						break;
					}
					HX_STACK_LINE(731)
					bool _g5 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >()->__getInteractive(null());		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(731)
					interactive = _g5;
					HX_STACK_LINE(733)
					if (((bool(interactive) || bool(!(hitTest))))){
						HX_STACK_LINE(735)
						if ((this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >()->__hitTest(x,y,shapeFlag,stack,true))){
							HX_STACK_LINE(737)
							hitTest = true;
							HX_STACK_LINE(739)
							if ((interactive)){
								HX_STACK_LINE(741)
								break;
							}
						}
					}
				}
				HX_STACK_LINE(751)
				if ((hitTest)){
					HX_STACK_LINE(753)
					stack->insert(length,hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(754)
					return true;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(762)
		while((true)){
			HX_STACK_LINE(762)
			int _g6 = --(i);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(762)
			if ((!(((_g6 >= (int)0))))){
				HX_STACK_LINE(762)
				break;
			}
			HX_STACK_LINE(764)
			this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >()->__hitTest(x,y,shapeFlag,stack,false);
		}
	}
	HX_STACK_LINE(771)
	return false;
}


Void DisplayObjectContainer_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairo",0x687e990e,"openfl.display.DisplayObjectContainer.__renderCairo","openfl/display/DisplayObjectContainer.hx",776,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(778)
		if (((bool(!(this->__renderable)) || bool((this->__worldAlpha <= (int)0))))){
			HX_STACK_LINE(778)
			return null();
		}
		HX_STACK_LINE(780)
		this->super::__renderCairo(renderSession);
		HX_STACK_LINE(782)
		::openfl::geom::Rectangle _g = this->get_scrollRect();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(782)
		if (((_g != null()))){
			HX_STACK_LINE(784)
			::openfl::geom::Rectangle _g1 = this->get_scrollRect();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(784)
			renderSession->maskManager->pushRect(_g1,this->__worldTransform);
		}
		HX_STACK_LINE(788)
		if (((this->__mask != null()))){
			HX_STACK_LINE(790)
			renderSession->maskManager->pushMask(this->__mask);
		}
		HX_STACK_LINE(794)
		{
			HX_STACK_LINE(794)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(794)
			Array< ::Dynamic > _g11 = this->__children;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(794)
			while((true)){
				HX_STACK_LINE(794)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(794)
					break;
				}
				HX_STACK_LINE(794)
				::openfl::display::DisplayObject child = _g11->__get(_g1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(794)
				++(_g1);
				HX_STACK_LINE(796)
				child->__renderCairo(renderSession);
			}
		}
		HX_STACK_LINE(800)
		this->__removedChildren = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(802)
		if (((this->__mask != null()))){
			HX_STACK_LINE(804)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(808)
		::openfl::geom::Rectangle _g2 = this->get_scrollRect();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(808)
		if (((_g2 != null()))){
			HX_STACK_LINE(810)
			renderSession->maskManager->popMask();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairoMask",0x110aa51a,"openfl.display.DisplayObjectContainer.__renderCairoMask","openfl/display/DisplayObjectContainer.hx",817,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(819)
		if (((this->__graphics != null()))){
			HX_STACK_LINE(821)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::renderMask(this->__graphics,renderSession);
		}
		HX_STACK_LINE(830)
		{
			HX_STACK_LINE(830)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(830)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(830)
			while((true)){
				HX_STACK_LINE(830)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(830)
					break;
				}
				HX_STACK_LINE(830)
				::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(830)
				++(_g);
				HX_STACK_LINE(832)
				child->__renderCairoMask(renderSession);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvas",0x09986192,"openfl.display.DisplayObjectContainer.__renderCanvas","openfl/display/DisplayObjectContainer.hx",839,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(841)
		if (((bool(!(this->__renderable)) || bool((this->__worldAlpha <= (int)0))))){
			HX_STACK_LINE(841)
			return null();
		}
		HX_STACK_LINE(845)
		this->super::__renderCanvas(renderSession);
		HX_STACK_LINE(847)
		::openfl::geom::Rectangle _g = this->get_scrollRect();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(847)
		if (((_g != null()))){
			HX_STACK_LINE(849)
			::openfl::geom::Rectangle _g1 = this->get_scrollRect();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(849)
			renderSession->maskManager->pushRect(_g1,this->__worldTransform);
		}
		HX_STACK_LINE(853)
		if (((this->__mask != null()))){
			HX_STACK_LINE(855)
			renderSession->maskManager->pushMask(this->__mask);
		}
		HX_STACK_LINE(859)
		{
			HX_STACK_LINE(859)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(859)
			Array< ::Dynamic > _g11 = this->__children;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(859)
			while((true)){
				HX_STACK_LINE(859)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(859)
					break;
				}
				HX_STACK_LINE(859)
				::openfl::display::DisplayObject child = _g11->__get(_g1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(859)
				++(_g1);
				HX_STACK_LINE(861)
				child->__renderCanvas(renderSession);
			}
		}
		HX_STACK_LINE(865)
		this->__removedChildren = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(867)
		if (((this->__mask != null()))){
			HX_STACK_LINE(869)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(873)
		::openfl::geom::Rectangle _g2 = this->get_scrollRect();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(873)
		if (((_g2 != null()))){
			HX_STACK_LINE(875)
			renderSession->maskManager->popMask();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvasMask",0xd78cff9e,"openfl.display.DisplayObjectContainer.__renderCanvasMask","openfl/display/DisplayObjectContainer.hx",884,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(886)
		if (((this->__graphics != null()))){
			HX_STACK_LINE(888)
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(this->__graphics,renderSession);
		}
		HX_STACK_LINE(892)
		::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(893)
		{
			HX_STACK_LINE(893)
			this->__getTransform();
			HX_STACK_LINE(893)
			::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(893)
			this->__getBounds(bounds,_g);
		}
		HX_STACK_LINE(895)
		renderSession->context->rect((int)0,(int)0,bounds->width,bounds->height);
	}
return null();
}


Void DisplayObjectContainer_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderDOM",0xd2304188,"openfl.display.DisplayObjectContainer.__renderDOM","openfl/display/DisplayObjectContainer.hx",906,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(912)
		this->super::__renderDOM(renderSession);
		HX_STACK_LINE(914)
		if (((this->__mask != null()))){
			HX_STACK_LINE(916)
			renderSession->maskManager->pushMask(this->__mask);
		}
		HX_STACK_LINE(922)
		{
			HX_STACK_LINE(922)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(922)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(922)
			while((true)){
				HX_STACK_LINE(922)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(922)
					break;
				}
				HX_STACK_LINE(922)
				::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(922)
				++(_g);
				HX_STACK_LINE(924)
				child->__renderDOM(renderSession);
			}
		}
		HX_STACK_LINE(928)
		{
			HX_STACK_LINE(928)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(928)
			Array< ::Dynamic > _g1 = this->__removedChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(928)
			while((true)){
				HX_STACK_LINE(928)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(928)
					break;
				}
				HX_STACK_LINE(928)
				::openfl::display::DisplayObject orphan = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(orphan,"orphan");
				HX_STACK_LINE(928)
				++(_g);
				HX_STACK_LINE(930)
				if (((orphan->stage == null()))){
					HX_STACK_LINE(932)
					orphan->__renderDOM(renderSession);
				}
			}
		}
		HX_STACK_LINE(938)
		this->__removedChildren = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(940)
		if (((this->__mask != null()))){
			HX_STACK_LINE(942)
			renderSession->maskManager->popMask();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderGL",0x3eef01bf,"openfl.display.DisplayObjectContainer.__renderGL","openfl/display/DisplayObjectContainer.hx",951,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(953)
		if (((bool(!(this->__renderable)) || bool((this->__worldAlpha <= (int)0))))){
			HX_STACK_LINE(953)
			return null();
		}
		HX_STACK_LINE(955)
		::openfl::geom::Rectangle _g = this->get_scrollRect();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(955)
		if (((_g != null()))){
			HX_STACK_LINE(956)
			renderSession->spriteBatch->stop();
			HX_STACK_LINE(957)
			::openfl::geom::Matrix m;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(957)
			{
				HX_STACK_LINE(957)
				::openfl::geom::Matrix _this = this->__worldTransform;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(957)
				m = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
			}
			HX_STACK_LINE(958)
			::openfl::geom::Rectangle clip = this->get_scrollRect()->transform(m);		HX_STACK_VAR(clip,"clip");
			HX_STACK_LINE(959)
			clip->y = ((renderSession->renderer->height - clip->y) - clip->height);
			HX_STACK_LINE(961)
			renderSession->spriteBatch->start(clip);
		}
		HX_STACK_LINE(965)
		bool masked = (bool((bool((this->__mask != null())) && bool((this->__maskGraphics != null())))) && bool((this->__maskGraphics->__commands->length > (int)0)));		HX_STACK_VAR(masked,"masked");
		HX_STACK_LINE(967)
		if ((masked)){
			HX_STACK_LINE(969)
			renderSession->spriteBatch->stop();
			HX_STACK_LINE(970)
			renderSession->maskManager->pushMask(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(971)
			renderSession->spriteBatch->start(null());
		}
		HX_STACK_LINE(975)
		this->super::__renderGL(renderSession);
		HX_STACK_LINE(977)
		{
			HX_STACK_LINE(977)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(977)
			Array< ::Dynamic > _g11 = this->__children;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(977)
			while((true)){
				HX_STACK_LINE(977)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(977)
					break;
				}
				HX_STACK_LINE(977)
				::openfl::display::DisplayObject child = _g11->__get(_g1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(977)
				++(_g1);
				HX_STACK_LINE(979)
				child->__renderGL(renderSession);
			}
		}
		HX_STACK_LINE(983)
		if ((masked)){
			HX_STACK_LINE(985)
			renderSession->spriteBatch->stop();
			HX_STACK_LINE(987)
			renderSession->maskManager->popMask();
			HX_STACK_LINE(988)
			renderSession->spriteBatch->start(null());
		}
		HX_STACK_LINE(992)
		::openfl::geom::Rectangle _g1 = this->get_scrollRect();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(992)
		if (((_g1 != null()))){
			HX_STACK_LINE(993)
			renderSession->spriteBatch->stop();
			HX_STACK_LINE(994)
			renderSession->spriteBatch->start(null());
		}
		HX_STACK_LINE(997)
		this->__removedChildren = Array_obj< ::Dynamic >::__new();
	}
return null();
}


Void DisplayObjectContainer_obj::__setStageReference( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__setStageReference",0x58cb6d2b,"openfl.display.DisplayObjectContainer.__setStageReference","openfl/display/DisplayObjectContainer.hx",1004,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(1004)
		if (((this->stage != stage))){
			HX_STACK_LINE(1006)
			if (((this->stage != null()))){
				HX_STACK_LINE(1008)
				::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::REMOVED_FROM_STAGE,false,false);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1008)
				this->dispatchEvent(_g);
			}
			HX_STACK_LINE(1012)
			this->stage = stage;
			HX_STACK_LINE(1014)
			if (((stage != null()))){
				HX_STACK_LINE(1016)
				::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::ADDED_TO_STAGE,false,false);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1016)
				this->dispatchEvent(_g1);
			}
			HX_STACK_LINE(1020)
			if (((this->__children != null()))){
				HX_STACK_LINE(1022)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1022)
				Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1022)
				while((true)){
					HX_STACK_LINE(1022)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(1022)
						break;
					}
					HX_STACK_LINE(1022)
					::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(1022)
					++(_g);
					HX_STACK_LINE(1024)
					child->__setStageReference(stage);
				}
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__update",0xc6b2e3cd,"openfl.display.DisplayObjectContainer.__update","openfl/display/DisplayObjectContainer.hx",1035,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(1037)
		this->super::__update(transformOnly,updateChildren,maskGraphics);
		HX_STACK_LINE(1040)
		if (((bool(!(this->__renderable)) && bool(!(this->__isMask))))){
			HX_STACK_LINE(1042)
			return null();
		}
		HX_STACK_LINE(1048)
		if ((updateChildren)){
			HX_STACK_LINE(1050)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1050)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1050)
			while((true)){
				HX_STACK_LINE(1050)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(1050)
					break;
				}
				HX_STACK_LINE(1050)
				::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(1050)
				++(_g);
				HX_STACK_LINE(1052)
				child->__update(transformOnly,true,maskGraphics);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__updateChildren",0x0e3ace2c,"openfl.display.DisplayObjectContainer.__updateChildren","openfl/display/DisplayObjectContainer.hx",1061,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_LINE(1063)
		this->super::__updateChildren(transformOnly);
		HX_STACK_LINE(1065)
		{
			HX_STACK_LINE(1065)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1065)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1065)
			while((true)){
				HX_STACK_LINE(1065)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(1065)
					break;
				}
				HX_STACK_LINE(1065)
				::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(1065)
				++(_g);
				HX_STACK_LINE(1067)
				child->__update(transformOnly,true,null());
			}
		}
	}
return null();
}


int DisplayObjectContainer_obj::get_numChildren( ){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","get_numChildren",0x73b78b18,"openfl.display.DisplayObjectContainer.get_numChildren","openfl/display/DisplayObjectContainer.hx",1083,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1083)
	return this->__children->length;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(tabChildren,"tabChildren");
	HX_MARK_MEMBER_NAME(__children,"__children");
	HX_MARK_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	HX_VISIT_MEMBER_NAME(tabChildren,"tabChildren");
	HX_VISIT_MEMBER_NAME(__children,"__children");
	HX_VISIT_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__children") ) { return __children; }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { return inCallProp ? get_numChildren() : numChildren; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return tabChildren; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return mouseChildren; }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return removeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { return __removedChildren; }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__children") ) { __children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { tabChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { __removedChildren=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mouseChildren"));
	outFields->push(HX_CSTRING("numChildren"));
	outFields->push(HX_CSTRING("tabChildren"));
	outFields->push(HX_CSTRING("__children"));
	outFields->push(HX_CSTRING("__removedChildren"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,mouseChildren),HX_CSTRING("mouseChildren")},
	{hx::fsInt,(int)offsetof(DisplayObjectContainer_obj,numChildren),HX_CSTRING("numChildren")},
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,tabChildren),HX_CSTRING("tabChildren")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,__children),HX_CSTRING("__children")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,__removedChildren),HX_CSTRING("__removedChildren")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mouseChildren"),
	HX_CSTRING("numChildren"),
	HX_CSTRING("tabChildren"),
	HX_CSTRING("__children"),
	HX_CSTRING("__removedChildren"),
	HX_CSTRING("addChild"),
	HX_CSTRING("addChildAt"),
	HX_CSTRING("areInaccessibleObjectsUnderPoint"),
	HX_CSTRING("contains"),
	HX_CSTRING("getChildAt"),
	HX_CSTRING("getChildByName"),
	HX_CSTRING("getChildIndex"),
	HX_CSTRING("getObjectsUnderPoint"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("removeChildAt"),
	HX_CSTRING("removeChildren"),
	HX_CSTRING("setChildIndex"),
	HX_CSTRING("swapChildren"),
	HX_CSTRING("swapChildrenAt"),
	HX_CSTRING("__broadcast"),
	HX_CSTRING("__getBounds"),
	HX_CSTRING("__hitTest"),
	HX_CSTRING("__renderCairo"),
	HX_CSTRING("__renderCairoMask"),
	HX_CSTRING("__renderCanvas"),
	HX_CSTRING("__renderCanvasMask"),
	HX_CSTRING("__renderDOM"),
	HX_CSTRING("__renderGL"),
	HX_CSTRING("__setStageReference"),
	HX_CSTRING("__update"),
	HX_CSTRING("__updateChildren"),
	HX_CSTRING("get_numChildren"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#endif

Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.DisplayObjectContainer"), hx::TCanCast< DisplayObjectContainer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void DisplayObjectContainer_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
