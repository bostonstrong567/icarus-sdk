// /Script/Icarus.FlammableActorFLOD
// Derives from: UFlammableActor > UFlammableComponent > UTraitComponent > UActorComponent > UObject
// size 0x110, declared in Icarus/Source/Icarus/Traits/FlammableActorFLOD.h

UCLASS(EditInlineNew, Config=Engine)
class UFlammableActorFLOD : public UFlammableActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UFLODActorComponent* FLODActorComponent;  // 0x0100, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UFlammableFISM* FlammableFISM;  // 0x0108, size 0x8

    UFUNCTION() void OnConceal(UFLODActorComponent* Component, AActor* Actor);  // parameters 0x10
    UFUNCTION() void OnRevealing(UFLODActorComponent* Component, AActor* Actor, const FTransform& Transform);  // parameters 0x40
    UFUNCTION(BlueprintNativeEvent) void OnUpdateInstanceVisuals(float FireSpread, float FireTemperature);  // parameters 0x8
    UFUNCTION() void RegisterRecordFlammableFISM(UFLODRecord* Record);  // parameters 0x8

    // Virtual functions that start here:
    //   OnUpdateInstanceVisuals_Implementation
};
