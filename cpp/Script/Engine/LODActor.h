// /Script/Engine.LODActor
// Derives from: AActor > UObject
// size 0x2A8, declared in Engine/Source/Runtime/Engine/Classes/Engine/LODActor.h

UCLASS(NotPlaceable, Config=Engine)
class ALODActor : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) int32 LODLevel;  // 0x028C, size 0x4
    UPROPERTY(EditAnywhere) TArray<AActor*> SubActors;  // 0x0290, size 0x10
    UPROPERTY() uint8 CachedNumHLODLevels;  // 0x02A0, size 0x1
private:
    UPROPERTY(EditAnywhere, Instanced) UStaticMeshComponent* StaticMeshComponent;  // 0x0220, size 0x8
    UPROPERTY(Transient) TMap<FHLODInstancingKey, UInstancedStaticMeshComponent*> InstancedStaticMeshComponents;  // 0x0228, size 0x50
    UPROPERTY(EditAnywhere) UHLODProxy* Proxy;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere) FName Key;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere) float LODDrawDistance;  // 0x0288, size 0x4
    uint8 : 1 bHasActorTriedToRegisterComponents;  // 0x02A1, not reflected
    uint8 : 1 bHasPatchedUpParent;  // 0x02A1, not reflected
    uint8 : 1 bNeedsDrawDistanceReset;  // 0x02A1, not reflected
    uint8 : 1 bRequiresLODScreenSizeConversion;  // 0x02A1, not reflected
    float ResetDrawDistanceTime;  // 0x02A4, not reflected
};
