// /Script/Engine.Texture2DArray
// Derives from: UTexture > UStreamableRenderAsset > UObject
// size 0x1E0, declared in Engine/Source/Runtime/Engine/Classes/Engine/Texture2DArray.h

UCLASS(MinimalAPI)
class UTexture2DArray : public UTexture
{
public:
    FTexturePlatformData * PlatformData;  // 0x0178, not reflected
    TMap<FString,FTexturePlatformData *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTexturePlatformData *,0> > CookedPlatformData;  // 0x0180, not reflected
    UPROPERTY(EditAnywhere) TEnumAsByte<TextureAddress> AddressX;  // 0x01D0, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<TextureAddress> AddressY;  // 0x01D1, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<TextureAddress> AddressZ;  // 0x01D2, size 0x1
};
