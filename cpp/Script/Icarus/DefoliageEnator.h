// /Script/Icarus.DefoliageEnator
// Derives from: AInfo > AActor > UObject
// size 0x238, declared in Icarus/Source/Icarus/World/DefoliageEnator.h

UCLASS(Config=Engine)
class ADefoliageEnator : public AInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AActor> ActorClassToSpawn;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString NameOfFoliageType;  // 0x0228, size 0x10
};
