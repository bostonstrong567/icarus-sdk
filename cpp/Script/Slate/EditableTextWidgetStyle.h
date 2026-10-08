// /Script/Slate.EditableTextWidgetStyle
// Derives from: USlateWidgetStyleContainerBase > UObject
// size 0x250, declared in Engine/Source/Runtime/Slate/Public/Framework/Styling/EditableTextWidgetStyle.h

UCLASS(MinimalAPI)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
    UPROPERTY(EditAnywhere) FEditableTextStyle EditableTextStyle;  // 0x0030, size 0x220
};
