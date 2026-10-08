// /Script/Icarus.FlammableState_Combusted
// Derives from: UFlammableState > UObject
// size 0x38, declared in Icarus/Source/Icarus/Systems/Disaster/FlammableState.h

UCLASS()
class UFlammableState_Combusted : public UFlammableState
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bDetachAfterCombusted;  // 0x0030, size 0x1
};
