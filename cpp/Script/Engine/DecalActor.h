// /Script/Engine.DecalActor
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Engine/DecalActor.h

UCLASS(Config=Engine)
class ADecalActor : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UDecalComponent* Decal;  // 0x0220, size 0x8
public:
    UFUNCTION(BlueprintCallable) UMaterialInstanceDynamic* CreateDynamicMaterialInstance();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UMaterialInterface* GetDecalMaterial() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetDecalMaterial(UMaterialInterface* NewDecalMaterial);  // parameters 0x8

    // Virtual functions that start here:
    //   CreateDynamicMaterialInstance
};
