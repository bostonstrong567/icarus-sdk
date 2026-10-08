// /Script/Icarus.FLODTileBehaviourHarness
// Derives from: AActor > UObject
// size 0x238, declared in Icarus/Source/Icarus/Systems/FLOD/FLODTileBehaviourHarness.h

UCLASS(Config=Engine)
class AFLODTileBehaviourHarness : public AActor
{
public:
    UPROPERTY(EditAnywhere) AFLODTile* OwnerTile;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, Replicated) TArray<UFlammableFISM*> FlammableComponents;  // 0x0228, size 0x10
};
