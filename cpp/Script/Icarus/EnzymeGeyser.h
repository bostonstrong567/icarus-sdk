// /Script/Icarus.EnzymeGeyser
// Derives from: AIcarusActor > AActor > UObject
// size 0x2E0, declared in Icarus/Source/Icarus/Objects/EnzymeGeyser.h

UCLASS(Config=Engine)
class AEnzymeGeyser : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 Completions;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FHordeRowHandle HordeRowHandle;  // 0x02C4, size 0x18
};
