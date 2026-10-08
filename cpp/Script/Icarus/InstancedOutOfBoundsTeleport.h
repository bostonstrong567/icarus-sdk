// /Script/Icarus.InstancedOutOfBoundsTeleport
// Derives from: AActor > UObject
// size 0x228, declared in Icarus/Source/Icarus/World/InstancedLevels/InstancedOutOfBoundsTeleport.h

UCLASS(Config=Engine)
class AInstancedOutOfBoundsTeleport : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBoxComponent* BoxCollision;  // 0x0220, size 0x8

    UFUNCTION() void OnTriggerBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
};
