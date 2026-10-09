// /Script/Engine.SubUVAnimation
// Derives from: UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Particles/SubUVAnimation.h

UCLASS(MinimalAPI)
class USubUVAnimation : public UObject
{
public:
    UPROPERTY(EditAnywhere) UTexture2D* SubUVTexture;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) int32 SubImages_Horizontal;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) int32 SubImages_Vertical;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<ESubUVBoundingVertexCount> BoundingMode;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EOpacitySourceMode> OpacitySourceMode;  // 0x0039, size 0x1
    UPROPERTY(EditAnywhere) float AlphaThreshold;  // 0x003C, size 0x4
private:
    FSubUVDerivedData DerivedData;  // 0x0040, not reflected
    FRenderCommandFence ReleaseFence;  // 0x0050, not reflected
    FSubUVBoundingGeometryBuffer * BoundingGeometryBuffer;  // 0x0060, not reflected
};
