// /Script/InteractiveToolsFramework.BrushStampData
// size 0xA8, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseTools/BaseBrushTool.h

USTRUCT()
struct FBrushStampData
{
public:
    float Radius;  // 0x0000, not reflected
    FVector WorldPosition;  // 0x0004, not reflected
    FVector WorldNormal;  // 0x0010, not reflected
    FHitResult HitResult;  // 0x001C, not reflected
    float Falloff;  // 0x00A4, not reflected
};
