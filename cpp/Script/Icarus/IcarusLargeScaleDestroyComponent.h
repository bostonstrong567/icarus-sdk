// /Script/Icarus.IcarusLargeScaleDestroyComponent
// Derives from: UActorComponent > UObject
// size 0x148, declared in Icarus/Source/Icarus/Systems/Damage/IcarusLargeScaleDestroyComponent.h

UCLASS(Config=Engine)
class UIcarusLargeScaleDestroyComponent : public UActorComponent
{
public:
    UPROPERTY(BlueprintAssignable) FActorDamagedSignature ActorDamaged;  // 0x00B0, size 0x10
    UPROPERTY(BlueprintAssignable) FLargeScaleActorDestroyedSignature ActorDestroyed;  // 0x00C0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FLargeScaleDestroyParams DestroyParams;  // 0x00D0, private
    TArray<UIcarusLargeScaleDestroyComponent::ActorAndDistance,TSizedDefaultAllocator<32> > Structures;  // 0x0110, private
    int32 StructuresIndex;  // 0x0120, private
    TArray<UIcarusLargeScaleDestroyComponent::ActorAndDistance,TSizedDefaultAllocator<32> > Characters;  // 0x0128, private
    int32 CharacterIndex;  // 0x0138, private
    float TimeElapsed;  // 0x013C, private
    int32 MaxDistanceSq;  // 0x0140, private
};
