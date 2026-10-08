// /Script/Icarus.DropShipSequence
// size 0x30, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/DropShipSequencesLibrary.generated.h

USTRUCT()
struct FDropShipSequence : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDropShipEvent> Events;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* Trajectory;  // 0x0028, size 0x8
};
