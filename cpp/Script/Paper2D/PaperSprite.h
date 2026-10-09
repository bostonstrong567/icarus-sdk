// /Script/Paper2D.PaperSprite
// Derives from: UObject
// size 0xA8, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h

UCLASS()
class UPaperSprite : public UObject, public IInterface_CollisionDataProvider, public ISlateTextureAtlasInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) UBodySetup* BodySetup;  // 0x0088, size 0x8
    UPROPERTY() int32 AlternateMaterialSplitIndex;  // 0x0090, size 0x4
    UPROPERTY() TArray<FVector4> BakedRenderData;  // 0x0098, size 0x10
protected:
    UPROPERTY(EditAnywhere) TArray<UTexture*> AdditionalSourceTextures;  // 0x0038, size 0x10
    UPROPERTY() FVector2D BakedSourceUV;  // 0x0048, size 0x8
    UPROPERTY() FVector2D BakedSourceDimension;  // 0x0050, size 0x8
    UPROPERTY() UTexture2D* BakedSourceTexture;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UMaterialInterface* DefaultMaterial;  // 0x0060, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UMaterialInterface* AlternateMaterial;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere) TArray<FPaperSpriteSocket> Sockets;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere) TEnumAsByte<ESpriteCollisionMode> SpriteCollisionDomain;  // 0x0080, size 0x1
    UPROPERTY(EditAnywhere) float PixelsPerUnrealUnit;  // 0x0084, size 0x4
};
