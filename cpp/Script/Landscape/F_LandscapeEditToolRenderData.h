// /Script/Landscape.LandscapeEditToolRenderData
// size 0x38, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeComponent.h

USTRUCT()
struct FLandscapeEditToolRenderData
{
public:
    UPROPERTY() UMaterialInterface* ToolMaterial;  // 0x0000, size 0x8
    UPROPERTY() UMaterialInterface* GizmoMaterial;  // 0x0008, size 0x8
    UPROPERTY() int32 SelectedType;  // 0x0010, size 0x4
    UPROPERTY() int32 DebugChannelR;  // 0x0014, size 0x4
    UPROPERTY() int32 DebugChannelG;  // 0x0018, size 0x4
    UPROPERTY() int32 DebugChannelB;  // 0x001C, size 0x4
    UPROPERTY() UTexture2D* DataTexture;  // 0x0020, size 0x8
    UPROPERTY() UTexture2D* LayerContributionTexture;  // 0x0028, size 0x8
    UPROPERTY() UTexture2D* DirtyTexture;  // 0x0030, size 0x8
};
