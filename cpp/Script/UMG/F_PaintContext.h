// /Script/UMG.PaintContext
// size 0x30, declared in Engine/Source/Runtime/UMG/Public/Blueprint/UserWidget.h

USTRUCT()
struct FPaintContext
{

    // Not reflected:
    const FGeometry & AllottedGeometry;  // 0x0000
    const FSlateRect & MyCullingRect;  // 0x0008
    FSlateWindowElementList & OutDrawElements;  // 0x0010
    int32 LayerId;  // 0x0018
    const FWidgetStyle & WidgetStyle;  // 0x0020
    bool bParentEnabled;  // 0x0028
    int32 MaxLayer;  // 0x002C
};
