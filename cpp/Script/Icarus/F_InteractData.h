// /Script/Icarus.InteractData
// size 0x80, declared in Icarus/Source/Icarus/Traits/Behaviours/InteractableData.h

USTRUCT()
struct FInteractData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UInteractableBehaviour> Behaviour;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAuthorityType AuthorityType;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InteractCooldown;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText InteractionText;  // 0x0048, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStaminaActionCostsRowHandle InteractStaminaCost;  // 0x0060, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShowInteractionWhenUnavailable;  // 0x0078, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCanPerformInteractionWhileSeated;  // 0x0079, size 0x1
};
