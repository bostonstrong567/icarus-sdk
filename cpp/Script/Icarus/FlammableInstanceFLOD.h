// /Script/Icarus.FlammableInstanceFLOD
// Derives from: UFlammableInstance > UObject
// size 0x2D0, declared in Icarus/Source/Icarus/Systems/Disaster/FlammableInstanceFLOD.h

UCLASS()
class UFlammableInstanceFLOD : public UFlammableInstance
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UFlammableFISM* FlammableFISMComponent;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 InstanceIndex;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UFlammableActorFLOD* FlammableFLODActor;  // 0x02C8, size 0x8
};
