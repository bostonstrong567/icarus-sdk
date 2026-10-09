// /Script/Icarus.OptionalResourceFlowData
// size 0x48, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/OptionalResourceFlowsLibrary.generated.h

USTRUCT()
struct FOptionalResourceFlowData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayedMessage;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ShortMessage;  // 0x0030, size 0x18
};
