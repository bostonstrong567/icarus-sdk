// /Script/Icarus.ActionStaminaCostEventPairing
// size 0x1C, declared in Icarus/Source/Icarus/Traits/Behaviours/ActionableBehaviour.h

USTRUCT()
struct FActionStaminaCostEventPairing
{
public:
    UPROPERTY() EActionableEventType Event;  // 0x0000, size 0x1
    UPROPERTY() FStaminaActionCostsRowHandle StaminaCost;  // 0x0004, size 0x18
};
