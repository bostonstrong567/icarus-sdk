// /Script/Icarus.IcarusAnimNotify_UpdateNPCStance
// Derives from: UAnimNotify > UObject
// size 0x40, declared in Icarus/Source/Icarus/Public/IcarusAnimNotify_UpdateNPCStance.h

UCLASS(Const)
class UIcarusAnimNotify_UpdateNPCStance : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EGOAPCharacterStance NewStance;  // 0x0038, size 0x1
};
