// /Script/Icarus.IcarusSpawn
// Derives from: AActor > UObject
// size 0x238, declared in Icarus/Source/Icarus/Systems/IcarusSpawn.h

UCLASS(Config=Engine)
class AIcarusSpawn : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Instanced) UCapsuleComponent* SpawnCapsule;  // 0x0220, size 0x8
    TArray<AActor *,TSizedDefaultAllocator<32> > OverlappingActors;  // 0x0228, not reflected
public:
    UFUNCTION() void ActorBeginOverlaps(AActor* FirstActor, AActor* OtherActor);  // parameters 0x10
    UFUNCTION() void ActorEndOverlaps(AActor* FirstActor, AActor* OtherActor);  // parameters 0x10
};
