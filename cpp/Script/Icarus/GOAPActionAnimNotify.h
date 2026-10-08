// /Script/Icarus.GOAPActionAnimNotify
// Derives from: UAnimNotify > UObject
// size 0x48, declared in Icarus/Source/Icarus/AI/GOAPActionAnimNotify.h

UCLASS(Const)
class UGOAPActionAnimNotify : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString NotifyName;  // 0x0038, size 0x10
};
