// /Script/GameplayTexture.GameplayTexture
// Derives from: UObject
// size 0x60, declared in Icarus/Plugins/GameplayTexture/Source/GameplayTexture/Public/GameplayTexture.h

UCLASS()
class UGameplayTexture : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TArray<FColor> TextureData;  // 0x0028, size 0x10
    UPROPERTY() FIntPoint CachedResolution;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) UTexture2D* SourceTexture;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere) FIntPoint Resolution;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere) FVector2D BeginUV;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere) FVector2D EndUV;  // 0x0058, size 0x8
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) UTexture2D* GetSourceTexture() const;  // parameters 0x8
};
