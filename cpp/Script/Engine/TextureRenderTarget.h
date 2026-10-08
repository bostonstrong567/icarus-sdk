// /Script/Engine.TextureRenderTarget
// Derives from: UTexture > UStreamableRenderAsset > UObject
// size 0x180, declared in Engine/Source/Runtime/Engine/Classes/Engine/TextureRenderTarget.h

UCLASS(Abstract, MinimalAPI)
class UTextureRenderTarget : public UTexture
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetGamma;  // 0x0178, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    uint32 : 1 bNeedsTwoCopies;  // 0x017C
    uint32 : 1 bCanCreateUAV;  // 0x017C
};
