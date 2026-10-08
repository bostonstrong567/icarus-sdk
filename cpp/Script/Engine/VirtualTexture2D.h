// /Script/Engine.VirtualTexture2D
// Derives from: UTexture2D > UTexture > UStreamableRenderAsset > UObject
// size 0x1B0, declared in Engine/Source/Runtime/Engine/Classes/VT/VirtualTexture.h

UCLASS()
class UVirtualTexture2D : public UTexture2D
{
public:
    UPROPERTY() FVirtualTextureBuildSettings Settings;  // 0x01A0, size 0xC
    UPROPERTY() bool bContinuousUpdate;  // 0x01AC, size 0x1
    UPROPERTY() bool bSinglePhysicalSpace;  // 0x01AD, size 0x1
};
