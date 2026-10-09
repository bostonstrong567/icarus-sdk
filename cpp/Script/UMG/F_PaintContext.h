// /Script/UMG.PaintContext
// size 0x30, declared in Engine/Source/Runtime/UMG/Public/Blueprint/UserWidget.h

USTRUCT()
struct FPaintContext
{
public:
    const FGeometry & AllottedGeometry;  // 0x0000, not reflected
    const FSlateRect & MyCullingRect;  // 0x0008, not reflected
    FSlateWindowElementList & OutDrawElements;  // 0x0010, not reflected
    int32 LayerId;  // 0x0018, not reflected
    const FWidgetStyle & WidgetStyle;  // 0x0020, not reflected
    bool bParentEnabled;  // 0x0028, not reflected
    int32 MaxLayer;  // 0x002C, not reflected
};
