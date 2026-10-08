// /Script/ChaosSolverEngine.ChaosBreakEvent
// size 0x30, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/GeometryCollectionEngine/GeometryCollectionComponent.generated.h

USTRUCT()
struct FChaosBreakEvent
{
    UPROPERTY(Instanced, BlueprintReadOnly) UPrimitiveComponent* Component;  // 0x0000, size 0x8
    UPROPERTY(BlueprintReadOnly) FVector Location;  // 0x0008, size 0xC
    UPROPERTY(BlueprintReadOnly) FVector Velocity;  // 0x0014, size 0xC
    UPROPERTY(BlueprintReadOnly) FVector AngularVelocity;  // 0x0020, size 0xC
    UPROPERTY(BlueprintReadOnly) float Mass;  // 0x002C, size 0x4
};
