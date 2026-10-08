// /Script/SubstanceCore.SubstanceTexture2D
// Derives from: UTexture2DDynamic > UTexture > UStreamableRenderAsset > UObject
// size 0x1F0, declared in Engine/Plugins/Marketplace/Substance/Source/SubstanceCore/Classes/SubstanceTexture2D.h

UCLASS()
class USubstanceTexture2D : public UTexture2DDynamic
{
public:
    UPROPERTY(EditAnywhere) USubstanceGraphInstance* ParentInstance;  // 0x01C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<TextureAddress> AddressX;  // 0x01C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<TextureAddress> AddressY;  // 0x01C9, size 0x1
    UPROPERTY() bool bCooked;  // 0x01CA, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    uint32 mUid;  // 0x0190
    SubstanceAir::OutputInstance * OutputCopy;  // 0x0198
    OutputInstanceData mUserData;  // 0x01A0
    TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32> > Mips;  // 0x01D0
    bool bLinkLegacy;  // 0x01E0
};
