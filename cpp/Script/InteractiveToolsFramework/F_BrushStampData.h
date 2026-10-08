// /Script/InteractiveToolsFramework.BrushStampData
// size 0xA8, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseTools/BaseBrushTool.h

USTRUCT()
struct FBrushStampData
{

    // Not reflected:
    float Radius;  // 0x0000
    FVector WorldPosition;  // 0x0004
    FVector WorldNormal;  // 0x0010
    FHitResult HitResult;  // 0x001C
    float Falloff;  // 0x00A4
};
