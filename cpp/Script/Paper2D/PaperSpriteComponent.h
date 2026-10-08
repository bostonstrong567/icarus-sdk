// /Script/Paper2D.PaperSpriteComponent
// Derives from: UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x4A0, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteComponent.h

UCLASS(Config=Engine)
class UPaperSpriteComponent : public UMeshComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UPaperSprite* SourceSprite;  // 0x0478, size 0x8
    UPROPERTY(Deprecated) UMaterialInterface* MaterialOverride;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) FLinearColor SpriteColor;  // 0x0488, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure) UPaperSprite* GetSprite();  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool SetSprite(UPaperSprite* NewSprite);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetSpriteColor(FLinearColor NewColor);  // parameters 0x10

    // Virtual functions that start here:
    //   GetSprite, SetSprite
};
