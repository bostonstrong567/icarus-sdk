// /Script/Engine.DecalComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x240, declared in Engine/Source/Runtime/Engine/Classes/Components/DecalComponent.h

UCLASS(Config=Engine)
class UDecalComponent : public USceneComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 SortOrder;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FadeScreenSize;  // 0x0204, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FadeStartDelay;  // 0x0208, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FadeDuration;  // 0x020C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FadeInDuration;  // 0x0210, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FadeInStartDelay;  // 0x0214, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bDestroyOwnerAfterFade : 1;  // 0x0218, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector DecalSize;  // 0x021C, size 0xC
    FDeferredDecalProxy * SceneProxy;  // 0x0228, not reflected
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UMaterialInterface* DecalMaterial;  // 0x01F8, size 0x8
    FTimerHandle TimerHandle_DestroyDecalComponent;  // 0x0230, not reflected
public:
    UFUNCTION(BlueprintCallable) UMaterialInstanceDynamic* CreateDynamicMaterialInstance();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UMaterialInterface* GetDecalMaterial() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetFadeDuration() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetFadeInDuration() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetFadeInStartDelay() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetFadeStartDelay() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDecalMaterial(UMaterialInterface* NewDecalMaterial);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetFadeIn(float StartDelay, float Duaration);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetFadeScreenSize(float NewFadeScreenSize);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSortOrder(int32 Value);  // parameters 0x4

    // Virtual functions that start here:
    //   CreateDynamicMaterialInstance, CreateSceneProxy, GetMaterial, GetNumMaterials, GetUsedMaterials
    //   LifeSpanCallback, SetMaterial
};
