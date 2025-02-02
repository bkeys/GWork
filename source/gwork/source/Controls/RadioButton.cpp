/*
 *  Gwork
 *  Copyright (c) 2010 Facepunch Studios
 *  Copyright (c) 2013-2018 Billy Quith
 *  See license in Gwork.h
 */


#include <Gwork/Controls/RadioButton.h>

namespace Gwk
{
namespace Controls
{

GWK_CONTROL_CONSTRUCTOR(RadioButton)
{
    SetSizeFlags({SizeFlag::Fixed, SizeFlag::Fixed});
    SetSize(15, 15);
    SetMouseInputEnabled(true);
    SetTabable(false);
}

void RadioButton::Render(Skin::Base* skin)
{
    skin->DrawRadioButton(this, IsChecked(), IsDepressed());
}

}//namespace Controls
}//namespace Gwk
