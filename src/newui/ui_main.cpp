// ui_main.cpp
//

#include "quakedef.h"
#include "ui_main.h"

idNewHud			*newUI;

idNewHud::idNewHud() {

	upButton = new idUIButton( "newui/Black_Arrow_Up.tga", 30, vid.height - 100, 60, 60 );
	upButton->SetRealPosition(383,701);

	downButton = new idUIButton( "newui/Black_Arrow_Down.tga", 30, vid.height - 200, 60, 60 );
	downButton->SetRealPosition(431,701);

	leftButton = new idUIButton( "newui/Black_Arrow_Left.tga", vid.width - 210, vid.height - 150, 60, 60 );
	leftButton->SetRealPosition(383,162);

	rightButton = new idUIButton( "newui/Black_Arrow_Right.tga", vid.width - 90, vid.height - 150, 60, 60 );
	rightButton->SetRealPosition(402,40);

	fireButton =  new idUIButton( "newui/FireButton.tga", vid.width - 150, vid.height - 210, 60, 60 );
	fireButton->SetRealPosition(366,91);

	menuButton =  new idUIButton( "newui/FireButton.tga", vid.width - 150, 210, 60, 60 );
	menuButton->SetRealPosition(60,101);

	acceptButton =  new idUIButton( "newui/FireButton.tga", vid.width - 75, 210, 60, 60 );
	acceptButton->SetRealPosition(56,18);
		
	jumpButton =  new idUIButton( "newui/FireButton.tga", vid.width - 75, 210, 60, 60 );
	jumpButton->SetRealPosition(412,91);
	//menuButton->SetRealPosition(412,91);
}

void idNewHud::Draw( void ) {
	upButton->Draw();
	downButton->Draw();

	leftButton->Draw();
	rightButton->Draw();

	fireButton->Draw();

	menuButton->Draw();

	acceptButton->Draw();
}

void idUIButton::SetRealPosition( int x, int y ) {
	_realx = x;
	_realy = y;

}

void idNewHud::OnPressEvent( int x, int y ) {
	/*int _x = (vid.height - y) / 2;
	int _y = (vid.width + ((vid.height - x)) / 2.0);
*/
	//int _x = (vid.height - y);
	//int _y = x;

	if(upButton->IsPointInsideRealButtonPosition(x,y)) {
		Key_Event( K_UPARROW, true );
	}
	else {
		Key_Event( K_UPARROW, false );
	}

	if(downButton->IsPointInsideRealButtonPosition(x,y)) {
		Key_Event( K_DOWNARROW, true );
		
	}
	else {
		Key_Event( K_DOWNARROW, false );
	}

	if(leftButton->IsPointInsideRealButtonPosition(x,y)) {
		Key_Event( K_LEFTARROW, true );
		
	}
	else {
		Key_Event( K_LEFTARROW, false );
	}

	if(rightButton->IsPointInsideRealButtonPosition(x,y)) {
		Key_Event( K_RIGHTARROW, true );
		
	}
	else {
		Key_Event( K_RIGHTARROW, false );
	}

	if(fireButton->IsPointInsideRealButtonPosition(x,y)) {
		Key_Event( K_CTRL, true );
		
	}
	else {
		Key_Event( K_CTRL, false );
	}

	//	
	if(menuButton->IsPointInsideRealButtonPosition(x,y)) {
		Key_Event( K_ESCAPE, true );
	}
	else {
		Key_Event( K_ESCAPE, false );
	}

		
	if(acceptButton->IsPointInsideRealButtonPosition(x,y)) {
		Key_Event(K_ENTER, true );
	}
	else {
		Key_Event( K_ENTER, false );
	}

	if(jumpButton->IsPointInsideRealButtonPosition(x,y)) {
		Key_Event(K_SPACE, true );
	}
	else {
		Key_Event( K_SPACE, false );
	}


}

void idNewHud::OnPressRelease( int x, int y ) {

	//parentWidth - (rect.size.width + rect.origin.x)
	/*int _x = (vid.height - y) / 2;
	int _y = vid.width + ((vid.height - x) / 2.0);

	if(menuButton->IsPointInsideButton( _x, _y )) {
		Key_Event( K_ESCAPE, true );
	}
	else {
		Key_Event( K_ESCAPE, false );
	}*/


	////if(!upButton->IsPointInsideButton( _x, _y )) 
	//{
	//	Key_Event( K_UPARROW, false );
	//}


	////if(!downButton->IsPointInsideButton( _x, _y )) 
	//{
	//	Key_Event( K_DOWNARROW, false );
	//	
	//}

	////if(!leftButton->IsPointInsideButton( _x, _y )) 
	//{
	//	Key_Event( K_LEFTARROW, false );
	//}


	////if(!rightButton->IsPointInsideButton( _x, _y )) 
	//{
	//	Key_Event( K_RIGHTARROW, false );
	//	
	//}


	{ 
		Key_Event( K_LEFTARROW, false );
		Key_Event( K_RIGHTARROW, false );
		Key_Event( K_UPARROW, false );
		Key_Event( K_DOWNARROW, false );
		Key_Event( K_ENTER, false );
		
		Key_Event( K_SPACE, false );
		Key_Event( K_CTRL, false );

		Key_Event( K_ESCAPE, false );
		
	}

}